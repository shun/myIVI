#pragma once
#include "BaseHMI.h"
#include "LocationServiceProxy.h"

class HmiDiag : public BaseHMI
{
	Q_OBJECT

public :
	HmiDiag(QObject *obj);
	virtual ~HmiDiag();

/****************************************************
 *
 * adaptor for ServiceInterface
 */
public slots:
	virtual void showApp(bool show);
	virtual void showHMI(bool show);

private :
	LocationServiceProxy *m_proxy;
};

