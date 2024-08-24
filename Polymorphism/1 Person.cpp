#include <iostream>
#include <string>
using namespace std;

class Person {
	public :
		Person (string name)
		: name(name){}
		virtual void work () = 0;
		string getName() {
			return name;
		}
	private :
		string name;
};

class Employee: public Person {
	public :
		Employee (string name, string department) 
		: Person(name), department(department) {}
		void work() override {
		cout << getName() << " is working in " << department << " department." << endl;
		}
	private :
		string department;
};

class Manager : public Person {
	public:
    Manager(string name, string team) 
	: Person(name), team(team) {}    	void work() override {
        cout << getName() << " is managing the " << team << " team." << endl;
    }
    private :
	string team;
};

int main () {
	
	string a,b,c,d;
	
	cout << "Enter the name and department: ";
	cin >> a >> b >> c >> d;
	
	Employee emp(a, b);
    Manager mgr(c, d);
    
	emp.work();
    mgr.work();
    return 0;
}

/*
CLASS Person
    CONSTRUCTOR(name)
        SET name TO name
    METHOD work() IS ABSTRACT
    METHOD getName()
        RETURN name
END CLASS

CLASS Employee INHERITS Person
    CONSTRUCTOR(name, department)
        SET name TO name
        SET department TO department
    METHOD work()
        PRINT name + " is working in " + department + " department."
END CLASS

CLASS Manager INHERITS Person
    CONSTRUCTOR(name, team)
        SET name TO name
        SET team TO team
    METHOD work()
        PRINT name + " is managing the " + team + " team."
END CLASS

MAIN
    PROMPT "Enter the name and department:"
    READ name1, department1, name2, team

    CREATE Employee with name1 and department1
    CREATE Manager with name2 and team

    CALL Employee work()
    CALL Manager work()

    END PROGRAM
END MAIN
*/
