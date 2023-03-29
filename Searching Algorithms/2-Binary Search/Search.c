#include "Search.h"


//  Using Recursion
int BinarySearch_1(int Data[],int left,int right,int Req_Value){
    if(right >= left){
        int mid = left + (right-left)/2 ;
        if(Data[mid] == Req_Value){
            return mid;
        }
        if(Data[mid] > Req_Value){
            return BinarySearch_1(Data,left,mid-1,Req_Value);
        }
        return BinarySearch_1(Data,mid+1,right,Req_Value);
    }
    return -1;
}

//  Using loop
int BinarySearch_2(int Data[],int left,int right,int Req_Value){
    while(left <= right){
        int mid =left+(right-left)/2;
        if(Data[mid] == Req_Value){
            return mid;
        }
        else if(Data[mid] > Req_Value){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}