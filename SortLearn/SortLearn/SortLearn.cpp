
#include <iostream>  
#include "Shell/ShellSort.cpp"
using namespace std;
int main(int argc, char* argv[])
{
    ShellSort sort;
    int arr[] = {8, 9, 1, 7, 2, 3, 5, 4, 11, 0}; 
    int size = sizeof(arr) / sizeof(int);
    
    sort.Sort(arr,size);
    for(auto i : arr)
        cout << i << " ";
    return 0;
}
