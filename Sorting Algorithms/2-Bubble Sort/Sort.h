#ifndef _SORT_H_
#define _SORT_H_


/*      Advantages:
        *Simplicity: Selection sort is easy to understand and implement.
        *Memory efficiency: Selection sort is memory-efficient as it sorts the array in-place,
*/
/*      DisAdvantages
        *Time complexity: not efficient for large datasets. O(n^2)
        *Not stable:  it doesn't preserve the relative order of equal elements in the sorted array.
        *Inefficient for almost sorted data: as it still requires O(n^2) comparisons and swaps to complete the sort.
*/
void BubbleSort_Ascending(int Data[],int length);
void BubbleSort_Descending(int Data[],int length);



#endif