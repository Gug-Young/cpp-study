#include <iostream>

int main(void)
{
    int var1,result;
    std::cout<<"1번째 정수 입력:";
    std::cin>>var1;
    result+=var1;
    std::cout<<"2번째 정수 입력:";
    std::cin>>var1;
    result+=var1;
    std::cout<<"3번째 정수 입력:";
    std::cin>>var1;
    result+=var1;
    std::cout<<"4번째 정수 입력:";
    std::cin>>var1;
    result+=var1;
    std::cout<<"5번째 정수 입력:";
    std::cin>>var1;
    result+=var1;

    std::cout<<"합계 :"<<result<<std::endl;
}