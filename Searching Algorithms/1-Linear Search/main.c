#include <stdio.h>
#include "Search.h"


int main(void){
    int Ret = -1;
    int My_Data[10] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};
    Ret = LinearSearch_1(My_Data, 10, 77); // 6
    printf("Element is found with index = %i \n", Ret);


    Ret = LinearSearch_1(My_Data, 10, 999); // -1
    if(Data_Not_Found == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("============================== \n");

    Ret = LinearSearch_2(My_Data, 10, 100); // 9
    printf("Element is found with index = %i \n", Ret);


    Ret = LinearSearch_2(My_Data, 10, 999); // -1
    if(Data_Not_Found == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    return 0;
}