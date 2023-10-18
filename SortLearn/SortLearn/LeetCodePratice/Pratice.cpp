#include "Pratice.h"
#include <vector>
using namespace std;

//leetcode题目 2500.删除每行中的最大值
/*
给你一个 m x n 大小的矩阵 grid ，由若干正整数组成。

执行下述操作，直到 grid 变为空矩阵：

从每一行删除值最大的元素。如果存在多个这样的值，删除其中任何一个。
将删除元素中的最大值与答案相加。
注意 每执行一次操作，矩阵中列的数据就会减 1 。

返回执行上述操作后的答案。
 */
class DeleteMaxValue {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        int max = INT32_MIN;
        while (grid[0].size() > 0)
        {
            max = INT32_MIN;
            for(int i = 0;i<grid.size();i++)
            {
                int tmpMax = INT32_MIN;
                int tmpMaxIndex = -1;
                for(int j = grid[i].size() - 1;j>=0;j--)
                {
                    if(tmpMax < grid[i][j])
                    {
                        tmpMax = grid[i][j];
                        tmpMaxIndex = j;
                    }
                }
                if(tmpMaxIndex != -1)
                {
                    grid[i].erase(grid[i].begin() + tmpMaxIndex );
                }
                if(tmpMax >= max )
                {
                    max = tmpMax;
                }
            }

            ans += max;
        }

        return ans;
        
    }
};
