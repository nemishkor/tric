#include "tric.h"

tric::tric()
{
    names[0] = "angle1";
    names[1] = "angle2";
    names[2] = "angle3";
    names[3] = "outAngle1";
    names[4] = "outAngle2";
    names[5] = "outAngle3";
    names[6] = "side1";
    names[7] = "side2";
    names[8] = "side3";
    names[9] = "square";
    names[10] = "perimeter";
    names[11] = "heightLength1";
    names[12] = "heightLength2";
    names[13] = "heightLength3";
    names[14] = "medianLength1";
    names[15] = "medianLength2";
    names[16] = "medianLength3";
    names[17] = "bisectorLength1";
    names[18] = "bisectorKut1";
    names[19] = "bisectorLength2";
    names[20] = "bisectorKut2";
    names[21] = "bisectorLength3";
    names[22] = "bisectorKut3";
    names[23] = "inCircleRadius";
    names[24] = "inCircleLength";
    names[25] = "outCircleRadius";
    names[26] = "outCircleLength";

    values[0] = &angle1;
    values[1] = &angle2;
    values[2] = &angle3;
    values[3] = &outAngle1;
    values[4] = &outAngle2;
    values[5] = &outAngle3;
    values[6] = &side1;
    values[7] = &side2;
    values[8] = &side3;
    values[9] = &square;
    values[10] = &perimeter;
    values[11] = &heightLength1;
    values[12] = &heightLength2;
    values[13] = &heightLength3;
    values[14] = &medianLength1;
    values[15] = &medianLength2;
    values[16] = &medianLength3;
    values[17] = &bisectorLength1;
    values[18] = &bisectorLength2;
    values[19] = &bisectorLength3;
    values[20] = &bisectorKut1;
    values[21] = &bisectorKut2;
    values[22] = &bisectorKut3;
    values[23] = &inCircleRadius;
    values[24] = &inCircleLength;
    values[25] = &outCircleRadius;
    values[26] = &outCircleLength;

    for(int i = 0; i < 27; i++)
        isSet[i] = false;
}
