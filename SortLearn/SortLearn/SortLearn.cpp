
#include <iostream>  
#include "Select/SelectSort.cpp"
using namespace std;
int main(int argc, char* argv[])
{
    SelectSort select_sort;
    int arr[] = {36,3,6,91,2,4}; 
    int size = sizeof(arr) / sizeof(int);
    
    select_sort.Sort(arr,size);
    for(auto i : arr)
        cout << i << endl;
    return 0;
}
