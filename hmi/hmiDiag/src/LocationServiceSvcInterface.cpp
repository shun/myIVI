#include <QDBusConnection>
#include <QDBusInterface>
#include <QDBusReply>
#include "LocationServiceSvcInterface.h"
#include "SIProtocolProxy.h"

LocationServiceSvcInterface::LocationServiceSvcInterface()
{
	m_protocol = new SIProtocolProxy("sk.si.LocationService",
							   "sk.si.LocationServiceListener",
							   this);
}

LocationServiceSvcInterface::~LocationServiceSvcInterface()
{
	if (NULL != m_protocol)
	{
		delete m_protocol;
		m_protocol = NULL;
	}
}

int LocationServiceSvcInterface::getLocation()
{
	QDBusReply<int> reply = m_protocol->call("getLocation");

	if (!reply.isValid())
	{
		qDebug("[ERROR]\t%s\t%d\t%s",
			   __FUNCTION__,
			   __LINE__,
			   qPrintable(QDBusError::errorString(reply.error().type())));
	}
	
	return reply.value();
}
