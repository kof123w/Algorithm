#include "InsertSort.h"

#include <exception>
#include <unordered_set>

template <typename T>
T* InsertSort::Sort(T* t_arr,int len)
{ 
    int size = len;
    
    for(int i = 0;i< size;i++)
    {
        T index = *(t_arr + i);
        for(int j = i;j>0 && index < *(t_arr+j-1);j--)
        {
             std::swap(t_arr[j],t_arr[j-1]);
        }
    }
    return t_arr;
}
