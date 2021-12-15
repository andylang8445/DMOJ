//
//  main.cpp
//  CCC'16j3
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    string arr;
    int max=1, tmp=0, length;
    cin>>arr;
    length=arr.length();
    for(int i=1;i<length-1;i++){//홀수 개의 element로 이뤄진 palindrom
        tmp=1;
        for(int j=1;(i-j)>=0&&(i+j)<length;j++){
            if(arr[i-j]==arr[i+j]){
                tmp+=2;
                if(max<tmp){
                    max=tmp;
                }
                //printf("\n\ti: %d, j: %d, tmp: %d\n",i,j,tmp);
            }
            else{
                break;
            }
        }
    }
    for(int i=1;i<length;i++){//짝수 개의 element로 이뤄진 palindrom
        tmp=0;
        for(int j=0;(i-j-1)>=0&&(i+j)<length;j++){
            if(arr[i-j-1]==arr[i+j]){
                tmp+=2;
                if(max<tmp){
                    max=tmp;
                }
                //printf("\n\ti: %d, j: %d, tmp: %d\n",i,j,tmp);
            }
            else{
                break;
            }
        }
    }
    cout<<max;
    return 0;
}
