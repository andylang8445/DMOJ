//
//  main.cpp
//  CCC '16 S1
//
//  Created by Hongjun Yun on 2021-12-20.
//

#include <iostream>
#include <cmath>

using namespace std;

string arr1, arr2;
size_t length{0};
int count1[26], count2[27];//26th is * notation

int main(int argc, const char * argv[]) {
    cin>>arr1>>arr2;
    length=arr1.length();
    for(size_t i{0};i<26;i++){
        count1[i]=count2[i]=0;
    }
    for(size_t i{0};i<length;++i){
        if(arr2[i]=='*'){
            count2[26]++;
        }
        else{
            count2[arr2[i]-'a']++;
        }
        count1[arr1[i]-'a']++;
    }
    size_t diff{0};
    for(size_t i{0};i<26;i++){
        count2[i]-=count1[i];
    }
    for(size_t i{0};i<26;i++){
        diff+=abs(count2[i]);
    }
    if(diff==count2[26]){
        cout<<"A";
    }
    else{
        cout<<"N";
    }
    return 0;
}
