#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMap"
#include "QList"
#include "math.h"
#include "QObject"

double teorCos(double arguments[]){ // double angle, double side1, double side2 // сторона за 2-ма сторонами та кутом між ними
    double angle = arguments[0] * M_PI / 180;
    return sqrt(pow(arguments[1], 2) + pow(arguments[2], 2) - 2 * arguments[1] * arguments[2] * cos(angle));
}
QString teorCosText(double arguments[]){
    QString angle = (arguments[0] == 30 || arguments[0] == 45 || arguments[0] == 60) ? QString::number(arguments[0]) : QString("%1^{\\circ}").arg(arguments[0] * M_PI / 180);
    QString str = QObject::tr("%1^{\\circ}=%2\\end{displaymath}\\begin{displaymath}").arg(arguments[0]).arg(arguments[0] * M_PI / 180);
    str += QObject::tr("\\sqrt{x^2+y^2-2\\cdot x\\cdot y\\cdot\\cos{(z)}},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = side1', \\verb'y = side2', \\verb'z = angle' ");
    str += QObject::tr("\\begin{displaymath}\\sqrt{%2^2+%3^2-2\\cdot%2\\cdot%3\\cdot\\cos{(%1)}}=").arg(angle).arg(arguments[1]).arg(arguments[2]);
    return str;
}

double teorCos2(double arguments[]){ // side1, side2, side3 // кут за 3-ма сторонами (наслідок теореми косинусів)
    return acos((arguments[1] * arguments[1] + arguments[2] * arguments[2] - arguments[0] * arguments[0]) / (2 * arguments[1] * arguments[2]));
}
QString teorCos2Text(double arguments[]){
    QString str = QObject::tr("\\arccos\\left({\\frac{b^2+c^2-a^2}{2bc}}\\right),\\end{displaymath}");
    str += QObject::tr("where \\verb'a = side1', \\verb'b = side2', \\verb'c = side3' ");
    str += QObject::tr("\\begin{displaymath}\\arccos\\left({\\frac{%2^2+%3^2-%1^2}{2\\cdot%2\\cdot%3}}\\right)=").arg(arguments[1]).arg(arguments[2]).arg(arguments[0]);
    return str;
}

double teorSin(double arguments[]){ // double angle1, double side1, double side2 // кут за 2-ма сторонами та кутом між ними
    return asin(sin(arguments[0]) * arguments[2] / arguments[1]);
}
QString teorSinText(double arguments[]){
    QString str = QObject::tr("\\arcsin{\\left(\\sin{\\frac{x\\cdot y}{z}}\\right)},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = angle1', \\verb'y = side2', \\verb'z = side1' ");
    str += QObject::tr("\\begin{displaymath}\\arcsin{\\left(\\frac{\\sin{(%1)}\\cdot%2}{%3}\\right)}=").arg(arguments[0]).arg(arguments[2]).arg(arguments[1]);
    return str;
}

double teorSin2(double arguments[]){ // side2, angle2, angle1 // сторона side1 за 2-ма кутами та стороною
    return (sin(arguments[2] * M_PI / 180) * arguments[0]) / sin(arguments[1] * M_PI / 180);
}
QString teorSin2Text(double arguments[]){
    double angle1 = arguments[1] * M_PI / 180;
    double angle2 = arguments[2] * M_PI / 180;
    QString str = QObject::tr("\\frac{\\sin{x}*y}{\\sin{z}},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = angle1', \\verb'y = side2', \\verb'z = angle2' ");
    str += QObject::tr("\\begin{displaymath}\\frac{\\sin{(%3^{\\circ})}\\cdot%2}{\\sin{(%1^{\\circ})}}").arg(arguments[1]).arg(arguments[0]).arg(arguments[2]);
    str += QString("=\\frac{%1*%2}{%3}\\thickapprox").arg(sin(angle2)).arg(arguments[0]).arg(sin(angle1));
    return str;
}

double squareFromHeight(double arguments[]){ // side1, height // площа за висотою та стороною
    return 1 / 2 * arguments[0] * arguments[1];
}
QString squareFromHeightText(double arguments[]){
    QString str = QObject::tr("\\frac{1}{2\\cdot x\\cdot y},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = side1', \\verb'y = height' ");
    str += QObject::tr("\\begin{displaymath}\\frac{1}{2\\cdot%1\\cdot%2}=").arg(arguments[0]).arg(arguments[1]);
    return str;
}

double formulaHerona(double arguments[]){ // side1, side2, side3 // площа за сторонами
    double p = (arguments[0] + arguments[1] + arguments[2]) / 2;
    return sqrt(p * (p - arguments[0]) * (p - arguments[1]) * (p - arguments[1]));
}
QString formulaHeronaText(double arguments[]){
    QString str = QObject::tr("\\sqrt{p\\cdot (x-y)\\cdot (x-z)},\\end{displaymath}");
    str += QObject::tr("where \\verb'p = '$\\frac{x+y+z}{2}$, \\verb'x = side1', \\verb'y = side2', \\verb'z = side3' ");
    double p = (arguments[0] + arguments[1] + arguments[2]) / 2;
    str += QObject::tr("\\begin{displaymath}\\sqrt{%1\\cdot(%1-%2)\\cdot(%1-%3)}=").arg(p).arg(arguments[0]).arg(arguments[1]);
    return str;
}

double outCircleRadius(double arguments[]){ // side1, side2, side3, square // радіус описаного кола
    return arguments[0] * arguments[1] * arguments[2] / (4 * arguments[3]);
}
QString outCircleRadiusText(double arguments[]){
    QString str = QObject::tr("\\frac{x\\cdot y\\cdot z}{4*k},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = side1', \\verb'y = side2', \\verb'z = side3', \\verb'k = square' ");
    str += QObject::tr("\\begin{displaymath}\\frac{%1\\cdot%2\\cdot%3}{4\\cdot%4}=").arg(arguments[0]).arg(arguments[1]).arg(arguments[2]).arg(arguments[3]);
    return str;
}

double inCircleRadius(double arguments[]){ // side1, side2, side3, square // радіус вписаного кола
    return 2 * arguments[3] / (arguments[0] + arguments[1] + arguments[2]);
}
QString inCircleRadiusText(double arguments[]){
    QString str = QObject::tr("\\frac{2*x}{y+z+k},\\end{displaymath}");
    str += QObject::tr("where \\verb'x = square', \\verb'y = side1', \\verb'z = side2', \\verb'k = side3' ");
    str += QObject::tr("\\begin{displaymath}\\frac{2*%4}{%1+%2+%3}=").arg(arguments[0]).arg(arguments[1]).arg(arguments[2]).arg(arguments[3]);
    return str;
}

double outAngle(double arguments[]){ // angle // зовнішній кут
    return 180 - arguments[0];
}
QString outAngleText(double arguments[]){
    QString str = QObject::tr("180-x=y,\\end{displaymath}");
    str += QObject::tr("where \\verb'x = angle', \\verb'y = outAngle'");
    str += QObject::tr("\\begin{displaymath}180-%1=").arg(arguments[0] * 180 / M_PI);
    return str;
}

double innerAngle(double arguments[]){ // outAngle // внутрішній кут
    return 180 - arguments[0];
}
QString innerAngleText(double arguments[]){
    return QObject::tr("180-x=y,\\end{displaymath}where \\verb'x = outAngle', \\verb'y = angle' \\begin{displaymath}180-%1=").arg(arguments[0] * 180 / M_PI);
}

double thirdAngle(double arguments[]){ // angle1, angle2 // третій кут
    return 180 - arguments[0] - arguments[1];
}
QString thirdAngleText(double arguments[]){
    return QObject::tr("180^{\\circ}-x^{\\circ}-y^{\\circ}=z^{\\circ},\\end{displaymath}where \\verb'x = angle1', \\verb'y = angle2', \\verb'z = angle3'\\begin{displaymath}180-%1-%2=").arg(arguments[0]).arg(arguments[1]);
}

double perimeter(double arguments[]){ // side1, side2, side3 // периметр
    return arguments[0] + arguments[1] + arguments[2];
}
QString perimeterText(double arguments[]){
    QString str = QObject::tr("x+y+z=p,\\end{displaymath}");
    str += QObject::tr("where \\verb'x = side1', \\verb'y = side2', \\verb'z = side3', \\verb'p = perimeter'");
    str += QObject::tr("\\begin{displaymath}%1+%2+%3=").arg(arguments[0]).arg(arguments[1]).arg(arguments[2]);
    return str;
}

double perimeter2(double arguments[]){ // perimeter, side1, side2 // третя сторона
    return arguments[0] - arguments[1] + arguments[2];
}
QString perimeter2Text(double arguments[]){
    QString str = QObject::tr("p-x+y=z,\\end{displaymath}");
    str += QObject::tr("where \\verb'x = side1', \\verb'y = side2', \\verb'z = side3', \\verb'p = perimeter'");
    str += QObject::tr("\\begin{displaymath}%1-%2+%3=").arg(arguments[0]).arg(arguments[1]).arg(arguments[2]);
    return str;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // UI ----------------------------------------
    ui->setupUi(this);

    // DATA --------------------------------------

    action = 0;

    countOfSolution = 37;
    solution.resize(countOfSolution);

    QVector<Solution>::iterator it = solution.begin(); // 0
    it->have[0] = "angle3";
    it->have[1] = "side1";
    it->have[2] = "side2";
    it->wantToHave = "side3";
    it->name = QObject::tr("theorem of cosines");
    it->desc = QObject::tr("side from the two sides and angle between them");
    methods[0] = teorCos;
    methodsText[0] = teorCosText;
    ++it; // 1
    it->have[0] = "angle2";
    it->have[1] = "side1";
    it->have[2] = "side3";
    it->wantToHave = "side2";
    it->name = QObject::tr("theorem of cosines");
    it->desc = QObject::tr("side from the two sides and angle between them");
    methods[1] = teorCos;
    methodsText[1] = teorCosText;
    ++it; // 2
    it->have[0] = "angle1";
    it->have[1] = "side3";
    it->have[2] = "side2";
    it->wantToHave = "side1";
    it->name = QObject::tr("theorem of cosines");
    it->desc = QObject::tr("side from the two sides and angle between them");
    methods[2] = teorCos;
    methodsText[2] = teorCosText;

    ++it; // 3
    it->have[0] = "angle2";
    it->have[1] = "side2";
    it->have[2] = "side1";
    it->wantToHave = "angle1";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[3] = teorSin;
    methodsText[3] = teorSinText;
    ++it; // 4
    it->have[0] = "angle3";
    it->have[1] = "side3";
    it->have[2] = "side1";
    it->wantToHave = "angle1";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[4] = teorSin;
    methodsText[4] = teorSinText;
    ++it; // 5
    it->have[0] = "angle1";
    it->have[1] = "side1";
    it->have[2] = "side2";
    it->wantToHave = "angle2";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[5] = teorSin;
    methodsText[5] = teorSinText;
    ++it; // 6
    it->have[0] = "angle3";
    it->have[1] = "side3";
    it->have[2] = "side2";
    it->wantToHave = "angle2";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[6] = teorSin;
    methodsText[6] = teorSinText;
    ++it; // 7
    it->have[0] = "angle1";
    it->have[1] = "side1";
    it->have[2] = "side3";
    it->wantToHave = "angle3";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[7] = teorSin;
    methodsText[7] = teorSinText;
    ++it; // 8
    it->have[0] = "angle2";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->wantToHave = "angle3";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("angle from the two sides and angle");
    methods[8] = teorSin;
    methodsText[8] = teorSinText;

    ++it; // 9
    it->have[0] = "side2";
    it->have[1] = "angle2";
    it->have[2] = "angle1";
    it->wantToHave = "side1";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[9] = teorSin2;
    methodsText[9] = teorSin2Text;
    ++it; // 10
    it->have[0] = "side3";
    it->have[1] = "angle3";
    it->have[2] = "angle1";
    it->wantToHave = "side1";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[10] = teorSin2;
    methodsText[10] = teorSin2Text;
    ++it; // 11
    it->have[0] = "side1";
    it->have[1] = "angle1";
    it->have[2] = "angle2";
    it->wantToHave = "side2";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[11] = teorSin2;
    methodsText[11] = teorSin2Text;
    ++it; // 12
    it->have[0] = "side3";
    it->have[1] = "angle3";
    it->have[2] = "angle2";
    it->wantToHave = "side2";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[12] = teorSin2;
    methodsText[12] = teorSin2Text;
    ++it; // 13
    it->have[0] = "side1";
    it->have[1] = "angle1";
    it->have[2] = "angle3";
    it->wantToHave = "side3";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[13] = teorSin2;
    methodsText[13] = teorSin2Text;
    ++it; // 14
    it->have[0] = "side2";
    it->have[1] = "angle2";
    it->have[2] = "angle3";
    it->wantToHave = "side3";
    it->name = QObject::tr("theorem of sines");
    it->desc = QObject::tr("side from the two angles and another side");
    methods[14] = teorSin2;
    methodsText[14] = teorSin2Text;

    ++it; // 15
    it->have[0] = "side1";
    it->have[1] = "heightLength1";
    it->wantToHave = "square";
    it->name = "";
    it->desc = QObject::tr("square from side and height");
    methods[15] = squareFromHeight;
    methodsText[15] = squareFromHeightText;
    ++it; // 16
    it->have[0] = "side2";
    it->have[1] = "heightLength2";
    it->wantToHave = "square";
    it->name = "";
    it->desc = QObject::tr("square from side and height");
    methods[16] = squareFromHeight;
    methodsText[16] = squareFromHeightText;
    ++it; // 17
    it->have[0] = "side3";
    it->have[1] = "heightLength3";
    it->wantToHave = "square";
    it->name = "";
    it->desc = QObject::tr("square from side and height");
    methods[17] = squareFromHeight;
    methodsText[17] = squareFromHeightText;

    ++it; // 18
    it->have[0] = "side1";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->wantToHave = "square";
    it->name = QObject::tr("formula Herona");
    it->desc = QObject::tr("square from all sides");
    methods[18] = formulaHerona;
    methodsText[18] = formulaHeronaText;

    ++it; // 19
    it->have[0] = "side1";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->have[3] = "square";
    it->wantToHave = "outCircleRadius";
    it->name = "";
    it->desc = QObject::tr("radius from the circle described by the sides");
    methods[19] = outCircleRadius;
    methodsText[19] = outCircleRadiusText;

    ++it; // 20
    it->have[0] = "side1";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->have[3] = "square";
    it->wantToHave = "inCircleRadius";
    it->name = "";
    it->desc = QObject::tr("radius from the circle described by the sides");
    methods[20] = inCircleRadius;
    methodsText[20] = inCircleRadiusText;

    ++it; // 21
    it->have[0] = "angle1";
    it->wantToHave = "outAngle1";
    it->name = "";
    it->desc = QObject::tr("outside angle for interior angle");
    methods[21] = outAngle;
    methodsText[21] = outAngleText;
    ++it; // 22
    it->have[0] = "angle2";
    it->wantToHave = "outAngle2";
    it->name = "";
    it->desc = QObject::tr("outside angle for interior angle");
    methods[22] = outAngle;
    methodsText[22] = outAngleText;
    ++it; // 23
    it->have[0] = "angle3";
    it->wantToHave = "outAngle3";
    it->name = "";
    it->desc = QObject::tr("outside angle for interior angle");
    methods[23] = outAngle;
    methodsText[23] = outAngleText;

    ++it; // 24
    it->have[0] = "angle1";
    it->have[1] = "angle2";
    it->wantToHave = "angle3";
    it->name = "The sum of angles of a triangle";
    it->desc = QObject::tr("third angle from other angles");
    methods[24] = thirdAngle;
    methodsText[24] = thirdAngleText;
    ++it; // 25
    it->have[0] = "angle2";
    it->have[1] = "angle3";
    it->wantToHave = "angle1";
    it->name = "The sum of angles of a triangle";
    it->desc = QObject::tr("third angle from other angles");
    methods[25] = thirdAngle;
    methodsText[25] = thirdAngleText;
    ++it; // 26
    it->have[0] = "angle1";
    it->have[1] = "angle3";
    it->wantToHave = "angle2";
    it->name = "The sum of angles of a triangle";
    it->desc = QObject::tr("third angle from other angles");
    methods[26] = thirdAngle;
    methodsText[26] = thirdAngleText;
    ++it; // 27
    it->have[0] = "outAngle1";
    it->wantToHave = "angle1";
    it->name = "";
    it->desc = QObject::tr("from the inner corner get external");
    methods[27] = innerAngle;
    methodsText[27] = innerAngleText;
    ++it; // 28
    it->have[0] = "outAngle2";
    it->wantToHave = "angle2";
    it->name = "";
    it->desc = QObject::tr("from the inner corner get external");
    methods[28] = innerAngle;
    methodsText[28] = innerAngleText;
    ++it; // 29
    it->have[0] = "outAngle3";
    it->wantToHave = "angle3";
    it->name = "";
    it->desc = QObject::tr("from the inner corner get external");
    methods[29] = innerAngle;
    methodsText[29] = innerAngleText;

    ++it; // 30
    it->have[0] = "side1";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->wantToHave = "perimeter";
    it->name = "";
    it->desc = QObject::tr("perimeter from all sides");
    methods[30] = perimeter;
    methodsText[30] = perimeterText;

    ++it; // 31
    it->have[0] = "perimeter";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->wantToHave = "side1";
    it->name = "";
    it->desc = QObject::tr("one side from perimeter");
    methods[31] = perimeter2;
    methodsText[31] = perimeter2Text;
    ++it; // 32
    it->have[0] = "perimeter";
    it->have[1] = "side1";
    it->have[2] = "side3";
    it->wantToHave = "side2";
    it->name = "";
    it->desc = QObject::tr("one side from perimeter");
    methods[32] = perimeter2;
    methodsText[32] = perimeter2Text;
    ++it; // 33
    it->have[0] = "perimeter";
    it->have[1] = "side2";
    it->have[2] = "side1";
    it->wantToHave = "side3";
    it->name = "";
    it->desc = QObject::tr("one side from perimeter");
    methods[33] = perimeter2;
    methodsText[33] = perimeter2Text;

    ++it; // 34
    it->have[0] = "side1";
    it->have[1] = "side2";
    it->have[2] = "side3";
    it->wantToHave = "angle1";
    it->name = "Consequently law of cosines";
    it->desc = QObject::tr("one angle from all sides");
    methods[34] = teorCos2;
    methodsText[34] = teorCos2Text;
    ++it; // 35
    it->have[0] = "side2";
    it->have[1] = "side3";
    it->have[2] = "side1";
    it->wantToHave = "angle2";
    it->name = "Consequently law of cosines";
    it->desc = QObject::tr("one angle from all sides");
    methods[35] = teorCos2;
    methodsText[35] = teorCos2Text;
    ++it; // 36
    it->have[0] = "side3";
    it->have[1] = "side1";
    it->have[2] = "side2";
    it->wantToHave = "angle3";
    it->name = "Consequently law of cosines";
    it->desc = QObject::tr("one angle from all sides");
    methods[36] = teorCos2;
    methodsText[36] = teorCos2Text;

    int index = 0;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxAngle1);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxAngle2);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxAngle3);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxOutAngle1);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxOutAngle2);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxOutAngle3);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxSide1);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxSide2);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxSide3);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxSquare);
    index++;
    doubleSpinBoxes.insert(index, ui->doubleSpinBoxPerimeter);

    index = 0;
    radioButtonsUnknown.insert(index, ui->radioButtonAngle1Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonAngle2Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonAngle3Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonOutAngle1Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonOutAngle2Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonOutAngle3Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonSide1Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonSide2Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonSide3Unknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonSquareUnknown);
    index++;
    radioButtonsUnknown.insert(index, ui->radioButtonPerimeterUnknown);

    index = 0;
    radioButtonsHave.insert(index, ui->radioButtonAngle1Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonAngle2Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonAngle3Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonOutAngle1Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonOutAngle2Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonOutAngle3Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonSide1Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonSide2Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonSide3Have);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonSquareHave);
    index++;
    radioButtonsHave.insert(index, ui->radioButtonPerimeterHave);

    index = 0;
    radioButtonsFind.insert(index, ui->radioButtonAngle1Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonAngle2Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonAngle3Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonOutAngle1Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonOutAngle2Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonOutAngle3Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonSide1Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonSide2Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonSide3Find);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonSquareFind);
    index++;
    radioButtonsFind.insert(index, ui->radioButtonPerimeterFind);

    index = 0;
    comboUnits.insert(index, ui->comboBoxAngle1);
    index++;
    comboUnits.insert(index, ui->comboBoxAngle2);
    index++;
    comboUnits.insert(index, ui->comboBoxAngle3);
    index++;
    comboUnits.insert(index, ui->comboBoxOutAngle1);
    index++;
    comboUnits.insert(index, ui->comboBoxOutAngle2);
    index++;
    comboUnits.insert(index, ui->comboBoxOutAngle3);
    index++;
    comboUnits.insert(index, ui->comboBoxSide1);
    index++;
    comboUnits.insert(index, ui->comboBoxSide2);
    index++;
    comboUnits.insert(index, ui->comboBoxSide3);
    index++;
    comboUnits.insert(index, ui->comboBoxSquare);
    index++;
    comboUnits.insert(index, ui->comboBoxPerimeter);

    osDetails.os = osVersion();
    ui->TextEditLog->append(QObject::tr("OS: %1").arg(osDetails.os));

    pathToLatexProgram = "";
    pathToPdfProgram = "";

    pdfProgramsLinux << "evince" << "okular" << "xournal" << "adobereader" << "xpdf" << "firefox" << "googlechrome" << "chromiumbrowser" << "zathura";
    latexProgramsLinux << "pdflatex";



    // UX ----------------------------------------------------------------------------------------

    for(int i = 0; i < radioButtonsUnknown.size(); i++){
        QObject::connect(radioButtonsUnknown.value(i), SIGNAL(clicked(bool)), this, SLOT(checkBoxClicked(bool)));
        QObject::connect(radioButtonsHave.value(i), SIGNAL(clicked(bool)), this, SLOT(checkBoxClicked(bool)));
        QObject::connect(radioButtonsFind.value(i), SIGNAL(clicked(bool)), this, SLOT(checkBoxClicked(bool)));
    }
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(getData()));


    // DEBUG --------------------------------------------------------------------------------------

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh(){
    for(int i = 0; i < tric1->isSet.count(); i++){
        tric1->isSet[i] = false;
        tric1->values[i] = 0;
    }
    needToFind.clear();
    testText.clear();
    graf.clear();
}

QString MainWindow::osVersion()
{
    QString osVersion;
#if defined(Q_OS_LINUX)
    osVersion = "Linux";
#elif defined(Q_OS_MAC)
        switch(QSysInfo::MacintoshVersion)
        {
            case QSysInfo::MV_LEOPARD:
                osVersion = QLatin1String("MacOS 10.5(Leopard)");
                break;
            case QSysInfo::MV_TIGER:
                osVersion = QLatin1String("MacOS 10.4(Tiger)");
                break;
            case QSysInfo::MV_PANTHER:
                osVersion = QLatin1String("MacOS 10.3(Panther)");
                break;
            case QSysInfo::MV_JAGUAR:
                osVersion = QLatin1String("MacOS 10.2(Jaguar)");
                break;
            case QSysInfo::MV_PUMA:
                osVersion = QLatin1String("MacOS 10.1(Puma)");
                break;
            case QSysInfo::MV_CHEETAH:
                osVersion = QLatin1String("MacOS 10.0(Cheetah)");
                break;
            case QSysInfo::MV_9:
                osVersion = QLatin1String("MacOS 9");
                break;

            case QSysInfo::MV_Unknown:
            default:
                osVersion = QLatin1String("MacOS(unknown)");
                break;
        }
#elif defined(Q_OS_WIN)
        switch(QSysInfo::WindowsVersion)
        {
            case QSysInfo::WV_CE_6:
                osVersion = QLatin1String("Windows CE 6.x");
                break;
            case QSysInfo::WV_CE_5:
                osVersion = QLatin1String("Windows CE 5.x");
                break;
            case QSysInfo::WV_CENET:
                osVersion = QLatin1String("Windows CE .NET");
                break;
            case QSysInfo::WV_CE:
                osVersion = QLatin1String("Windows CE");
                break;

            case QSysInfo::WV_VISTA:
                osVersion = QLatin1String("Windows Vista");
                break;
            case QSysInfo::WV_2003:
                osVersion = QLatin1String("Windows Server 2003");
                break;
            case QSysInfo::WV_XP:
                osVersion = QLatin1String("Windows XP");
                break;
            case QSysInfo::WV_2000:
                osVersion = QLatin1String("Windows 2000");
                break;
            case QSysInfo::WV_NT:
                osVersion = QLatin1String("Windows NT");
                break;

            case QSysInfo::WV_Me:
                osVersion = QLatin1String("Windows Me");
                break;
            case QSysInfo::WV_98:
                osVersion = QLatin1String("Windows 98");
                break;
            case QSysInfo::WV_95:
                osVersion = QLatin1String("Windows 95");
                break;
            case QSysInfo::WV_32s:
                osVersion = QLatin1String("Windows 3.1 with Win32s");
                break;

            default:
                osVersion = QLatin1String("Windows(unknown)");
                break;
        }

        if(QSysInfo::WindowsVersion & QSysInfo::WV_CE_based)
            osVersion.append(QLatin1String(" (CE-based)"));
        else if(QSysInfo::WindowsVersion & QSysInfo::WV_NT_based)
            osVersion.append(QLatin1String(" (NT-based)"));
        else if(QSysInfo::WindowsVersion & QSysInfo::WV_DOS_based)
            osVersion.append(QLatin1String(" (MS-DOS-based)"));
#else
        return QLatin1String("Unknown");
#endif
    return osVersion;
}






void MainWindow::getData(){
    bool haveSmth = false, findSmth = false;
    for(int i = 0; i < doubleSpinBoxes.size(); i++){
        if(radioButtonsUnknown.value(i)->isChecked())
            tric1->isSet[i] = false;
        if(radioButtonsHave.value(i)->isChecked()){
            tric1->isSet[i] = true;
            haveSmth = true;
            *tric1->values[i] = doubleSpinBoxes.value(i)->value();
            if(comboUnits.value(i)->currentText() == "radians")
                *tric1->values[i] = *tric1->values[i] * 180 / M_PI;
        }
        if(radioButtonsFind.value(i)->isChecked()){
            tric1->isSet[i] = false;
            findSmth = true;
            needToFind += tric1->names.value(i);
        }
    }
    qDebug() << (QString("haveSmth = %1").arg(haveSmth));
    qDebug() << (QString("findSmth = %1").arg(findSmth));
    if(!(haveSmth && findSmth)){
        ui->TextEditLog->append("Nothing need or have choise!");
    }
    else{
        calculate();
    }
}




struct MainWindow::pointOfGraf{
    int level;
    int numberOfSolution;
};

void MainWindow::calculate(){
    // creating points of graf with params, that input user
    for(int i = 0; i < tric1->values.size(); i++){
         if(tric1->isSet[i]){
            graf.insert(i, pointOfGraf());
            graf[i].level = 0;
            graf[i].numberOfSolution = -1;
        }
    }
    // we don't find param that we want to get yet
    bool findedNewParam = true;
    findedThatWeWantGet = false;
    while(findedNewParam && !findedThatWeWantGet){
        findedNewParam = false;
        // search in each solution. can we use them for get new value
        for(int i = 0; i < solution.size(); i++){
            int numberOfParam = tric1->names.key(solution[i].wantToHave);
            // we have all params for use that solution and get new value ?
            bool hadAllParams = true;
            for(int k = 0; k < 5 && hadAllParams; k++){
                if(hadAllParams && solution[i].have[k] != "" && !graf.contains(tric1->names.key(solution[i].have[k]))){
                    hadAllParams = false;
                }
            }
            // if yes
            if(hadAllParams){
                qDebug() << "hadAllParams";
                int newLevel = 0;
                for(int k = 0; k < 5; k++){
                    if(solution[i].have[k] != ""){
                        newLevel = qMax(graf.value(tric1->names.key(solution[i].have[k])).level, newLevel);
                    }
                }
                newLevel++;
                // magic
                qDebug() << "  level = " << newLevel;
                if(!graf.contains(numberOfParam)){
                    findedNewParam = true;                            //   додавання
                    graf.insert(numberOfParam, pointOfGraf());        //     нового
                    graf[numberOfParam].level = newLevel;             //    елемента
                    graf[numberOfParam].numberOfSolution = i;         //     графа
                }
                else{
                    if(newLevel < graf.value(numberOfParam).level){
                        findedNewParam = true;                        //   редагування
                        graf[numberOfParam].level = newLevel;         //    існуючого
                        graf[numberOfParam].numberOfSolution = i;     //    елемента
                    }
                }
            }
            // exercise solved ?
            if(findedNewParam){
                QList<int> keys = graf.keys();
                for(int k = 0; k < needToFind.count(); k++){
                    bool findedOne = false;
                    for(int j = 0; j < graf.count(); j++){
                        if(needToFind[k] == tric1->names.value(keys[j]))
                            findedOne = true;
                    }
                    if(!findedOne)
                        findedThatWeWantGet = false;
                }
            }
        }
    }

    createTexFile();
    convertToPdf();
    if(!pathToLatexProgram.isEmpty()){
        openPdf();
    }

    // QDEBUG
//    QMap<int, pointOfGraf>::iterator it = graf.begin();
//    int maxLevel = 0;
//    for(; it != graf.end(); it++){
//        qDebug() << "Graf[" << it.key() << "]";
//        qDebug() << "|- Level: " << it.value().level;
//        if(it.value().numberOfSolution == -1)
//            qDebug() << "|- Have: " << tric1->names[it.key()];
//        else{
//            qDebug() << "|- Have: ";
//            for(int j = 0; j < 5; j++){
//                if(solution[it.value().numberOfSolution].have[j] != "")
//                    qDebug() << "|  |- " << solution[it.value().numberOfSolution].have[j];
//            }
//            qDebug() << "|- Want: " << solution[it.value().numberOfSolution].wantToHave;
//            qDebug() << "|- Name: " << solution[it.value().numberOfSolution].name;
//            qDebug() << "|- Description: " << solution[it.value().numberOfSolution].desc;
//        }
//        maxLevel = qMax(maxLevel, it.value().level);
//    }
//    if(!findedThatWeWantGet)
//        qDebug() << "I can not get parameters =(";
//    else
//        qDebug() << trUtf8("I finded parameters using this way...");

}





void MainWindow::createTexFile(){
    latexFile.setFileName(QString("solution.tex"));
    ui->TextEditLog->append(QObject::tr("Created file \"%1\"").arg(latexFile.fileName()));
    if(latexFile.exists()) latexFile.remove();
    QString tmpl = "\\documentclass[12pt,a4paper]{article}\n\\usepackage{amssymb}\n\\usepackage{latexsym}\n\\begin{document}\n";
    latexFile.open(QIODevice::WriteOnly);
    QTextStream stream(&latexFile);
    stream << tmpl;
    QMap<int, pointOfGraf>::iterator it = graf.begin();
    int maxLevel = 0;
    for(; it != graf.end(); it++){
        stream << QString("Graf %1\\\\\n").arg(it.key());
        stream << QString("\\verb'|- Level: %1'\\\\\n").arg(it.value().level);
        stream << QString("\\verb'|- Number of solution: %1'\\\\\n").arg(it.value().numberOfSolution);
        if(it.value().numberOfSolution == -1)
            stream << QString("\\verb'|- Have: %1'\\\\\n").arg(tric1->names[it.key()]);
        else{
            stream << "\\verb'|- Have: '\\\\\n";
            for(int j = 0; j < 5; j++){
                if(solution[it.value().numberOfSolution].have[j] != "")
                    stream << QString("\\verb'|  |- %1 '\\\\\n").arg(solution[it.value().numberOfSolution].have[j]);
            }
            stream << QString("\\verb'|- Want: %1 '\\\\\n").arg(solution[it.value().numberOfSolution].wantToHave);
            stream << QString("\\verb'|- Name: %1 '\\\\\n").arg(solution[it.value().numberOfSolution].name);
            stream << QString("\\verb'|- Description: %1 '").arg(solution[it.value().numberOfSolution].desc);
            if(it == graf.end())
                stream << QString("\\\\\n");
            else
                stream << QString("\n");
        }
        maxLevel = qMax(maxLevel, it.value().level);
    }
    stream << QString("\\newpage\n");
    findedThatWeWantGet = true;
    QList<int> keys = graf.keys();
    for(int k = 0; k < needToFind.count(); k++){
        bool findedOne = false;
        for(int j = 0; j < graf.count() && !findedOne; j++){
            if(needToFind[k] == tric1->names.value(keys[j]))
                findedOne = true;
        }
        if(!findedOne)
            findedThatWeWantGet = false;
    }
    if(!findedThatWeWantGet)
        stream << QObject::tr("I can not get parameters =(\\\\\n");
    else
        stream << QObject::tr("I finded parameters using this way...\\\\\n");
    stream << QString("Given: \\verb'");
    int latestValue = -1;
    for(int i = 0; i < tric1->isSet.count(); i++)
        if(tric1->isSet.value(i) == true)
            latestValue = i;
    for(int i = 0; i < tric1->isSet.count(); i++){
        if(tric1->isSet.value(i) == true){
            QString name = tric1->names.value(i);
            double value = *tric1->values.value(i);
            stream << QString(name);
            stream << QString(" = %1").arg(value);
            if(i != latestValue)
                stream << QString("; ");
            else
                stream << QString(".' \\\\\n");
        }
    }
    stream << QString("Required: \\verb'");
    for(int i = 0; i < needToFind.count(); i++){
        QString name = needToFind.at(i);
        stream << QString(name);
        if(i != needToFind.count() - 1)
            stream << QString("; ");
        else
            stream << QString(".' \\\\\n");
    }
    stream << QString("\\flushleft\n\\begin{enumerate}\n");
    it = graf.begin();
    for(; it != graf.end(); it++){
        for(int i = 0; i < needToFind.size(); i++){
            if(tric1->names.value(it.key()) == needToFind[i]){
                if(tric1->isSet.value(it.key()) == false)
                    findParam(it.key(), &stream);
            }
        }
    }
    stream << QString("\\end{enumerate}\n");

    stream << "\\end{document}";



    latexFile.close();
}





double MainWindow::findParam(int param, QTextStream* stream){
    if(graf.value(param).level == 0) // якщо необхідний параметр вже відомо (тому має рівень 0)
        return *tric1->values.value(param); // повернути параметр з відомих даних трикутника
    else{
        double data[5];
        for(int i = 0; i < 5; i++){ // проходимось по хевах для знаходження всіх параметрів для солюшена для знаходження param
            QString name = solution[graf.value(param).numberOfSolution].have[i];
            int id = tric1->names.key(name);
            if(name != ""){ // якщо він заданий...
//                if(graf.value(tric1->names.key(solution[graf.value(param).numberOfSolution].have[i])).level != 0){
//                    // і якщо параметр, який необхідний для знаходження параметра param не задано користувачем
//                    qDebug() << "level = " << graf.value(tric1->names.key(solution[graf.value(param).numberOfSolution].have[i]))
//                            .level;
//                    double neededParam = findParam(tric1->names.key(solution[graf.value(param).numberOfSolution].have[i]), stream);
//                    qDebug() << "RECUR " << neededParam;
//                    *tric1->values[tric1->names.key(solution[graf.value(param).numberOfSolution].have[i])] = neededParam;
//                }
                    // і якщо параметр, який необхідний для знаходження параметра param не задано користувачем
                if(tric1->isSet.value(id) == false){
                    qDebug() << "level = " << graf.value(id)
                            .level;
                    double value = findParam(id, stream);
                    qDebug() << "RECUR " << value;
                    tric1->isSet.insert(id, true);
                    *tric1->values[id] = value;
                    data[i] = value;
                } else {
                    data[i] = *tric1->values.value(id);
                }
            }
        }
        this->testText = methodsText[graf.value(param).numberOfSolution](data);

        // виводимо інфу про наш метод і результат
        *stream << QString("\\item\n").arg(QString::number(++action));
        *stream << QString("Method name (theorem): \\verb'%1'\\\\\n").arg(solution.value(graf.value(param).numberOfSolution).name);
        *stream << QString("Description: \\verb'%1'\\\\\n").arg(solution.value(graf.value(param).numberOfSolution).desc);
        *stream << "Input data: \\verb'";
        int latestValue = -1;
        for(int i = 0; i < 5; i++)
            if(solution.at(graf.value(param).numberOfSolution).have[i] != "")
                latestValue++;
        for(int i = 0; i < 5; i++){
            QString name = solution.at(graf.value(param).numberOfSolution).have[i];
            if(name != ""){
                int id = tric1->names.key(name);
                double value = *tric1->values.value(id);
                *stream << QString(name);
                if(tric1->isSet.value(id) == true){
                    *stream << QString(" = %1").arg(value);
                } else
                    *stream << QString(" - unknown value");
                if(i != latestValue)
                    *stream << QString("; ");
                else
                    *stream << QString(".' \\\\\n");
            }
        }
        *stream << QString("Output data (we get): \\verb'%1'\n").arg(solution[graf.value(param).numberOfSolution].wantToHave);
        double newValue = methods[graf.value(param).numberOfSolution](data);
        *tric1->values[param] = newValue;
        tric1->isSet[param] = true;
        *stream << QString("\\begin{displaymath} %1%2 \\end{displaymath}\\\\\n").arg(this->testText).arg(QString::number(floor(newValue * 100 + 0.5) / 100));
        qDebug() << this->testText;
        return methods[graf.value(param).numberOfSolution](data);
    }
}


void MainWindow::convertToPdf(){
    if(osVersion() == "Linux"){
        // detect distr
        proc->start("lsb_release", QStringList() << "-i" << "-s");
        proc->waitForFinished();
        osDetails.version = proc->readAll();
        ui->TextEditLog->append(QObject::tr("Distribution: %1").arg(osDetails.version));
        proc->close();

        // find latex program
        QRegExp reg("[\\s]");
        int i = 0;
        while(i < latexProgramsLinux.size()){
            proc->start(QString("which %1").arg(latexProgramsLinux[i]));
            proc->waitForFinished();
            pathToLatexProgram = proc->readAll();
            pathToLatexProgram.replace(QRegExp("[\\n]"), "");
            proc->close();
            if(pathToLatexProgram.isEmpty()) {
                qDebug() << QObject::tr("Can not find \"%1\" in your system").arg(latexProgramsLinux[i]);
                ui->TextEditLog->append(QObject::tr("Can not find \"%1\" in your system").arg(latexProgramsLinux[i]));
            } else {
                qDebug() << QObject::tr("Finded \"%2\" in %1. Generating PDF file").arg(pathToLatexProgram).arg(latexProgramsLinux[i]);
                ui->TextEditLog->append(QObject::tr("Finded \"%2\" in %1. Generating PDF file").arg(pathToLatexProgram).arg(latexProgramsLinux[i]));
                pathToLatexProgram.replace(reg, "");
                QString command = QString("%1 \"%2/%3\"")
                        .arg(pathToLatexProgram)
                        .arg(QApplication::applicationDirPath())
                        .arg(latexFile.fileName());
                proc->start(command);
                proc->waitForFinished();
                ui->TextEditLog->append("/--------------------- start latex output below ---------------------\\");
                ui->TextEditLog->append(QObject::tr(proc->readAll()));
                ui->TextEditLog->append("\\------------------------ end latex output --------------------------/");
                proc->close();
                break;
            }
            i++;
        }
        if(pathToLatexProgram.isEmpty())
            ui->TextEditLog->append("Did not match any program for convert tex to pdf on your computer. Please install \"texlive\".");
    }
}

void MainWindow::openPdf(){
    // Checking for file
    int len = latexFile.fileName().length();
    QString pdfFileName = latexFile.fileName().remove(len-4, len-1).append(".pdf");
    QFile file(QString("%1/%2").arg(QApplication::applicationDirPath()).arg(pdfFileName));
    if(!file.exists())
        ui->TextEditLog->append(QObject::tr("Something is wrong. Can not find new PDF file. "));
    else{
        ui->TextEditLog->append(QObject::tr("New pdf is generated (%1) in %2/. I'll find program to open file...")
                                .arg(pdfFileName)
                                .arg(QApplication::applicationDirPath()));
        // find pdf program
        bool finded = false;
        for(int i = 0; i < pdfProgramsLinux.size(); i++){
            if(finded) break;
            proc->start(QString("which %1").arg(pdfProgramsLinux[i]));
            proc->waitForFinished();
            pathToPdfProgram = proc->readAll();
            QRegExp reg("[\\s]");
            pathToPdfProgram.remove(reg);
            proc->close();
            if(pathToPdfProgram.isEmpty())
                ui->TextEditLog->append(QObject::tr("I can not find \"%1\" in your system").arg(pdfProgramsLinux[i]));
            else{
                ui->TextEditLog->append(QObject::tr("Finded \"%2\" in %1. Opening PDF file").arg(pathToPdfProgram).arg(pdfProgramsLinux[i]));
                finded = true;
            }
        }
        if(!pathToPdfProgram.isEmpty()){ // if finded program for open pdf
            ui->TextEditLog->append(QString("%1 \"%2\"").arg(pathToPdfProgram).arg(pdfFileName));
            proc->start(QString("%1 \"%2\"").arg(pathToPdfProgram).arg(pdfFileName));
            ui->TextEditLog->append(QObject::tr(proc->readAll()));
            proc->waitForFinished();
            pathToPdfProgram = proc->readAll();
        }
    }
}

// UX --------------------------------------------------------------------------------------------------------

// Disable spinBoxes when checkBox clicked
void MainWindow::checkBoxClicked(bool enabled){
    QRadioButton* btn = qobject_cast<QRadioButton*>(QObject::sender());
    if(btn->objectName().contains("Have")){
        QDoubleSpinBox* spin = qobject_cast<QDoubleSpinBox*>(doubleSpinBoxes.value(radioButtonsHave.key(btn)));
        spin->setEnabled(enabled);
    }
    else if(btn->objectName().contains("Find")){
        QDoubleSpinBox* spin = qobject_cast<QDoubleSpinBox*>(doubleSpinBoxes.value(radioButtonsFind.key(btn)));
        spin->setEnabled(!enabled);
    }
    else if(btn->objectName().contains("Unknown")){
        QDoubleSpinBox* spin = qobject_cast<QDoubleSpinBox*>(doubleSpinBoxes.value(radioButtonsUnknown.key(btn)));
        spin->setEnabled(!enabled);
    }
};

void MainWindow::on_btnDemo_clicked()
{
    ui->doubleSpinBoxAngle3->setValue(60);
    ui->radioButtonAngle3Have->setEnabled(true);
    ui->doubleSpinBoxSide1->setValue(12);
    ui->radioButtonSide1Have->setEnabled(true);
    ui->doubleSpinBoxSide2->setValue(8);
    ui->radioButtonSide2Have->setEnabled(true);
    ui->radioButtonAngle1Find->setChecked(true);
    ui->radioButtonAngle2Find->setChecked(true);
    ui->radioButtonSide3Find->setEnabled(true);
}
