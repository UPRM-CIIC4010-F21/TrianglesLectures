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

    cout << "Area 1 is: " << getTriangleArea(10, 10, 10) << endl;
    cout << "Area 2 is: " << getTriangleArea(20,20,20) << endl;
    cout << "Area is: " << getTriangleArea(10,20,30) << endl;

    string s1 = "Hello World";

    s1.replace(0, 5, "Goodbye");



    return 0;
  
}

