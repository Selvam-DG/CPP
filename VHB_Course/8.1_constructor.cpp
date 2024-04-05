#include <iostream>

using namespace std;

class Person
{
private:
    float income;
    string forename;
    string surname;
    int age;
    int code;

    bool checkCode(int secret)
    {
        if(code == secret)
        {
            return true;
        }
        return false;

    }

public:

    //contstructor
    Person() : forename("Bruce"), surname("Williams"), age(62)
    {

        cout << "object " <<forename << " " << surname << " created. " << endl;

    };
//    Person(string f, string s, int age): forename(f), surname(s), age(age)
//    {
//        cout << "code for " << forename << " " << surname << " :";
//        cin >> code;
//        setIncome();
//    }
    Person(string, string, int); // Declaration

    void printData()
    {
        cout << "Forename: " << forename << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;

    }

    void setIncome()
    {
        cout << "What's your income (Mr/Mrs " << forename << " " << surname <<" )?";
        cin >> income;
    }
    float getIncome()
    {
        return income;
    }

};
Person :: Person(string fn, string sn , int a)
{
    forename = fn;
    surname = sn;
    age = a;
    cout << "code for " << forename << " " << surname << " :";
    cin >> code;
    setIncome();
}

int main()
{
    // call default constructor
    Person pe1;
    pe1.printData() ;

    // give error for the below object because the attribures are private
//    Person pe2;
//    pe2.forename = "Jing";
//    pe2.surname = "Jang";
//    pe2.age = 26;
//    pe2.printData();

    // creating object with the inputs
    Person pe2 = Person("Jing", "Jang", 29);
    pe2.printData();

    //creatig new object and set forename through input
    Person p3;
    p3.setForename();
    p3.printData();


    return 0;
}
