#include <stdio.h>
#include "Search.h"
int main(void){
    int Ret = -1;
    int My_Data[10] = {11, 22, 33, 44, 55, 66, 77, 88 ,99 ,100};
    Ret = BinarySearch_2(My_Data, 0,9, 77); // 6
    printf("Element is found with index = %i \n", Ret);


    Ret = BinarySearch_2(My_Data, 0,9, 999); // -1
    if(-1 == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    printf("============================== \n");

    Ret = BinarySearch_2(My_Data, 0,9, 100); // 9
    printf("Element is found with index = %i \n", Ret);


    Ret = BinarySearch_2(My_Data, 0,9, 999); // -1
    if(-1 == Ret)
    {
        printf("Element is not found in your data !!\n");
    }

    return 0;
}