#pragma once
#include "SIProtocolAdaptor.h"
#include "LocationInfo.h"

class LocationServiceListener : public SIProtocolAdaptor
{
	Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "sk.si.LocationServiceListener")

/****************************************************
 *
 */
public :
	LocationServiceListener(QObject *obj) : SIProtocolAdaptor(obj){};
	~LocationServiceListener(){};

/****************************************************
 *
 */
signals:

/****************************************************
 *
 * adaptor for ServiceInterface
 */
public slots:
	virtual int getLocation() = 0;
};

