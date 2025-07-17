## Function in C++
Functions are reusable blocks of code that perform a specific task. They help in organizing and modularizing your program.
## Basic Function Example
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
#### Key Points:
- Declaration: Informs the compiler about the function's name, return type, and parameters.
- Definition: Contains the actual body or logic of the function.
- Calling: Executes the function using actual parameters.



## Function Overloading
Function overloading allows multiple functions to have the same name but different parameter lists. The compiler determines which function to invoke based on the number or type of arguments.
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
**Notes on Function Overloading:**
- Functions must differ in the number or types of parameters.
- Return type alone is not enough to distinguish overloaded functions.

## Default Arguments
You can provide default values for parameters in function declarations. If an argument is not provided, the default is used.
```cpp
#include <iostream>
using namespace std;

void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();            // Uses default argument
    greet("Alice");     // Overrides default
    return 0;
}
```
**Note**: Default values must be provided from right to left.
### Inline Functions
Inline functions reduce function call overhead by replacing the function call with the function code.
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}

```
### Recursion
A function that calls itself is known as recursive. It's useful for problems like factorial, Fibonacci, etc.
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
```
## Function Templates
Function templates enable you to write generic functions for any data type. 
```cpp
#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << maximum(10, 20) << endl;
    cout << "Max of 3.5 and 2.8: " << maximum(3.5, 2.8) << endl;
    cout << "Max of 'a' and 'z': " << maximum('a', 'z') << endl;
    return 0;
}

```
**Notes:**

- Use template <typename T> or template <class T>
- The compiler generates the appropriate version of the function at compile time
  





