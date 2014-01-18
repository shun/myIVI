#include <QCoreApplication>
#include <QDBusConnection>
#include "hmiDiag.h"

int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    QObject obj;
	hmiDiag hmi(&obj);
    QDBusConnection::sessionBus().registerObject("/", &obj);

    if (!QDBusConnection::sessionBus().registerService("sk.si.hmiDiag"))
	{
        qDebug("%s\n",
        		"");
                //qPrintable(QDBusConnection::sessionBus().lastError().message()));
        exit(1);
    }

    return app.exec();
}
