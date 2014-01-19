#include "HmiDiag.h"

HmiDiag::HmiDiag(QObject *obj) : BaseHMI(obj)
{
	m_proxy = new LocationServiceProxy();
}

HmiDiag::~HmiDiag()
{
	if (NULL != m_proxy)
	{
		delete m_proxy;
		m_proxy = NULL;
	}
}

void HmiDiag::showHMI(bool show)
{
}

