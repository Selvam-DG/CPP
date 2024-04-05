#include <iostream>

using namespace std;

class Person  // Base Class -Parent Class
{
private:
    string forename;
    string surname;
    int age;

protected:
    char type;
public:
    Person(string f, string s, int a): forename(f), surname(s), age(a)
    {
        cout << forename << " " << surname << ", Age :" << age << endl;

    }
    void whoIAm()
    {
        cout << "I am a Person" << endl;
    }
};

class Customer : public Person  // Derived Class - Child Class
{
private:
    int customer_number;

public:
    Customer(string f, string s, int a, int cn): Person(f, s, a), customer_number(cn)
    {
        type = 'C';
        cout << "Customer Number: " << customer_number << endl;
        cout << "Type: " << type << endl;
    }
    void whoIAm()
    {
        cout << "I am a customer " << endl;
    }
};

class Employee : public Person
{
private:
    int employeeNumber;

public:
    Employee(string f, string s, int a, int en): Person(f,s,a), employeeNumber(en)
    {
        type = 'E';
        cout << "Employee Number: " << employeeNumber << endl;
    }
    void whoIAm()
    {
        cout << "I am an Employee " << endl;
        cout << "Type: " << type << endl;
    }
};


int main()
{
    Person pe1 = Person("King", "Kong", 23);
    pe1.whoIAm();
    cout << endl << endl ;
    Customer c1 = Customer("Navier", "Stokes", 45, 3);
    c1.whoIAm();
    cout << endl << endl ;
    Employee e1 = Employee("Lucas", "Stewes", 32, 11);
    e1.whoIAm();


    return 0;
}
