#pragma once
#include "BaseHMI.h"
#include "LocationServiceProxy.h"

class hmiDiag : public BaseHMI
{
	Q_OBJECT

public :
	hmiDiag(QObject *obj);
	virtual ~hmiDiag();

/****************************************************
 *
 * adaptor for ServiceInterface
 */
public slots:
	virtual void showApp(bool show);
	virtual void showHMI(bool show);
	void test();

private :
	LocationServiceProxy *m_proxy;
};

