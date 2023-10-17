#include "HeapSrot.h"

#include <forward_list>

template <typename T>
void HeapSrot::Sort(T* arr, int len)
{
    HeadSort(arr,len);
}

//建立大顶堆
template <typename T>
void HeapSrot::BigHeadBuild(T* arr, int start, int end)
{
     int parent = start;
     int child = 2 * parent + parent;
     while (child <= end)
     {
         //确认选到的最大的节点
         if(child < end && arr[child] < arr[child + 1])
         {
             child++;
         }

         if(arr[parent] > arr[child])
         {
             return;
         }

         std::swap(arr[parent],arr[child]);
         parent = child;
         child = 2 * parent + 1;
     }
}


template <typename T>
void HeapSrot::HeadSort(T* arr, int len)
{
    //先进行倒叙建立大顶堆
    for(int i = len / 2 - 1;i>=0;i--)
    {
        BigHeadBuild(arr,i,len - 1);
    }

    //每次建立的大顶堆选择第一个元素交换位置，再重新建立大顶堆重复这个步骤
    for(int i = len - 1;i>=0;i--)
    {
        std::swap(arr[0],arr[i]);
        BigHeadBuild(arr,0,i-1);
    }
}

