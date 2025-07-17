```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){cout << "Constructiing A" << endl;   }
};
class B : public A{ //sigle inheritance
    public:
    B(){cout << "Constructiing B" << endl;   }
};
class C: public A{ //single inheritance
    public:
    C(){cout << "Constructiing C" << endl;   }
};
class D : public B, public C{ //mulitple inheritance
    public:
    D(){cout << "Constructiing D" << endl;   }
};

int main(){
    D o;

    return 0;
}

```
<img width="503" height="182" alt="image" src="https://github.com/user-attachments/assets/1ad165f3-cbee-4e4e-b4ed-58e3dc7c4bce" />

## Solving ambigious problem for diamond problem 
```cpp
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){cout << "Constructiing A" << endl;   }
};
class B : virtual public A{ //sigle inheritance
    public:
    B(){cout << "Constructiing B" << endl;   }
};
class C: virtual public A{ //single inheritance
    public:
    C(){cout << "Constructiing C" << endl;   }
};
class D : public B, public C{ //mulitple inheritance
    public:
    D(){cout << "Constructiing D" << endl;   }
};

int main(){
    D o;

    return 0;
}
<img width="457" height="199" alt="image" src="https://github.com/user-attachments/assets/071601a3-383c-47c3-ae67-0b3a3df364d3" />

```
