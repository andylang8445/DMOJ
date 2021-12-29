//
//  main.cpp
//  CCC '18 S1
//
//  Created by Hongjun Yun on 2021-12-29.
//

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int N{0};
double V[101];

int main(int argc, const char * argv[]) {
    double min{1000000000};
    cin>>N;
    for(int i{0};i<N;++i){
        cin>>V[i];
    }
    sort(V, V+N);
    double D[N-2];
    for(int i{1};i<N-1;++i){
        D[i-1]=(V[i]-V[i-1])/2.0+(V[i+1]-V[i])/2.0;
        if(min>D[i-1]){
            min=D[i-1];
        }
    }
    cout<<fixed<<setprecision(1)<<min;
    return 0;
}
