// program to print prime number from 1 to max number
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout <<"Enter the Maximum integer number to print Prime Number : "<< endl;
    cin >> num;
    vector <int> prime_numbers;
    
    for(int temp_num = 1; temp_num <=num; temp_num++){
        int count = 0;
        for(int i = 1; i <= temp_num; i++){
            if(temp_num % i == 0){
            count++;
            }
        }
        if(count == 2){
            prime_numbers.push_back(temp_num);
        }
        
    }
    cout << "Prime Numbers from 1 to " << num << " are: " << endl;
    for(int i : prime_numbers){
        cout << i << " ";
    }

    return 0;
    
}
