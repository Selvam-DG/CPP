// program to find factors of a number
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    vector <int> factors;
    int temp_num = 1;
    while(temp_num <= num){
        if(num % temp_num == 0){
            factors.push_back(temp_num);
        }
        temp_num++;
    }
    cout << "Factors of " << num << " are: ";
    for(int i: factors){
        cout << i << " ";
    }
    

    return 0;
    
}
