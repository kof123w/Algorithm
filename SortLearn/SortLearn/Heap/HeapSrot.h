#pragma once

class HeapSrot
{
public:
    template<typename T>
    void Sort(T* arr,int len);

    template<typename T>
    void BigHeadBuild(T* arr,int start,int end);

    template<typename T>
    void HeadSort(T* arr,int len);
};
