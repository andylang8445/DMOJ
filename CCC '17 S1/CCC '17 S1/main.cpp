//
//  main.cpp
//  CCC '17 S1
//
//  Created by Hongjun Yun on 2021-12-23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n{0};
    int sum1{0},sum2{0};
    int store{-1};
    cin>>n;
    int arr[2][n];
    for(int i{0};i<2;++i){
        for(int j{0};j<n;++j){
            cin>>arr[i][j];
            if(i==1){
                sum1+=arr[0][j];
                sum2+=arr[1][j];
                if(sum1==sum2){
                    store=j+1;
                }
            }
        }
    }
    if(store==-1){
        store=0;
    }
    cout<<store;
    return 0;
}
