//
//  main.cpp
//  CCC '04 J1
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, max=0;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(i*i<=n&&max<i){
            max=i;
        }
    }
    cout<<"The largest square has side length "<<max<<".";
    return 0;
}
