# Polymorphism in C++
Polymorphism means "many forms" — it allows the same function or operator to behave differently based on context.

## Types of Polymorphism
| Type             | Description                       | Example                                    |
| ---------------- | --------------------------------- | ------------------------------------------ |
| **Compile-time** | Resolved at compile time          | Function Overloading, Operator Overloading |
| **Runtime**      | Resolved during program execution | Virtual Functions                          |

## 1. Function Overloading (Compile-time Polymorphism)
Function with the same name but different parameter lists.
```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Double: " << y << endl;
    }

    void show(string msg) {
        cout << "String: " << msg << endl;
    }
};

int main() {
    Print p;
    p.show(5);
    p.show(3.14);
    p.show("Hello");
    return 0;
}
```
## 2. Operator Overloading
You can redefine operators for your user-defined classes.
```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(){real= 0; img = 0;}
    Complex(float r, float i){ real = r; imag= i; }
    // another way of defining constructor
    // Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2;
    c3.display();  // Output: 4 + 6i
    return 0;
}

```
** Common Operators You Can Overload:**
`+`, `-`, `*`, `/`, ``==, `!=`, `=`, `<<`, `>>`, `[]`, `()`, `->`
You cannot overload: `::`, `sizeof`, `?:`, `.`
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class box{
    int x;
    public:
        box(){x =0 ;}
        box(int a):x(a){}
        
        void print(){
            cout <<" value of x is " << x << endl;
        }
        void operator ++ (){
            ++x;
        }
        void operator ++(int){
            x++;
        }
        void operator --(){
            --x;
        }
        void operator --(int){
            x--;
        }
    
};

int main(){
    box b(3);
    b.print();
    ++b;
    b.print();
    b++;
    b.print();
    ++b;
    b.print();
    --b;
    b.print();
    b--;
    b.print();
    return 0;
}
```

## 3. Virtual Functions (Runtime Polymorphism)
Virtual functions support dynamic binding, allowing function calls to be resolved at runtime.

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;     // Base class pointer
    Dog d;

    a = &d;        // Pointer to derived class object
    a->speak();    // Runtime polymorphism (calls Dog's speak)
    return 0;
}
```
**Without `virtual`, it would have called `Animal::speak()` even if `a` points to a` Dog`.**


## Pure Virtual Functions & Abstract Classes
Used when base class defines an interface only.
```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};
```
- Any class with at least one pure virtual function is called an abstract class.
- You cannot instantiate abstract classes directly.

### Summary: When to Use What?
| Feature              | Use When...                                             |
| -------------------- | ------------------------------------------------------- |
| Function Overloading | You want the same function name for different inputs    |
| Operator Overloading | You want natural usage of custom types (`a + b`)        |
| Virtual Functions    | You want derived class methods called via base pointers |
| Abstract Classes     | You want to define a common interface                   |
