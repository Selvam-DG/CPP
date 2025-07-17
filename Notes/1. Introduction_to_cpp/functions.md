## Function
```cpp
// Functios
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int add_sum(int, int); // function declaration

int main(){
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    int total = add_sum(num1, num2); // function calling
    cout << "Total: " << total ;
    return 0;
    
}
// function definiton
int add_sum(int a, int b){
    return a + b ;
}
```

## function overloading
```cpp
// Functios
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int add_sum(int, int); // function declaration
int add_sum(int, int, int);  // function declaration but its same name as previous name. This is Function overlaoding
int main(){
    int num1, num2, num3;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    int total = add_sum(num1, num2); // function calling
    cout << "Total of " <<num1 <<" + " << num2 << " = " << total  << endl;
    int total3 = add_sum(num1, num2, num3);
    cout << "Total of " <<num1 <<" + " << num2 << " + " << num3 << " = " << total3 ;
    return 0;
    
}
// function definiton
int add_sum(int a, int b){
    return a + b ;
}
int add_sum(int a, int b, int c){
    return a + b + c ;
}
```
