#ifndef SYSTEMDATAITEM_H
#define SYSTEMDATAITEM_H

#include <QString>
#include <QJsonObject>
#include <QDebug>

class SystemDataItem
{

public:
    QString HostName;
    QString StaticHostname;
    QString PrettyHostname;
    QString HostnameSource;
    QString IconName;
    QString Chassis;
    QString Deployment;
    QString Location;
    QString KernelName;
    QString KernelRelease;
    QString KernelVersion;
    QString OperatingSystemPrettyName;
    QString OperatingSystemCPEName;
    QString OperatingSystemHomeURL;
    QString HardwareVendor;
    QString HardwareModel;
    QString ProductUUID;
    QString DefaultHostname;

    static SystemDataItem deserialize(QJsonObject & obj)
    {
        SystemDataItem result;

        result.HostName = obj.value("Hostname").toString();
        result.StaticHostname = obj.value("StaticHostname").toString();
        result.PrettyHostname = obj.value("PrettyHostname").toString();
        result.HostnameSource = obj.value("HostnameSource").toString();
        result.IconName = obj.value("IconName").toString();
        result.Chassis = obj.value("Chassis").toString();
        result.Deployment = obj.value("Deployment").toString();
        result.Location = obj.value("Location").toString();
        result.KernelName = obj.value("KernelName").toString();
        result.KernelRelease = obj.value("KernelRelease").toString();
        result.KernelVersion = obj.value("KernelVersion").toString();
        result.OperatingSystemPrettyName = obj.value("OperatingSystemPrettyName").toString();
        result.OperatingSystemCPEName = obj.value("OperatingSystemCPEName").toString();
        result.OperatingSystemHomeURL = obj.value("OperatingSystemHomeURL").toString();
        result.HardwareVendor = obj.value("HardwareVendor").toString();
        result.HardwareModel = obj.value("HardwareModel").toString();
        result.ProductUUID = obj.value("ProductUUID").toString();
        result.DefaultHostname = obj.value("DefaultHostname").toString();

        return result;
    }

    QString toString()
    {
        QString result;

        result.append("HostName: " + (this->HostName.isNull() ? "null" : this->HostName) + "\n");
        result.append("StaticHostname: " + (this->StaticHostname.isNull() ? "null" : this->StaticHostname) + "\n");
        result.append("PrettyHostname: " + (this->PrettyHostname.isNull() ? "null" : this->PrettyHostname) + "\n");
        result.append("DefaultHostname: " + (this->DefaultHostname.isNull() ? "null" : this->DefaultHostname) + "\n");
        result.append("HostnameSource: " + (this->HostnameSource.isNull() ? "null" : this->HostnameSource) + "\n");
        result.append("IconName: " + (this->IconName.isNull() ? "null" : this->IconName) + "\n");
        result.append("Chassis: " + (this->Chassis.isNull() ? "null" : this->Chassis) + "\n");
        result.append("Deployment: " + (this->Deployment.isNull() ? "null" : this->Deployment) + "\n");
        result.append("Location: " + (this->Location.isNull() ? "null" : this->Location) + "\n");
        result.append("KernelName: " + (this->KernelName.isNull() ? "null" : this->KernelName) + "\n");
        result.append("KernelRelease: " + (this->KernelRelease.isNull() ? "null" : this->KernelRelease) + "\n");
        result.append("KernelVersion: " + (this->KernelVersion.isNull() ? "null" : this->KernelVersion) + "\n");
        result.append("OperatingSystemPrettyName: " + (this->OperatingSystemPrettyName.isNull() ? "null" : this->OperatingSystemPrettyName) + "\n");
        result.append("OperatingSystemCPEName: " + (this->OperatingSystemCPEName.isNull() ? "null" : this->OperatingSystemCPEName) + "\n");
        result.append("OperatingSystemHomeURL: " + (this->OperatingSystemHomeURL.isNull() ? "null" : this->OperatingSystemHomeURL) + "\n");
        result.append("HardwareVendor: " + (this->HardwareVendor.isNull() ? "null" : this->HardwareVendor) + "\n");
        result.append("HardwareModel: " + (this->HardwareModel.isNull() ? "null" : this->HardwareModel) + "\n");
        result.append("ProductUUID: " + (this->ProductUUID.isNull() ? "null" : this->ProductUUID) + "\n");

        return result;
    }
};

#endif // SYSTEMDATAITEM_H
