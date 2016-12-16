#include <QApplication>
#include <QInputDialog>
#include <QLocale>
#include <QLibraryInfo>
#include "fenetrependu.h"
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenPrincipale fenetre;
    fenetre.show();

    return app.exec();
}
