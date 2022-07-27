#include <stdio.h>

void odd_even(int * arr,int len){
    int even_arr[len];
    int odd_arr[len];
    int even_cnt =0,odd_cnt =0;
    int e_temp =0,o_temp =0;

    for (int i=0;i<len;i++)
    {
        if(arr[i]%2 ==0)
            even_arr[even_cnt++]=arr[i];
        else
            odd_arr[odd_cnt++]=arr[i];
    }

    printf("짝수 출력 :");
    e_temp = even_cnt;    
    for(int i=0;i<even_cnt;i++)
    {   
        e_temp--;
        printf("%d",even_arr[i]);
        if (e_temp!=0)
            printf(", ");
        else
            printf("\n");
    }
    printf("홀수 출력 :");
    o_temp = odd_cnt;    
    for(int i=0;i<odd_cnt;i++)
    {   
        o_temp--;
        printf("%d",odd_arr[i]);
        if (o_temp!=0)
            printf(", ");
        else
            printf("\n");
    }
}

int main(void){
    int arr[10];
    int len = 10;
    int idx = 0;
    printf("총 10개의 숫자 입력 \n");

    for (int i =0;i<len;i++){
        printf("입력 (%d) ",++idx);
        scanf("%d",&arr[i]);
    }
    odd_even(arr,sizeof(arr)/sizeof(int));
}