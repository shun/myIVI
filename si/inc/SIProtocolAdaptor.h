#pragma once
#include <QDBusAbstractAdaptor>

class SIProtocolAdaptor : public QDBusAbstractAdaptor
{
	Q_OBJECT

public :
	SIProtocolAdaptor(QObject *obj) : QDBusAbstractAdaptor(obj){};
	virtual ~SIProtocolAdaptor(){};

};
