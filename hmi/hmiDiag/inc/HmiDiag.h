#pragma once
#include "BaseHMI.h"
#include "LocationServiceProxy.h"

class HmiDiag : public BaseHMI
{
	Q_OBJECT

public :
	HmiDiag(QObject *obj);
	virtual ~HmiDiag();

private :
	LocationServiceProxy *m_proxy;
/****************************************************
 *
 * adaptor for ServiceInterface
 */
public slots:
	virtual void showHMI(bool show);
};

