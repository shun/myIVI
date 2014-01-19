#pragma once
#include <QDBusInterface>

class SIProtocolProxy : public QDBusInterface
{
	Q_OBJECT

public :
	SIProtocolProxy(const QString &svcname, const QString &ifname, QObject *parent) :
	QDBusInterface(svcname, "/", ifname, QDBusConnection::sessionBus(), parent){}
	virtual ~SIProtocolProxy(){qDebug("### %s", __FUNCTION__);}
};
