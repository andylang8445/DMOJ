//
//  main.cpp
//  CCC '14 J1
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[3], sum=0;
    for(int i=0;i<3;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum!=180){
        cout<<"Error";
    }
    else{
        if(arr[0]==arr[1]&&arr[0]==60){
            cout<<"Equilateral";
        }
        else if(arr[0]!=arr[1]&&arr[1]!=arr[2]&&arr[0]!=arr[2]){
            cout<<"Scalene";
        }
        else{
            cout<<"Isosceles";
        }
    }
    return 0;
}
