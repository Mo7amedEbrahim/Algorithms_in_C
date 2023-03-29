#ifndef _SORT_H_
#define _SORT_H_

/*      Advantages:
        *Simplicity: Selection sort is easy to understand and implement.
        *Memory efficiency: Selection sort is memory-efficient as it sorts the array in-place,
        *Good for small datasets: Selection sort performs well when used on small datasets.
*/
/*      DisAdvantages
        *Time complexity: not efficient for large datasets.
        *Not stable:  it doesn't preserve the relative order of equal elements in the sorted array.
        *Inefficient for almost sorted data: as it still requires O(n^2) comparisons and swaps to complete the sort.
*/


void SelectionSort_Ascending(int arr[],int length);         //O(n^2)
void SelectionSort_Descending(int arr[],int length);        //O(n^2)


#endif