
#include <iostream>  
#include "Bucket/BucketSort.cpp"
#include "LeetCodePratice/MaxString.cpp"
using namespace std;
int main(int argc, char* argv[])
{
   
    vector<vector<int>> grid ;
    vector<int> grid0 ;
    grid0.emplace(grid0.begin(),2);
    grid0.emplace(grid0.begin()+1,10); 
    grid.emplace(grid.begin(),grid0);
    MaxStringCl solution;
    auto ans = solution.largestNumber(grid0);
    cout << "答案ans:" << ans << endl;
    return 0;
}
