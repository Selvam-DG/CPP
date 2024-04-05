#include <iostream>

using namespace std;

int main()
{
    int b = 1, c = 1;

    for(int a=1; a <= 5; a++)
    {
        cout << "Value of a is " << a << endl;
    }
    cout << endl;

    while(b<5)
    {
        cout << "Value of b = " << b << endl;
        b++;
    }
    cout << endl;

    do
    {
        cout << "Value of c = " << c << endl;
        c++;
    }while(c < 1);

}
