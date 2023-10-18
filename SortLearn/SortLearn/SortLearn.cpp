
#include <iostream>  
#include "Bucket/BucketSort.cpp"
using namespace std;
int main(int argc, char* argv[])
{
    BucketSort sort;
    int arr[] = {8, 9, 1, 7, 2,25,10,85,14,32,55};
    
    int size = sizeof(arr) / sizeof(int);
     
    sort.Sort(arr,size);
    for(auto i : arr)
        cout << i << " ";
    return 0;
}
