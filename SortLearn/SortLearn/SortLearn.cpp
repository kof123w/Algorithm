
#include <iostream>  
#include "Bucket/BucketSort.cpp"
#include "LeetCodePratice/Pratice.cpp"
using namespace std;
int main(int argc, char* argv[])
{
    /*BucketSort sort;
    int arr[] = {8, 9, 1, 7, 2,25,10,85,14,32,55};
    
    int size = sizeof(arr) / sizeof(int);
     
    sort.Sort(arr,size);
    for(auto i : arr)
        cout << i << " ";*/

    /*vector<vector<int>> grid(2);
    vector<int> grid0(3);
    grid0.emplace(grid0.begin(),1);
    grid0.emplace(grid0.begin()+1,2);
    grid0.emplace(grid0.begin()+2,4);
    grid.emplace(grid.begin(),grid0);

    vector<int> grid1(3);
    grid1.emplace(grid1.begin(),3);
    grid1.emplace(grid1.begin()+1,3);
    grid1.emplace(grid1.begin()+2,1);
    grid.emplace(grid.begin()+1,grid1);*/

    vector<vector<int>> grid ;
    vector<int> grid0 ;
    grid0.emplace(grid0.begin(),10);
    grid.emplace(grid.begin(),grid0);
    DeleteMaxValue solution;
    int ans = solution.deleteGreatestValue(grid);
    cout << "答案ans:" << ans << endl;
    return 0;
}
