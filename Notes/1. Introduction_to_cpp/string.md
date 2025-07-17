## get multiple words from input console
```cpp
#include <iostream>
using namespace std;
int main() {
    string para;
    cout << "Enter your text" <<endl;
    getline(cin, para);  // getline used to get the complete line until press Enter
    cout << para;
    return 0;
}

```
## Iterators
```cpp
#include <iostream>
using namespace std;
int main() {
    string text = "Full stack Developer";
    // Forward Iterator
    string::iterator it;
    for(it= text.begin(); it!= text.end(); it++){
        cout << *it ;
    }
    cout <<endl << "----------" << endl;
    
    // reverse iterator with iterator object
    string::reverse_iterator it2;
    for( it2=text.rbegin(); it2 != text.rend(); it2++){
        cout<< *it2 ;
    }
    return 0;
}
```
