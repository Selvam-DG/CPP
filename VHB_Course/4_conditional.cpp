#include <iostream>

using namespace std;

int main(){

    // conditional structure : if and else

    int a;

    cout << " Value for a is : " ;
    cin >> a;

    if (a > 10)
    {
        cout << a << " is greater than 10" << endl;

    }
    else if (a <= 10 && a >= 5)
    {
        cout << a << " is lies between and 5 and 10" << endl;

    }
    else{
        cout << a << " is less than 5" << endl;
    }
}
