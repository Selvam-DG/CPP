## `if` statement
```cpp
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout <<"Enter the value of a , b : " << endl;
    cin >> a >> b;
    
    if( a > b){
        cout << a << " is greater than " << b << endl;
    }
    if (b > a){
        cout << b << " is greater than " << a << endl;
    }
    if (a == b){
        cout << a << " is equal to  " << b << endl;
    }
    return 0;
}

```
## `if - else` statement
```cpp
#include <iostream>
using namespace std;
int main() {
    // checking vowels
    char c;
    cout << "Enter the character: " << endl;
    cin >> c;
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U'){
        cout << c << " is a vowel.";
    }
    else{
        cout << c << "is not a vowel.";
    }
    return 0;
}
```
## Nested `if else` statement
```cpp
#include <iostream>
using namespace std;
int main() {
    // steel grade
    
    long int hard, ts;
    float carbon;
    cout << endl << "Enter the value of hardness, tensile strength, carbon content: " << endl;
    cin >> hard >> ts >> carbon;
    if(hard >50 && carbon < 0.7 && ts > 5600){
        cout << "Steel Grade : 10" << endl;
    }
    else if(hard >50 && carbon < 0.7 ){
        cout << "Steel Grade : 9" << endl;
    }
    else if(carbon < 0.7 && ts > 5600){
        cout << "Steel Grade : 8" << endl;
    }
    else if(hard >50  && ts > 5600){
        cout << "Steel Grade : 7" << endl;
    }
    else if(hard >50 || carbon < 0.7 || ts > 5600){
        cout << "Steel Grade : 6" << endl;
    }
    else{
        cout << "Steel Grade : 5" << endl;
    }
    return 0;
}
```

```cpp

```
