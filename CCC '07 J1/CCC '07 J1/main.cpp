//
//  main.cpp
//  CCC '07 J1
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(arr[j]<arr[i]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<arr[1];
    return 0;
}
