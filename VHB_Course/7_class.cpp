#include <iostream>

using namespace std;

class Person
{
private:
    float income;
public:
    string forename;
    string surname;
    int age;

    void setIncome()
    {
        cout << "What's your income (" << forename << " " << surname  << ")?";
        cin >> income;
    }

    float getIncome()
    {
        return income;
    }
    void printData()
    {
        cout << "Forename: " << forename << endl;
        cout << "surname" << surname << endl;
        cout << "Age : " << age << endl;
        cout << "Income : " << getIncome() << endl;

    }
};

int main()
{
    Person pe1;
    pe1.surname = "Williams";
    pe1.forename = "Lee ";
    pe1.age = 55;
    pe1.setIncome();
    pe1.printData();

//    cout << "Forename: " << pe1.forename << endl;
//    cout << "surname" << pe1.surname << endl;
//    cout << "Age : " << pe1.age << endl;
//    cout << "Income : " << pe1.getIncome() << endl;

    Person pe2;
    pe2.surname = "Wagner";
    pe2.forename = "Jacob";
    pe2.age = 51;
    pe2.setIncome();
    pe2.printData();




    return 0;
}
