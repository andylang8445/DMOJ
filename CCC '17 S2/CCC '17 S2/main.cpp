//
//  main.cpp
//  CCC '17 S2
//
//  Created by Hongjun Yun on 2021-12-23.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int N{0}, low, high;
    cin>>N;
    int arr[N];
    for(int i{0};i<N;++i){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    if(N%2==0){
        high=N/2;
        low=high-1;
    }
    else{
        high=N/2+1;
        low=high-1;
    }
    while(low>=0||high<N){
        if(low>=0)
            cout<<arr[low--]<<" ";
        if(high<N)
            cout<<arr[high++]<<" ";
    }
    return 0;
}
