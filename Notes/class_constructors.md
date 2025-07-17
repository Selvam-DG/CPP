# C++ Class and Constructors
## Class Example: `Circle`
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const float pi = 3.14;

class Circle{
  float radius;
  public:
//   constructor
  Circle(float radius){
      this->radius = radius;
  }
  float area(){
      return pi* (radius*radius);
 
  }
  float circumference(){
      return 2*pi*radius;
  }
};

int main(){
    float r;
    cout << "Enter the radius: " << endl;
    cin >> r;
    // instance
    Circle c(r);
    
    cout << "Area of circle with radius " << r <<" = " << c.area() << endl;
    cout << "Circumference of circle with radius " << r <<" = " << c.circumference() << endl;
 
    return 0;
    
}
```
## Access Specifier in Class
- `private` by default while creating methods, attributes
  - Members declared inside a class without any access specifier are private. These members can only be accessed within the class.
- `public`
  - Members declared as public can be accessed from outside the class.
- `'protected`
  - Members declared as protected can be accessed in the class itself and by derived classes.



## Scope resolution operator
- Used to define a class member function outside the class definition.
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string name;
        int m1, m2,m3;
        float avg;
    public:
        void get_data(){
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter 3 subjects Marks: " << endl;
            cin >> m1 >> m2 >> m3;
        }
        void display();
 
};
// scope resolution operator className::function_name
void Student::display(){
    avg = (m1 + m2 + m3)/3.0;
    cout << "Name: " << name << endl;
    cout << "Mark1: " << m1 << endl;
    cout << "Mark2: " << m2 << endl;
    cout << "Mark3: " << m3 << endl;
    cout << "Average: " << avg << endl;
}

int main(){
    
    Student s1;
    s1.get_data();
    s1.display();
 
    return 0;
    
}
```

## Constructors
A constructor is a special member function used to initialize objects.
- Same name as the class
- Automatically invoked when an object is created

### Types of Constructors
- Types:
  - Default Constructor
  - Parameterizd Constructor
  - Copy Constructor
 
#### 1. Default constructor
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Maths{
    private:
        float num1, num2, num3;
    public:
        // Default constructor
        Maths(){
            cout << "Default constructor called"<< endl ;
            this->num1 = 20 ;
            this->num2 = 10 ;
            cout << num1 <<" + " <<num2 << " = " << num1 + num2 <<endl ;
        }
};

int main(){
    
    Maths m1;
 
    return 0;
    
}
```
#### 2. Parameterized constructor
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Maths{
    private:
        float num1, num2, num3;
    public:
        // Parameterized constructor
        Maths(float num1, float num2){
            this->num1 = num1 ;
            this->num2 = num2;
            num3 = num1 + num2 ;
            cout << num1 <<" + " <<num2 << " = " << num3 <<endl ;
        }
};

int main(){
    
    Maths m2(250.13, 125.33);

    return 0;
}
```

#### 3. Copy Constructor
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Maths{
    private:
        float num1, num2, num3;
    public:
        // copy constructor
        Maths(float num1, float num2){
            this->num1 = num1 ;
            this->num2 = num2;
        }
        Maths(Maths &a){
            num1 = a.num1;
            num2 = a.num2;
        }
        void add(){
            num3 = num1 + num2 ;
            cout << num1 <<" + " <<num2 << " = " << num3 <<endl ; 
        }
};

int main(){
    
    Maths m1(250.13, 125.33);
    Maths m2(m1);
    m1.add();
    m2.add();

    return 0;
}

```
## Constructor overloading
- Multiple constructors (default, parameterized, and copy) can be defined in a single class with different signatures.
## Destructor
A destructor is a special member function that is invoked automatically when an object is destroyed.
- Has the same name as the class, preceded by a tilde (~)
- No return type and no parameters

```cpp
class Maths{
public:
  // default constructor
  Maths(){
  }
// destructor
~Math(){
  }
};
```
