#include "BubbleSort.h"

#include <iostream>
#include <vector>
using namespace std; 

int Bubble()
{ 
    vector<int>* arr = new vector<int>();
    arr->push_back(4);
    arr->push_back(5);
    arr->push_back(1);
    arr->push_back(3);
    arr->push_back(10);
    for(int i = 0;i<arr->size();i++)
    {
        for(int j = i+1;j<arr->size();j++)
        {
            //倒叙
            if(arr->at(i) <= arr->at(j)){
                swap(arr->at(i),arr->at(j));
            }
        }
    }

    //打印
    for(int i = 0;i<arr->size();i++){
        cout << arr->at(i) << endl;
    }

    //销毁对象
    delete arr;
    arr = nullptr;
    return 0;
} 

