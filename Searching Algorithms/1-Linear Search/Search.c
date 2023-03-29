#include "Search.h"

int LinearSearch_1(int Data[],int Data_Length,int Req_Data){
    int index;
    for(index = 0 ; index < Data_Length ; index++){
        if(Req_Data == Data[index]) {
            return index;
        }
        else{    /*Do Nothing*/
        }
    }
    return Data_Not_Found;
}

int LinearSearch_2(int Data[],int Data_Length,int Req_Data){
    int left_index = 0 , right_index = Data_Length-1;
    for(left_index = 0;left_index <= right_index;){
        if(Req_Data == Data[left_index]){
            return left_index;
        }
        else{
            /*Do Nothing*/
        }
        if(Req_Data == Data[right_index]){
            return right_index;
        }
        else{
            /*Do Nothing*/
        }
        left_index++;
        right_index--;
    }
    return Data_Not_Found;
}