//
//  main.cpp
//  CCC '21 S3
//
//  Created by Hongjun Yun on 2021-12-19.
//

#include <iostream>
#include <cmath>

#define maxN 200001

using namespace std;
int N{200001};
int P[maxN], W[maxN], D[maxN];

long walkingTime(int p){
    long sum{0};
    for(int i{0};i<N;i++){
        long walk=abs(p-P[i])-D[i];
        if(walk>0){
            sum+=walk*W[i];
        }
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    cin>>N;
    int max{-1},min{};
    for(int i=0;i<N;i++){
        cin>>P[i]>>W[i]>>D[i];
        if(max==-1){
            max=P[i];
            min=P[i];
        }
        if(max<P[i])
            max=P[i];
        if(min>P[i])
            min=P[i];
    }
    int mid{0};
    //cout<<"\tmax: "<<max<<", min: "<<min<<endl;
    long speakerLoc{0};
    while(min<=max){
        mid=(min+max)/2;
        long speakerLocL{walkingTime(mid-1)};
        long speakerLocR{walkingTime(mid+1)};
        speakerLoc=walkingTime(mid);
        //cout<<"\tmax: "<<max<<", min: "<<min<<", mid: "<<mid<<", s: "<<s<<", sL: "<<sL<<", sR: "<<sR<<endl;
        if((speakerLoc<speakerLocR&&speakerLoc<speakerLocL)||(speakerLoc==speakerLocR||speakerLoc==speakerLocL)){
            break;
        }
        else if(speakerLoc<speakerLocR){
            max=mid-1;
        }
        else{
            min=mid+1;
        }
    }
    cout<<speakerLoc;
    return 0;
}
