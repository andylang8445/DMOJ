//
//  main.cpp
//  CCC '00 S1
//
//  Created by Hongjun Yun on 2021-12-20.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int coin{0}, m1{0}, m2{0}, m3{0};
    int cnt{0};
    cin>>coin>>m1>>m2>>m3;
    while(coin>0){
        if(coin>0){
            coin--;
            cnt++;
            m1++;
        }
        if(coin>0){
            coin--;
            cnt++;
            m2++;
        }
        if(coin>0){
            coin--;
            cnt++;
            m3++;
        }
        if(m1%35==0){
            coin+=30;
            m1=0;
        }
        if(m2%100==0){
            coin+=60;
            m2=0;
        }
        if(m3%10==0){
            coin+=9;
            m3=0;
        }
    }
    cout<<"Martha plays "<<cnt<<" times before going broke.";
    return 0;
}
