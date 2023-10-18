#include "BucketSort.h"

#include <algorithm>
#include <vector> 
using namespace std;

template <typename T>
void BucketSort::Sort(T* arr, int len)
{
    //简单设置一个规则进行排序，规则为N/10，桶排序其实就是空间换时间的操作,我们先进行动态计算，计算出对应的需要桶的数量
    int max = 0;

    //为了得到需要同的数量，先要拿到数组的最大值
    for(int i = 0;i<len;i++)
    {
        if(*(arr + i) >= max)
        {
            max = *(arr + i);
        }
    }

    //根据规则N/10，计算出需要桶的数量，再创建桶，再按照规则把元素放进桶里面
    int bucketNum = max / 10;
    vector<vector<T>> buckets(bucketNum);
    for(int i = 0;i < bucketNum;i++)
    {
        vector<T> vector;
        buckets.push_back(vector);
    }
    
    for(int i = 0 ;i<len;i++)
    {
        int buckIndex = arr[i] / 10;
        buckets[buckIndex].push_back(arr[i]);
    }

    //再对桶进行依次排序
    for(int i = 0;i<buckets.size();i++)
    {
        std::sort(buckets[i].begin(),buckets[i].end());
    }

    //拿出来
    int index= 0;
    for(int i = 0;i<buckets.size();i++)
    {
        for(int j = 0;j < buckets[i].size();j++)
        {
            arr[index] = buckets[i][j];
            index ++;
        }
    }
}
