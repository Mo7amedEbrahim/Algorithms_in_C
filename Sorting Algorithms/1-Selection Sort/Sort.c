#include "Sort.h"

void SelectionSort_Ascending(int arr[],int length){
    int i,j,minindex,temp;
    for(i = 0 ; i < length ; i++){
        minindex = i;
        for(j=i+1 ; j<length ;j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        if(minindex != i){
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

void SelectionSort_Descending(int arr[],int length){
    int i,j,maxindex,temp;
    for(i=0;i<length;i++){
        maxindex = i;
        for(j = i+1;j<length;j++){
            if(arr[j] > arr[maxindex]){
                maxindex = j;
            }
        }
        if(maxindex != i){
            temp = arr[i];
            arr[i] = arr[maxindex];
            arr[maxindex] = temp;
        }
    }
}