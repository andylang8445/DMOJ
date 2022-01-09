//
//  main.cpp
//  CCC '19 S2
//
//  Created by Hongjun Yun on 2022-01-08.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int T{};
    int N[1000];
    bool eratoseTenes[1000000];

    cin>>T;
    for (int i{0};i<1000000;++i){
        eratoseTenes[i]=true;
    }
    eratoseTenes[0]=false;
    for (int i{2};i<=1000000;++i) {
        if (eratoseTenes[i-1]) {
            for (int j{2};i*j<=1000000;++j){
                eratoseTenes[(i*j)-1]=false;
            }
        }
    }
    for (int i{0};i<T;++i){
        cin>>N[i];
        N[i] *= 2;
    }
    for (int i{0};i<T;++i){
        for (int j{0};j<1000000;++j) {
            if(eratoseTenes[j]) {
                if (eratoseTenes[N[i]-(j+1)-1]) {
                    cout<<(j+1)<<" "<<(N[i]-(j+1))<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
