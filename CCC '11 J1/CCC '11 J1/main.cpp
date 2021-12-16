//
//  main.cpp
//  CCC '11 J1
//
//  Created by Hongjun Yun on 2021-12-16.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int antena{0}, eye{0};
    std::cin>>antena>>eye;
    if(antena>=3&&eye<=4){
        std::cout<<"TroyMartian"<<std::endl;
    }
    if(antena<=6&&eye>=2){
        std::cout<<"VladSaturnian"<<std::endl;
    }
    if(antena<=2&&eye<=3){
        std::cout<<"GraemeMercurian";
    }
    return 0;
}
