#include "BubbleSort.h"

#include <iostream>
#include <vector>
using namespace std;

void Swap(int* a,int* b);

int Bubble()
{ 
    int arr[] = {2,5,1,10};
    int arrSize =sizeof(arr)/ sizeof(int);
    for(int i = 0;i<arrSize;i++)
    {
        for(int j = i+1;j<arrSize;j++)
        {
            //倒叙
            if(arr[i] <= arr[j]){
                Swap(arr+i,arr+j);
            }
        }
    }

    //打印
    for(auto i : arr){
        cout << i << endl;
    }
    return 0;
}

void Swap(int *a,int *b)
{
    int t= *a;
    *a = *b;
    *b = t;
}




