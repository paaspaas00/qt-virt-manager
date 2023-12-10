#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(qt_virt_manager);
    QApplication app(argc, argv);

    QString name("qt-virt-manager");
    app.setOrganizationName(name);
    app.setApplicationName(name);

    QSettings::setDefaultFormat(QSettings::IniFormat);
    
    QTranslator translator;
    QLocale locale = QLocale();
    if (locale.language() == QLocale::Russian) {
        translator.load("qt_virt_manager_ru");
    } else if (locale.language() == QLocale::Italian) {
        translator.load("qt_virt_manager_it");
    };

    app.installTranslator(&translator);

    MainWindow window;
    window.show();

    return app.exec();
}
