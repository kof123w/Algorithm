#include "QuickSort.h"
#include <iostream>
template<typename T>
T* QuickSort::Sort(T* arr,int len)
{
    Q_sort(arr,0,len-1);
    return arr;
}

template<typename T>
void QuickSort::Q_sort(T* arr,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    
    int i = left;
    int j = right;
    int key = *(arr + i);   //以i为基准 

    while (i<j)
    {
        while (i<j && key<=arr[j])
        {
            j--;
        }

        if(i<j)
        {
            arr[i] = arr[j];
            i++;
        }

        while (i<j && key >= arr[i])
        {
            i++;
        }

        if(i<j)
        {
            arr[j] = arr[i];
            j--;
        }
    }
    
    arr[i] = key;
    Q_sort(arr,left,i-1);
    Q_sort(arr,i+1,right);
}