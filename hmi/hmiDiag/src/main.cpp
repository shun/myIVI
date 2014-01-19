#include <QCoreApplication>
#include <QDBusConnection>
#include "HmiDiag.h"

int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    QObject obj;
	HmiDiag hmi(&obj);
    QDBusConnection::sessionBus().registerObject("/", &obj);

    if (!QDBusConnection::sessionBus().registerService("sk.si.HmiDiag"))
	{
        qDebug("%s\n",
        		"");
                //qPrintable(QDBusConnection::sessionBus().lastError().message()));
        exit(1);
    }

    return app.exec();
}
