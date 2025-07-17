// Armstrong number between 100 - 999
#include <iostream>
using namespace std;

int main(){
    int num, dup_num; 
    for(num =100; num <= 999; num++){
        dup_num = num;
        int sum = 0;
        while(dup_num > 0){
            int remainder = dup_num % 10;
            sum = sum + (remainder*remainder*remainder);
            dup_num = dup_num/10; 
        }
        if (sum == num){
            cout << num << " is an Armstrong Number." << endl;;
        }
        sum = 0;
        
    }
    
    

    return 0;
    
}
