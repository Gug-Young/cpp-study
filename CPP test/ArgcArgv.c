# include <stdio.h>

int main(int argc,char **argv)
{
    //우리가 아무 변수 이름으로 설정해 주어도 뒤에 있는 변수로 계산이 된다 int main(int t,char *tempral[])
    int i= 0;
    printf("전달될 문자열의 수 : %d \n",argc);
    for(i=0;i<argc;i++)
        printf("%d번째 문자열 : %s \n",i+1,argv[i]);
    return 0;
}