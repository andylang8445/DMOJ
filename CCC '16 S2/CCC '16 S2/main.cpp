//
//  main.cpp
//  CCC '16 S2
//
//  Created by Hongjun Yun on 2021-12-21.
//

#include <iostream>
#include <cmath>

using namespace std;

int qType{0}, N{0};
int Dmojistan[101], Pegland[101];

int main(int argc, const char * argv[]) {
    int sum{0};
    cin>>qType>>N;
    for(int i{0};i<N;i++){
        cin>>Dmojistan[i];
    }
    for(int i{0};i<N;i++){
        cin>>Pegland[i];
    }
    for(int i{0};i<N-1;i++){
        for(int j{i+1};j<N;j++){
            if(Dmojistan[i]>Dmojistan[j]){
                int tmp{Dmojistan[i]};
                Dmojistan[i]=Dmojistan[j];
                Dmojistan[j]=tmp;
            }
            if(Pegland[i]>Pegland[j]){
                int tmp{Pegland[i]};
                Pegland[i]=Pegland[j];
                Pegland[j]=tmp;
            }
        }
    }
    if(qType==1){
        for(int i=0;i<N;i++){
            sum+=max(Pegland[i], Dmojistan[i]);
        }
    }
    else{
        for(int i=0;i<N/2;i++){
            int tmp{Pegland[i]};
            Pegland[i]=Pegland[N-1-i];
            Pegland[N-1-i]=tmp;
        }
        for(int i=0;i<N;i++){
            sum+=max(Pegland[i], Dmojistan[i]);
        }
    }
    cout<<sum;
    return 0;
}
