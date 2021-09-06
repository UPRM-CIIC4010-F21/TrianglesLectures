
#include <cmath>
#include "include/triangle.h"

double getTriangleArea (Triangle t) {
    double s = (t.getSide1() + t.getSide2() + t.getSide3()) / 2.0;
    double area = sqrt(s * (s - t.getSide1()) * (s - t.getSide2()) * (s - t.getSide3()));
    return area;
}

