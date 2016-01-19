#ifndef TRIC_H
#define TRIC_H
#include "QMap"
#include "QString"

class tric
{
public:
    tric();

    double angle1, angle2, angle3, outAngle1, outAngle2, outAngle3;
    double side1, side2, side3, square, perimeter;
    double heightLength1, heightLength2, heightLength3,
        medianLength1,  medianLength2, medianLength3,
        bisectorLength1, bisectorKut1, bisectorLength2, bisectorKut2, bisectorLength3, bisectorKut3;
    double inCircleRadius, inCircleLength, outCircleRadius, outCircleLength;

    QMap <int, QString> names;
    QMap <int, double*> values;
    QMap <int, bool> isSet;
};

#endif // TRIC_H
