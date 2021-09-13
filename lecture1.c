#include <math.h>
#include <stdio.h>

int main() {

  double side1 = 10.0;
  double side2 = 10.0;
  double side3 = 10.0;

  double s = (side1 + side2 + side3) / 2.0;

  double area = sqrt(s * (s - side1) * (s - side1) * (s - side3));
    
  printf("The area is %f \n", area);

  return 0;
  
}

