#include <iostream>

using namespace std;

int main()
{

    int myArray[5];

    myArray[0] = 10;
    myArray[1] = 15;
    myArray[2] = 20;
    myArray[3] = 25;
    myArray[4] = 30;

    cout << myArray[0] << endl;

    for(int i = 0; i <5; i++)
    {
        cout << "Array at the index " << i << "is :\t" << myArray[i] << endl;

    }
    const int MAX = 10;

    bool myBoolArray[MAX] = {1,0,1,1,0,0,1,0,1,1};

    for(int temp = 0; temp < MAX; temp++)
    {
        if(myBoolArray[temp] == true)
        {
            cout << "X";
        }
        else
        {
            cout << "O";
        }
    }
    return 0;

}
