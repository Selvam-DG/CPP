
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

    // overload method = same method name but different data types and arguments
    void printData(int sc)
    {
        if(checkCode(sc))
        {
            cout << "Income: " << getIncome() << endl;

        }
        else
        {
            cout << "Wrong passcode" << endl;
        }

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



    // creating object with the inputs
    Person pe2 = Person("Jing", "Jang", 29);
    pe2.printData();

    int secCode;

    cout << "Enter your Secret Code:  ";
    cin >> secCode;
    pe2.printData(secCode);




    return 0;
}
