#include "datatext.h"
#include <QtDBus/QtDBus>
#include "SystemDataItem.h"

DataText::DataText(QQuickItem *parent)
    : QQuickItem(parent)
{
}


void DataText::setText(const QString &text)
{
    m_text = text;
}

QString DataText::getDBusData()
{
    if (!QDBusConnection::sessionBus().isConnected()) {
        return QString();
    }

    QDBusConnection bus = QDBusConnection::systemBus();
    QDBusInterface dbus_iface("org.freedesktop.hostname1", "/org/freedesktop/hostname1",
                              "org.freedesktop.hostname1", bus);
    QList<QVariant> busData = dbus_iface.call("Describe").arguments();

    QString data = busData.at(0).toString();

    return data.replace(QChar('\''), QString("")).replace(QChar('\\'), QString(""));
}

void DataText::changeTextWithoutSerialization()
{
    setText(getDBusData());
    update();

    emit textChanged();
}

void DataText::changeTextWithSerialization()
{
    const QString dataToDeserialize = getDBusData();

    QJsonObject data = QJsonDocument::fromJson(dataToDeserialize.toUtf8()).object();

    SystemDataItem item = SystemDataItem::deserialize(data);

    setText(item.toString());
    update();

    emit textChanged();
}

QString DataText::getText()
{
    return m_text;
}

