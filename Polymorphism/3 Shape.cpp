#include <iostream>
#include <cmath>
using namespace std;

class Shape {
	public :
		virtual double area () = 0;
		virtual double volume () = 0;
};

class Sphere : public Shape {
	public :
		Sphere (double r) 
		: r(r) {}
		double area() override {
		return 4*M_PI*r*r;
		}
		double volume() override {
		return (4.0/3)*M_PI*r*r*r;
		}
	private :
		double r;
};

class Cylinder : public Shape {
	public:
    	Cylinder (double r, double h) 
   		: r(r), h(h) {}
    	double area () override {
        return 2*M_PI*r*(r+h);
    	}
    	double volume() override {
		return M_PI*r*r*h;
		}
    private :
    	double r,h;
};

int main () {
	
	Sphere sp(5.8);
    Cylinder cy(4.7,8.3);

    cout << "Sphere area: " << sp.area() << endl;
    cout << "Sphere volume: " << sp.volume() << endl;
    cout << "Cylinder area: " << cy.area() << endl;
    cout << "Cylinder volume: " << cy.volume() << endl;

    return 0;
}

/*
CLASS Shape
    METHOD area() IS ABSTRACT
    METHOD volume() IS ABSTRACT
END CLASS

CLASS Sphere INHERITS Shape
    CONSTRUCTOR(radius)
        SET r TO radius
    METHOD area()
        RETURN 4 * p * r^2
    METHOD volume()
        RETURN (4/3) * p * r^3
END CLASS

CLASS Cylinder INHERITS Shape
    CONSTRUCTOR(radius, height)
        SET r TO radius
        SET h TO height
    METHOD area()
        RETURN 2 * p * r * (r + h)
    METHOD volume()
        RETURN p * r^2 * h
END CLASS

MAIN
    CREATE Sphere with radius 5.8
    CREATE Cylinder with radius 4.7 and height 8.3

    PRINT Sphere area
    PRINT Sphere volume
    PRINT Cylinder area
    PRINT Cylinder volume
END MAIN
*/
