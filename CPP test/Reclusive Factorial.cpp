#include <stdio.h>
#include <iostream>
int factorial(long long n){
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(void){
    std::cout<<"10! = "<<factorial(10)<<std::endl;
    std::cout<<"5! = "<<factorial(5)<<std::endl;
    std::cout<<"15! = "<<factorial(15)<<std::endl;
    return 0;
    }
