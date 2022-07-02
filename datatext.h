#ifndef DATATEXT_H
#define DATATEXT_H
#include <QtQuick/QQuickItem>

class DataText : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
public:
    DataText(QQuickItem *parent = 0);

    QString text() const;
    void setText(const QString &text);
    QString getText();

    QString getDBusData();

    Q_INVOKABLE void changeTextWithoutSerialization();
    Q_INVOKABLE void changeTextWithSerialization();
signals:
    void textChanged();
    void completed();

private:
    QString m_text;
};

#endif // DATATEXT_H
