
#include <iostream>  
#include "Merge/MergeSort.cpp"
using namespace std;
int main(int argc, char* argv[])
{
    MergeSort sort;
    int arr[] = {8, 9, 1, 7, 2};
    
    int size = sizeof(arr) / sizeof(int);
     
    sort.Sort(arr,size);
    for(auto i : arr)
        cout << i << " ";
    return 0;
}
