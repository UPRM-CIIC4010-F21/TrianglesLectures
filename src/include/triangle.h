
class Triangle;



class Triangle{

private:
    double s1;
    double s2;
    double s3;

public:
    double getSide1() const { return s1; }
    double getSide2() const { return s2; }
    double getSide3() const { return s3; }

    void setSides(double l1, double l2, double l3) {
        this->s1 = l1;
        this->s2 = l2;
        this->s3 = l3;
    }

    // Setters ignored for now

    Triangle(double s1, double s2, double s3) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    double getArea() const;

    static double sumOfAreas(Triangle list[], int size);

    bool isLargerThan(Triangle t2);

    void resize(double factor);
    void resize();

    Triangle resizeNew(double factor);

    int compareAreas(Triangle t) const;

};