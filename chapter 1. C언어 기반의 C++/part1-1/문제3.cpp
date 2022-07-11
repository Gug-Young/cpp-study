#include <iostream>

int main(void)
{
    int dan;
    std::cout<<"단을 입력하세요 : ";
    std::cin>>dan;
    for(int i=0;i<10;i++){std::cout<<dan<<" * "<<i<<" = "<<dan*i<<std::endl;}
    
    return 0;
}