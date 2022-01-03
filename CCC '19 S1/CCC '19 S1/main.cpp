//
//  main.cpp
//  CCC '19 S1
//
//  Created by Hongjun Yun on 2022-01-02.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    string input{};
    int arr[2][2]={1,2,3,4};
    int cntH{0}, cntV{0};
    cin>>input;
    for(size_t i{0};input[i]!='\0';++i){
        if(input[i]=='H'){
            cntH++;
        }
        else{
            cntV++;
        }
    }
    if(cntV%2==1){
        for(int i{0};i<2;i++){
            int tmp=arr[i][0];
            arr[i][0]=arr[i][1];
            arr[i][1]=tmp;
        }
    }
    if(cntH%2==1){
        for(int i{0};i<2;i++){
            int tmp=arr[0][i];
            arr[0][i]=arr[1][i];
            arr[1][i]=tmp;
        }
    }
    for(int i=0;i<2;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
    return 0;
}
