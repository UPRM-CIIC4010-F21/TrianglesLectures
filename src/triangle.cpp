
#include <cmath>
#include "include/triangle.h"

double Triangle::getArea () {
    double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2.0;
    double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
    return area;
}

double Triangle::sumOfAreas(Triangle list[], int size)
{

    double totalArea = 0;
    for(int i=0; i<size; i++) {
        totalArea += list[i].getArea();
    }
    return totalArea;


}
