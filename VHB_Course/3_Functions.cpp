#include <iostream>

using namespace std;

//Function Declaration
void welcome();
float calculate(float, float);
void output_result();
int calculate(int);
// two functions with same name but different data types is called overloading

// global variable
int counter = 0;

int main(){
    welcome(); // calling the function
    cout << endl;
    output_result();
    counter++;
    cout << "The square number of  " << counter << " is " << calculate(counter) << endl;
    return 0;
}

// Function Definition

void welcome()
{
    cout << " welcome to the tutorial on Functions - ";

    counter ++;
    cout << counter << endl;
}
float calculate(float x, float y){
    float result;
    result = x + y;
    return result;
}

void output_result(){

    float a,b;
    cout << "First number: ";
    cin  >> a;
    cout << "Second Number: ";
    cin >> b;
    float r = calculate(a,b);
    cout << "Result = " << r << endl;
}

int calculate(int s){
    return s*s;
}
