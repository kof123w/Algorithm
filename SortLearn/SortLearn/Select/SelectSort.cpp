#include "SelectSort.h" 
#include <unordered_set>

template<typename T>
T* SelectSort::Sort(T* arr,int len)
{
    for(int i = 0;i<len;i++)
    {
        T min = *(arr+i);
        T m_index = i;
        for(int j = i+1;j<len;j++)
        {
            if(min> *(arr+j))
            {
                min = *(arr+j);
                m_index = j;
            }
        }

        if(m_index!=i)
        {
            std::swap(arr[i],arr[m_index]);
        }
    }
    return arr;
}
