# include <stdio.h>

int main(int argc,char **argv)
{
    //�츮�� �ƹ� ���� �̸����� ������ �־ �ڿ� �ִ� ������ ����� �ȴ� int main(int t,char *tempral[])
    int i= 0;
    printf("���޵� ���ڿ��� �� : %d \n",argc);
    for(i=0;i<argc;i++)
        printf("%d��° ���ڿ� : %s \n",i+1,argv[i]);
    return 0;
}