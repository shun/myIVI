#pragma once
#include "BaseHMIListener.h"

class BaseHMI : public BaseHMIListener
{
	Q_OBJECT

public :
	BaseHMI(QObject *obj) : BaseHMIListener(obj){};
	virtual ~BaseHMI(){};
};

