#pragma once
#include <QObject>
#include "LocationServiceSvcInterface.h"
#include "LocationServiceSIImpl.h"

class LocationServiceProxy : public LocationServiceSIImpl
{
	Q_OBJECT

public :
	LocationServiceProxy();
	~LocationServiceProxy();

	virtual int getLocation();

private :
	LocationServiceSvcInterface *m_iface;
};
