#include "hmiDiag.h"

hmiDiag::hmiDiag(QObject *obj) : BaseHMI(obj)
{
	m_proxy = new LocationServiceProxy();
}

hmiDiag::~hmiDiag()
{
	if (NULL != m_proxy)
	{
		delete m_proxy;
		m_proxy = NULL;
	}
}

void hmiDiag::showApp(bool show)
{
}

void hmiDiag::showHMI(bool show)
{
}

void hmiDiag::test()
{
	int ret = m_proxy->getLocation();
}
