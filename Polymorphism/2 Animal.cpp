#include <iostream>
#include <string>
using namespace std;

class Animal {
	public :
		Animal (string name) 
		: name(name){}
		virtual void eat () = 0;
		string getName() {
			return name;
		}
	private :
		string name;
};

class Herbivore: public Animal {
	public :
		Herbivore (string name) 
		: Animal (name) {}
		void eat() override {
		cout << getName() << " is eating plants." << endl;
		}
};

class Carnivore : public Animal {
	public:
    	Carnivore (string name) 
   		: Animal (name) {}
    	void eat () override {
        cout << getName() << " is eating meat." << endl;
    	}
};

int main () {
	
	 
	Herbivore herb("Cow");
    Carnivore carn("Lion");

    herb.eat();
    carn.eat();

    return 0;
}
/*
CLASS Animal
    CONSTRUCTOR(name)
        SET name TO name
    METHOD eat() IS ABSTRACT
    METHOD getName()
        RETURN name
END CLASS

CLASS Herbivore INHERITS Animal
    CONSTRUCTOR(name)
        SET name TO name
    METHOD eat()
        PRINT name + " is eating plants."
END CLASS

CLASS Carnivore INHERITS Animal
    CONSTRUCTOR(name)
        SET name TO name
    METHOD eat()
        PRINT name + " is eating meat."
END CLASS

MAIN
    CREATE Herbivore with name "Cow"
    CREATE Carnivore with name "Lion"

    CALL Herbivore eat()
    CALL Carnivore eat()

    END PROGRAM
END MAIN
*/
