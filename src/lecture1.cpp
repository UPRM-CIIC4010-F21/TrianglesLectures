#include <cmath>
#include <iostream>
#include "include/triangle.h"

using namespace std;

// double triangleArea (double s1, double s2, double s3) {
//     double s = (s1 + s2 + s3) / 2.0;
//     double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
//     return area;
// }

int main() {    

    Triangle t1(10,10,10);
    cout << "Area 1 is: " << Triangle::getTriangleArea(t1) << endl;
    Triangle t2(20,20,20);
    cout << "Area 2 is: " << Triangle::getTriangleArea(t2) << endl;
    Triangle t3(10,20,30);
    cout << "Area 3 is: " << Triangle::getTriangleArea(t3) << endl;

    return 0;
  
}

