#include "LocationService.h"

LocationService::LocationService(QObject *obj) : LocationServiceListener(obj)
{
}

LocationService::~LocationService()
{
}

int LocationService::getLocation()
{
	return 0;
}
