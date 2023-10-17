#include "MergeSort.h"
#include<vector>
#include<iostream>
using namespace std;
template<typename T>
T* MergeSort::Sort(T* arr,int len)
{
    Merge_Sort(arr,0,len - 1);
    return arr;
}

template <typename T>
void MergeSort::Merge(T* arr,  int left, int right,int mid)
{
    vector<T> array;
    int i = left;
    int j = mid + 1;
    while (i<=mid &&j<=right)
    {
        array.push_back(arr[i] <= arr[j] ? arr[i++] : arr[j++]);
    }

    while (i<=mid)
    {
        array.push_back(arr[i++]);
    }

    while(j<=right)
    {
        array.push_back(arr[j++]);
    } 
    
    //拷贝会原来的数组
    for(int k = left, o = 0;k<=right;k++,o++)
    {
        arr[k] = array[o];
    }

    //调试
    /*cout << "right:" <<right << " left:" << left << " mid:" << mid << endl;
    cout << "arr:";
    for(int i = 0;i< 5;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "array:";
    for(int i = 0;i< array.size();i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;*/
}

template <typename T>
void MergeSort::Merge_Sort(T* arr,  int left, int right)
{
    if(left == right)
    {
        return;
    }

    int mid =left + ((right - left) >> 1);

    //分解区间
    Merge_Sort(arr, left,mid);
    Merge_Sort(arr, mid+1,right);

    //合并
    Merge(arr, left,right,mid);
}



