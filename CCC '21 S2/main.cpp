#include <iostream>
using namespace std;

int main() {
    int M{0}, N{0}, K{0};
    cin>>M>>N;
    bool arr[M][N];
    cin>>K;
    for(int i{0};i<M;i++){
        for(int j{0};j<N;j++){
            arr[i][j]=false;
        }
    }
    for(int i{0};i<K;i++){
        char RC;
        int tmp;
        cin>>RC>>tmp;
        if(RC=='R'){
            for(int j{0};j<N;++j){
                arr[tmp-1][j]=!arr[tmp-1][j];
            }
        }
        else{
            for(int j{0};j<M;++j){
                arr[j][tmp-1]=!arr[j][tmp-1];
            }
        }
    }
    int cnt{0};
    for(int i{0};i<M;i++){
        for(int j{0};j<N;j++){
            if(arr[i][j]==true){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
