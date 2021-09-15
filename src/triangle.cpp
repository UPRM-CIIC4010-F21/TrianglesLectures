
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

// Returns true iff target Triangle has larger area than t2. Returns false otherwise.
bool Triangle::isLargerThan(Triangle t2) {

    if (this->getArea() > t2.getArea()) {
        return true;
    }
    else {
        return false;
    }

}

void Triangle::resize(double factor) {

    this->s1 *= factor;
    this->s2 *= factor;
    this->s3 *= factor;

}

void Triangle::resize() {

   this->resize(2.0); 

}

Triangle Triangle::resizeNew(double factor) {

    Triangle result(this->getSide1()*factor, this->getSide2()*factor, this->getSide3()*factor);

    return result;

}