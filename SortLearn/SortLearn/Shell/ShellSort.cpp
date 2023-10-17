#include "ShellSort.h"

#include <unordered_set>

template <typename T>
T* ShellSort::Sort(T* arr, int len)
{
    if(len <= 0 || arr == nullptr){
        return arr;
    }
    int d = len;
    //做一下增量的循环
    for(d = d / 2;d > 0 ; d = d / 2 )
    {
        //里面其实就是一个插入排序，只是带了一个间隔的插入排序
        for(int i = 0;i<len;i+=d)
        {
            T index = *(arr + i);
            for(int j = i;j>0 && index < *(arr + j - d);j-=d)
            {
                std::swap(arr[j],arr[j-1]);
            }
        }
    }

    return arr;
}
