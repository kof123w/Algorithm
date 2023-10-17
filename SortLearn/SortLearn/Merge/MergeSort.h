#pragma once

class MergeSort
{
public:
    template<typename T>
    T* Sort(T* arr,int len);

private:
    template<typename T>
    void Merge_Sort(T* arr,  int left, int right);

    template<typename T>
    void Merge(T * arr, int left,int right,int mid);
};
