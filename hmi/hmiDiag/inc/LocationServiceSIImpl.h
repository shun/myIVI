#pragma once
#include <QObject>

class LocationServiceSIImpl : public QObject
{
	Q_OBJECT

public :
	LocationServiceSIImpl(){};
	virtual ~LocationServiceSIImpl(){};

	virtual int getLocation() = 0;
};

