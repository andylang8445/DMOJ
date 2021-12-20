//
//  main.cpp
//  CCC '01 S1
//
//  Created by Hongjun Yun on 2021-12-20.
//

#include <iostream>

using namespace std;

char arr[4][13];
int cnt[4]{0,0,0,0};
int sum[4]{0,0,0,0};
int tot{0};

int main(int argc, const char * argv[]) {
    int currCardSet{-1};//-1: initial, 0: C, 1: D, 2: H, 3: S
    for(int i=0;i<13;i++){
        arr[0][i]=arr[1][i]=arr[2][i]=arr[3][i]=0;
    }
    for(int i=0;i<17;i++){
        char tmp{0};
        cin>>tmp;
        if(tmp=='C'){
            currCardSet=0;
        }
        else if(tmp=='D'){
            currCardSet=1;
        }
        else if(tmp=='H'){
            currCardSet=2;
        }
        else if(tmp=='S'){
            currCardSet=3;
        }
        else{
            arr[currCardSet][cnt[currCardSet]++]=tmp;
            if(tmp=='A'){
                sum[currCardSet]+=4;
            }
            else if(tmp=='K'){
                sum[currCardSet]+=3;
            }
            else if(tmp=='Q'){
                sum[currCardSet]+=2;
            }
            else if(tmp=='J'){
                sum[currCardSet]++;
            }
        }
    }
    cout<<"Cards Dealt              Points"<<endl;
    for(int i=0;i<4;i++){
        int j{0}, add{0};
        if(i==0){
            cout<<"Clubs ";
            add=0;
        }
        else if(i==1){
            cout<<"Diamonds ";
            add=3;
        }
        else if(i==2){
            cout<<"Hearts ";
            add=1;
        }
        else{
            cout<<"Spades ";
            add=1;
        }
        for(j=0;j<cnt[i];j++){
            cout<<arr[i][j]<<" ";
        }
        for(j=0;j<(23-add-cnt[i]*2);j++){
            cout<<" ";
        }
        if(cnt[i]<3){
            sum[i]+=3-cnt[i];
        }
        if(sum[i]<10){
            cout<<" "<<sum[i]<<endl;
        }
        else{
            cout<<sum[i]<<endl;
        }
        tot+=sum[i];
    }
    cout<<"                       Total "<<tot;
    return 0;
}
