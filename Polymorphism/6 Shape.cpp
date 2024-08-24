#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double length, double width) 
	: length(length), width(width) {}

    double area() override {
        return length * width;
    }

    double perimeter() override {
        return 2 * (length + width);
    }

private:
    double length;
    double width;
};

class Triangle : public Shape {
public:
    Triangle(double b, double h, double s1, double s2, double s3) 
	: b(b), h(h), s1(s1), s2(s2), s3(s3) {}

    double area() override {
        return 0.5 * b * h;
    }

    double perimeter() override {
        return s1 + s2 + s3;
    }

private:
    double b;
    double h;
    double s1;
    double s2;
    double s3;
};

int main() {
    Rectangle rect(5.0, 3.0);
    Triangle tri(4.0, 5.0, 3.0, 4.0, 5.0);

    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Rectangle perimeter: " << rect.perimeter() << endl;

    cout << "Triangle area: " << tri.area() << endl;
    cout << "Triangle perimeter: " << tri.perimeter() << endl;

    return 0;
}
/*
CLASS Shape
    METHOD area() IS ABSTRACT
    METHOD perimeter() IS ABSTRACT
END CLASS

CLASS Rectangle INHERITS Shape
    CONSTRUCTOR(length, width)
        SET length TO length
        SET width TO width
    METHOD area()
        RETURN length * width
    METHOD perimeter()
        RETURN 2 * (length + width)
END CLASS

CLASS Triangle INHERITS Shape
    CONSTRUCTOR(b, h, s1, s2, s3)
        SET b TO b
        SET h TO h
        SET s1 TO s1
        SET s2 TO s2
        SET s3 TO s3
    METHOD area()
        RETURN 0.5 * b * h
    METHOD perimeter()
        RETURN s1 + s2 + s3
END CLASS

MAIN
    CREATE Rectangle with length 5.0 and width 3.0
    CREATE Triangle with base 4.0, height 5.0, and sides 3.0, 4.0, 5.0

    PRINT "Rectangle area: " + Rectangle area()
    PRINT "Rectangle perimeter: " + Rectangle perimeter()

    PRINT "Triangle area: " + Triangle area()
    PRINT "Triangle perimeter: " + Triangle perimeter()

    END PROGRAM
END MAIN
*/
