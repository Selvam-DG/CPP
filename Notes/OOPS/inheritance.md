# Inheritance in C++
## What is Inheritance?
Inheritance is a mechanism where a class (child/derived) inherits the properties and behavior of another class (parent/base).

It allows:
- Code reusability
- Extensibility
- Implementation of hierarchical classifications

**Syntax**:
```cpp
class Derived : access_modifier Base {
    // Additional members of Derived class
};

```
## 1.  Single Inheritance
One class inherits from one base class.
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.speak();  // Inherited
    d.bark();   // Own
    return 0;
}


```
## 2. Multilevel Inheritance
Derived class inherits from a class which itself is derived from another class.
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
    return 0;
}

```
## 3. Multiple Inheritance
A class inherits from more than one base class.
```cpp
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}

```
## 4. Hierarchical Inheritance
Multiple classes inherit from the same base class.
```cpp
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child1 : public Parent {
public:
    void show1() {
        cout << "Child1 class" << endl;
    }
};

class Child2 : public Parent {
public:
    void show2() {
        cout << "Child2 class" << endl;
    }
};

int main() {
    Child1 c1;
    c1.show();
    c1.show1();

    Child2 c2;
    c2.show();
    c2.show2();
    return 0;
}

```

## 5. Hybrid Inheritance
Combination of two or more types of inheritance (e.g., multiple + multilevel). May cause ambiguity (Diamond Problem), which is handled using virtual inheritance.
```cpp
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();  // No ambiguity due to virtual inheritance
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
```

## Access Specifiers in Inheritance
| Access in Base | `public` Inheritance | `protected` Inheritance | `private` Inheritance |
| -------------- | -------------------- | ----------------------- | --------------------- |
| `public`       | `public`             | `protected`             | `private`             |
| `protected`    | `protected`          | `protected`             | `private`             |
| `private`      | Not Inherited        | Not Inherited           | Not Inherited         |





