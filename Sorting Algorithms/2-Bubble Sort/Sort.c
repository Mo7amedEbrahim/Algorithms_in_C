#include "Sort.h"

void BubbleSort_Ascending(int Data[],int length){
    int i,j;
    for(i=0;i<length-1;i++){
        for(j=0 ; j<length-i-1;j++){
            if(Data[j] > Data[j+1]){
                //Swap
                Data[j] = Data[j] ^ Data[j+1];
                Data[j+1] = Data[j] ^ Data[j+1];
                Data[j] = Data[j] ^ Data[j+1];
            }
        }
    }
}

void BubbleSort_Descending(int Data[],int length){
    int i,j;
    for(i=0;i<length-1;i++){
        for(j=0;j<length-i-1;j++){
            if(Data[j] < Data[j+1]){
                Data[j] = Data[j] + Data[j+1];
                Data[j+1] = Data[j] - Data[j+1];
                Data[j] = Data[j] - Data[j+1];
            }
        }
    }
}