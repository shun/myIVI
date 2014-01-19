#include "LocationServiceProxy.h"

LocationServiceProxy::LocationServiceProxy()
{
	m_iface = new LocationServiceSvcInterface();
}

LocationServiceProxy::~LocationServiceProxy()
{
	if (NULL != m_iface)
	{
		delete m_iface;
		m_iface = NULL;
	}
}

int LocationServiceProxy::getLocation()
{
	int ret = -1;
	ret = m_iface->getLocation();
	return ret;
}
