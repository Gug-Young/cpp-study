# include <stdio.h>
# include <iostream>


void swap3(int * num1, int * num2,int * num3)
{
    int temp1 = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp1;
}
int main(void)
{
    int num1=1,num2=2,num3=3;
    std::cout<<num1<<" "<<num2<<" "<<num3<<" "<<std::endl;
    swap3(&num1,&num2,&num3);
    std::cout<<num1<<" "<<num2<<" "<<num3<<" "<<std::endl;
    swap3(&num1,&num2,&num3);
    std::cout<<num1<<" "<<num2<<" "<<num3<<" "<<std::endl;
    swap3(&num1,&num2,&num3);
    std::cout<<num1<<" "<<num2<<" "<<num3<<" "<<std::endl;

}