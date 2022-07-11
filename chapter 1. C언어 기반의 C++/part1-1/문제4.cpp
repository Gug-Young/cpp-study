#include <iostream>

int main(void)
{
    int incentive,price;
    price=0;
    
    while(price!=-1)
    {
        std::cout<<"판매 금액을 만원윌위로 입력(-1 to end)";
        std::cin>>price;
        if(price!=-1){
            std::cout<<"이번 달 급여:"<<50+0.12*price<<"만원"<<std::endl;
        }
        
    }
    
    
    return 0;
}