#include <iostream>

int main(void)
{
    int num=20;
    std::cout<<"Hello world!!"<<std::endl;  // std::endl's mean is like in python \n
    std::cout<<"Hello "<<"World! "<<std::endl;
    std::cout<<num<<123545646<<'A'<<std::endl;
    /*std::endl;이렇게 하면뒤에 는것이 실행이 안됨
    std::endl;*/
    // std::endl;
    std::cout<<num<<"한글 테스트 hello test";// 따옴표는 '는 오류가 남. 렴려면 "를 사욯해야 함
    return 0; // 프로그램 종료
}