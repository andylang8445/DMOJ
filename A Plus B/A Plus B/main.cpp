//
//  main.cpp
//  A Plus B
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N;
    std::cin>>N;
    for(int i=0;i<N;i++){
        int tmp, sum=0;
        std::cin>>tmp;
        sum=tmp;
        std::cin>>tmp;
        sum+=tmp;
        std::cout<<sum<<std::endl;
    }
    return 0;
}
