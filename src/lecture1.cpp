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

    Triangle triangle1(10,10,10);
    cout << "Area 1 is: " << triangle1.getArea() << endl;
    Triangle triangle2(20,20,20);
    cout << "Area 2 is: " << triangle2.getArea() << endl;
    Triangle triangle3(10,20,30);
    cout << "Area 3 is: " << triangle3.getArea() << endl;


    Triangle myList[3] { triangle1, triangle2, triangle3 };

    cout << "Total area is: " << Triangle::sumOfAreas(myList, 3) << endl;

    cout << "T1 is Larger than T2? " << triangle1.isLargerThan(triangle2) << endl;
    cout << "T2 is Larger than T1? " << triangle2.isLargerThan(triangle1) << endl;
    cout << "T2 is Larger than T2? " << triangle2.isLargerThan(triangle2) << endl;

    Triangle::resize(triangle1, 2.0);
    

    return 0;
  
}

