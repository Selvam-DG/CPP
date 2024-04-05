#include <iostream>

using namespace std;

int main()
{
    int number = 5;
    float decimal = 2.5; // Floating point - 32bit
    double dec1 = number/decimal, decimal2; // Floating point - 64 bit
    bool alive = 1; // 1 is TRUE, 0 is FALSE
    char letter = 'A';
    string sentence = "Hello World";
    const float discount = 0.05;


    /*
    cout << "Integer=" << number << endl;
    cout << "Float = " << decimal << endl;
    cout << "Double = " << dec1 << endl;
    cout << "Bool = " << alive << endl;
    cout << "Letter = " << letter << endl;
    cout << "String :" << sentence << endl;
    cout << "constant: " << discount << endl;
    */


    string s = "Set discount", name;
    float total, product;
    cout << s << endl << "Product name: ";
    cin >> name;
    cout << " Product price: ";
    cin >> product;
    total = product * (1-discount);

    cout << "The product " << name << " costs " << total << endl;


//    {
//        float total; // This total varaiable is inside the scope, it can't be used outside the flower brackets
//        // int total; if two variables of same name of different data types gives an error
//        int num1 = 5, num2 = 2;
//        total = num1/float(num2);
//        // total = float(num1) / num2;
//        cout << " Result = " << total << endl;
//    }

    return 0;
}
