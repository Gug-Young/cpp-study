# include <stdio.h>
# include <iostream>
/*
int main(void){
    int num=10;
    int * ptr1 =&num;
    int * ptr2 = ptr1;
    std :: cout<<*ptr1<<"  "<<*ptr2<<std::endl;
    (*ptr2)++;
    std :: cout<<*ptr1<<"  "<<*ptr2<<std::endl;
    (*ptr1)++;
    std :: cout<<*pt1<<"  "<<*ptr2<<std::endl;

}


int main(void){
    int  arr[3]  =  {0,1,2};

    std :: cout<<&arr<<"  "<<arr<<std::endl;
    std :: cout<<&arr[0]<<"  "<<arr[0]+arr[1]+arr[2]<<std::endl;
    std :: cout<<&arr[1]<<"  "<<arr[1]<<std::endl;
    std :: cout<<&arr[2]<<"  "<<arr[2]<<std::endl;

}


int main(void){
    int  *str  =  0;
    double  *double_str  =  0;

    std :: cout<<str<<"  "<<str+1<<std::endl;
    std :: cout<<double_str<<"  "<<double_str+1<<std::endl;
    // std :: cout<<&arr[0]<<"  "<<arr[0]+arr[1]+arr[2]<<std::endl;
    // std :: cout<<&arr[1]<<"  "<<arr[1]<<std::endl;
    // std :: cout<<&arr[2]<<"  "<<arr[2]<<std::endl;

}

int main(void){
    char  *str  =  "where  are  you";
    char  str2[]  ="MY  string";

    std :: cout<<str<<"  "<<&str<<std::endl;
    str2[0]='X';
    // str[0]='X';
    std :: cout<<str<<"  "<<&str<<std::endl;
    std::cout<<&str2<<" "<<str2<<std::endl;
    return  0;
    // std :: cout<<&arr[0]<<"  "<<arr[0]+arr[1]+arr[2]<<std::endl;
    // std :: cout<<&arr[1]<<"  "<<arr[1]<<std::endl;
    // std :: cout<<&arr[2]<<"  "<<arr[2]<<std::endl;

}
*/
int main(void){
    int num1 = 10,num2=20,num3=30;
    int * arr[] = {&num1,&num2,&num3};
    std::cout<<arr<<*arr<<std::endl;
    for (int i=0;i<3;i++) std::cout<<*arr[i];
    for (int i=0;i<3;i++) std::cout<<*arr[i];
}