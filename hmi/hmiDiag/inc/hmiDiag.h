#pragma once
#include "BaseHMI.h"

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
	void showApp(bool show);
	void showHMI(bool show);
};

