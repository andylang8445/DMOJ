//
//  main.cpp
//  CCC '18 S2
//
//  Created by Hongjun Yun on 2022-01-01.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int N{0};
    int arr[100][100];
    bool condition{false};
    
    cin>>N;
    for(int i{0};i<N;++i){
        for(int j{0};j<N;++j){
            cin>>arr[i][j];
        }
    }
    while(true){
        condition=true;
        for(int i{0};i<N;++i){
            for(int j{1};j<N;++j){
                if(arr[i][j]<arr[i][j-1]){
                    condition=false;
                }
            }
        }
        for(int i{0};i<N;++i){
            for(int j{1};j<N;++j){
                if(arr[j][i]<arr[j-1][i]){
                    condition=false;
                }
            }
        }
        if(condition){
            break;
        }
        int tmp[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                tmp[j][i]=arr[i][N-1-j];
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                arr[i][j]=tmp[i][j];
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
