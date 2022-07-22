# include <stdio.h>
# include <iostream>

void ShowArrayElem(int * param, int len){
    int i;
    for (i=0;i<len;i++)
        printf("%d ",param[i]);
    printf("\n");
}

void AddArrayElem(int * param, int len, int add)
{
    int i;
    for (i=0;i<len;i++)
        param[i]+=add;    
}

int main(void)
{
    int arr[3]={1,2,3}; 
    int temp[3]; 
    // 배열의 이름을 그대로 출력했을떄 처음의 주소가 나온다. 이 주소를 역참조 한다면
    // 해당 주소가 처음 시작하는 부분을 가르키며, 
    // 해당 주소를 배열로 읽어와 0, 1, 2의 인덱스를 넣어준다면
    // 해당위치의 값을 읽을 수 있다.
    // 또한 python 과 같이 array의 인덱스는 0부터 시작한다. 
    std::cout<<arr<<"  "<<*arr<<"  "<<arr[2]<<std::endl;
    AddArrayElem(arr,sizeof(arr)/sizeof(int),1);
    ShowArrayElem(arr,sizeof(arr)/sizeof(int));
    // 또한 해당 어래이의 주소를 복사해 와서 사용하는 것이기 떄문에, 저장된 데이터는 새로 바뀌지 않으며
    // 중간에 있는 과정을 저장 copy하지 않는이상 바뀌지 않는다.
    std::cout<<arr<<"  "<<*arr<<"  "<<arr[2]<<std::endl;
    AddArrayElem(arr,sizeof(arr)/sizeof(int),2);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));
    AddArrayElem(arr,sizeof(arr)/sizeof(int),3);
    ShowArrayElem(arr,sizeof(arr)/sizeof(int));
    std::cout<<arr<<"  "<<*arr<<"  "<<arr[2]<<std::endl;
    return 0;
}