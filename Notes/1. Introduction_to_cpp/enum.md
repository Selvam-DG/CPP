## Enum
```cpp 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

enum gender {Male, Female};

int main(){
    gender g = Male;
    
    switch(g){
        case Male:
            cout << "Gender Male";
            break;
        case Female:
            cout << "Gender Female";
            break;
        default:
            cout << "Invalid";
            break;
    }
    return 0;
    
}
```
