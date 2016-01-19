#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "tric.h"
#include "solution.h"
#include "QMap"
#include "QDoubleSpinBox"
#include "QCheckBox"
#include "QRadioButton"
#include "QComboBox"
#include "QVector"
#include "QString"
#include "QList"
#include "QProcess"
#include "QFile"
#include "QTextStream"
#include "QDate"
#include "QRegExp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int countOfSolution;
    tric *tric1 = new tric();
    struct pointOfGraf;
    QMap<int, pointOfGraf> graf;
    double (*methods[37])(double[]);
    QString (*methodsText[37])(double[]);
    QString textForCurrentMethod;
    QString testText;
    int action;
    QMap<int, QDoubleSpinBox*> doubleSpinBoxes;
    QMap<int, QCheckBox*> checkBoxes;
    QMap<int, QRadioButton*> radioButtonsUnknown;
    QMap<int, QRadioButton*> radioButtonsHave;
    QMap<int, QRadioButton*> radioButtonsFind;
    QMap<int, QComboBox*> comboUnits;
    QVector<QString> needToFind;
    QVector<Solution> solution;
    bool findedThatWeWantGet;
    struct OsDetails{
        QString os;
        QString version;
    } osDetails;
    QProcess *proc = new QProcess();
    QFile latexFile;
    QList<QString> pdfProgramsLinux;
    QList<QString> latexProgramsLinux;
    QString pathToLatexProgram, pathToPdfProgram;

    void createTexFile();
    void convertToPdf();
    void openPdf();
    QString osVersion();
    
private:
    Ui::MainWindow *ui;
    void calculate();
    void convert();
    void refresh();
    QList<QList<int> > findMethodsStory();
    double findParam(int, QTextStream *stream);

public slots:
    void checkBoxClicked(bool);
    void getData();
private slots:
    void on_btnDemo_clicked();
};

#endif // MAINWINDOW_H
