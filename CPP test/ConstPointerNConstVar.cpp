# include <iostream>

int main(void)
{
    int num1 = 20;
    int num2 = 30;
    const int * const ptr = &num1;
    const int * ptr2 = &num2; // ptr 을 통해서 값을 변경 X, 대신 지정 주소 변경 가능
    
    int * const ptr3 = &num2; // 참조하는 대상 변경 불가능, 값은 변경 가능
    
    std::cout<<"ptr1 is const int and const pointer"<<std::endl;
    std::cout<< ptr<<" "<< *ptr <<" "<< &ptr<<std::endl;
    // *ptr = 50;
    num1 = 40; 
    std::cout<< ptr<<" "<< *ptr <<" "<< &ptr<<std::endl;
    return 0;
}