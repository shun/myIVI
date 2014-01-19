#pragma once
#include <QObject>
#include "SIProtocolProxy.h"

class LocationServiceSvcInterface : public QObject
{
	Q_OBJECT

public :
	LocationServiceSvcInterface();
	~LocationServiceSvcInterface();

	int getLocation();

private :
	SIProtocolProxy *m_protocol;
};
