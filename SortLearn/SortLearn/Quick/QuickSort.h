#pragma once

class QuickSort
{
public:
    template<typename T>
    T* Sort(T* arr,int len);
    template<typename T>
    void Q_sort(T* arr,int left,int right);
};
