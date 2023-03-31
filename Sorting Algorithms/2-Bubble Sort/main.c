#include <stdio.h>
#include "Sort.h"

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    BubbleSort_Ascending(arr, n);

    printf("Sorted array Ascending: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    BubbleSort_Descending(arr, n);
    printf("Sorted array Descending: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}