//
//  main.cpp
//  CCC '21 S2
//
//  Created by Hongjun Yun on 2021-12-18.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int M,N,K;
    cin>>M>>N>>K;
    int Row[M], Col[N];
    for(int i=0;i<M;i++){
        Row[i]=0;
    }
    for(int i=0;i<N;i++){
        Col[i]=0;
    }
    for(int i{0};i<K;i++){
        char tmp;
        int ttmp;
        cin>>tmp>>ttmp;
        if(tmp=='R'){
            Row[ttmp-1]++;
        }
        else{
            Col[ttmp-1]++;
        }
    }
    int rcount{0},ccount{0};
    for(int i=0;i<M;i++){
        if(Row[i]%2!=0){
            rcount+=N;
            //cout<<"Row "<<i<<"++, cnt="<<ccount+rcount<<endl;;
        }
        else{
            //cnt-=N;
            //cout<<"Row "<<i<<"--, cnt="<<cnt<<endl;;
        }
    }
    for(int i=0;i<N;i++){
        if(Col[i]%2!=0){
            ccount+=M;
            ccount-=2*rcount/N;
            //cout<<"Col "<<i<<"++, cnt="<<ccount+rcount<<endl;;
        }
        else{
            //cnt-=M;
            //cout<<"Col "<<i<<"--, cnt="<<cnt<<endl;;
        }
    }
    cout<<rcount+ccount;
    return 0;
}
