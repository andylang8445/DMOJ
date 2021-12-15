//
//  main.cpp
//  COCI '16 C7 #1 Baza
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int N, M, Q;
    int db[1000][1000];
    int query[50][1000];
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>db[i][j];
        }
    }
    cin>>Q;
    for(int i=0;i<Q;i++){
        for(int j=0;j<M;j++){
            cin>>query[i][j];
        }
    }
    for(int i=0;i<Q;i++){
        int cnt=N;
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                if(query[i][k]==-1);
                else if(query[i][k]!=db[j][k]){
                    cnt--;
                    break;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
