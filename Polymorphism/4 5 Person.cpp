#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name) 
	: name(name) {}

    virtual void greet() = 0;

    string getName() { 
	return name;
	}

protected:
    string name;
};

class Student : public Person {
public:
    Student(string name, string major) 
	: Person(name), major(major) {}

    void greet() override {
        cout << "Hello, my name is " << getName() << " and I'm a " << major << " major." << endl;
    }

private:
    string major;
};

class Teacher : public Person {
public:
    Teacher(string name, string subject) 
	: Person(name), subject(subject) {}

    void greet() override {
        cout << "Hello, my name is " << getName() << " and I teach " << subject << "." << endl;
    }

private:
    string subject;
};

int main() {
	
    Student student("John Doe", "Computer Science");
    Teacher teacher("Jane Smith", "Math");

    student.greet();
    teacher.greet();

    return 0;
}
/*
CLASS Person
    CONSTRUCTOR(name)
        SET name TO name
    METHOD greet() IS ABSTRACT
    METHOD getName()
        RETURN name
END CLASS

CLASS Student INHERITS Person
    CONSTRUCTOR(name, major)
        SET name TO name
        SET major TO major
    METHOD greet()
        PRINT "Hello, my name is " + name + " and I'm a " + major + " major."
END CLASS

CLASS Teacher INHERITS Person
    CONSTRUCTOR(name, subject)
        SET name TO name
        SET subject TO subject
    METHOD greet()
        PRINT "Hello, my name is " + name + " and I teach " + subject + "."
END CLASS

MAIN
    CREATE Student with name "John Doe" and major "Computer Science"
    CREATE Teacher with name "Jane Smith" and subject "Math"

    CALL Student greet()
    CALL Teacher greet()

    END PROGRAM
END MAIN
*/
