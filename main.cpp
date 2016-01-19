#include <QtGui/QApplication>
#include "mainwindow.h"
#include "solution.h"
#include "QString"
#include "cmath"
#include "iostream"
#include "QDebug"
#include "QTranslator"
#include "QLocale"
#include "QTextCodec"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator Translator(0);
    Translator.load(QString(QApplication::applicationDirPath() + QString("/I18nApp_") + QLocale::system().name()), ".");
    a.installTranslator(&Translator);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    MainWindow w;
    w.show();
    return a.exec();
}
