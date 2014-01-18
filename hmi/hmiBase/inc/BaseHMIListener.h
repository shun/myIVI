#pragma once
#include "SIProtocolAdaptor.h"

class BaseHMIListener : public SIProtocolAdaptor
{
	Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "sk.si.BaseHMILisener")

/****************************************************
 *
 */
public :
	BaseHMIListener(QObject *obj) : SIProtocolAdaptor(obj){};
	~BaseHMIListener(){};

/****************************************************
 *
 */
signals:

/****************************************************
 *
 * adaptor for ServiceInterface
 */
public slots:
	virtual void showApp(bool show) = 0;
	virtual void showHMI(bool show) = 0;
};

