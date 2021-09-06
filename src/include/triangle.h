
class Triangle;

extern double getTriangleArea (Triangle t);

class Triangle{

private:
    double s1;
    double s2;
    double s3;

public:
    double getSide1() { return s1; }
    double getSide2() { return s2; }
    double getSide3() { return s3; }

    // Setters ignored for now

    Triangle(double s1, double s2, double s3) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

};