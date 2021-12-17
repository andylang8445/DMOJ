//
//  main.cpp
//  CCC '15 J1
//
//  Created by Hongjun Yun on 2021-12-17.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int month{0}, day{0};
    std::cin>>month>>day;
    if(month>2||(month==2&&day>18)){
        std::cout<<"After";
    }
    else if(month==2&&day==18){
        std::cout<<"Special";
    }
    else{
        std::cout<<"Before";
    }
    return 0;
}
