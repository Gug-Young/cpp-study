# include <iostream>

int main(void)
{
    int arr_2d[3][3] ={1,2,3,4,5,6,7,8,9};
    int arr_3d[3][3][3]={};

    std::cout<<sizeof(arr_2d)/4<<" size of 2d arr"<<std::endl;
    std::cout<<sizeof(arr_3d)/4<<" size of 3d arr"<<std::endl;

    for (int i =0;i<3;i++)
    {
        for (int j =0;j<3;j++)
            std::cout<<arr_2d[i][j]<<" ";
        std::cout<<" "<<std::endl;
    }
    std::cout<<"3d array"<<std::endl;
    for (int i =0;i<3;i++)
    {
        for (int j =0;j<3;j++)
        {
            for (int k=0;k<3;k++)
                std::cout<<arr_3d[i][j][k]<<" ";
            std::cout<<""<<std::endl;       
        }
        std::cout<<""<<std::endl;
    }
}   