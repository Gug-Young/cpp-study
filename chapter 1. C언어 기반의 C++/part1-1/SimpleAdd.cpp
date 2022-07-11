#include <iostream>

int main(void)
{
    double val1;
    std::cout<<"enter first value: ";
    std::cin>>val1; // 선언한 변수를 cin을통해서 입력을 받음
    
    double val2;
    std::cout<<"ㅁㄴㅇㄹㅁㄴㅇㄹenter second value: ";
    std::cin>>val2; // 선언한 변수를 cin을통해서 입력을 받음
    
    double result = val1+val2;
    std::cout<<"result : "<<result<<std::endl;
    return 0;

}