#pragma once
#include "LocationServiceListener.h"

class LocationService : public LocationServiceListener
{
	Q_OBJECT

public :
	LocationService(QObject * obj);
	virtual ~LocationService();

	virtual int getLocation();
};

