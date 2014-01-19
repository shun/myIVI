#include <QCoreApplication>
#include <QDBusConnection>
#include "LocationService.h"

int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    QObject obj;
	LocationService service(&obj);
    QDBusConnection::sessionBus().registerObject("/", &obj);

    if (!QDBusConnection::sessionBus().registerService("sk.si.LocationService"))
	{
        qDebug("%s\n",
        		"");
                //qPrintable(QDBusConnection::sessionBus().lastError().message()));
        exit(1);
    }

    return app.exec();
}
