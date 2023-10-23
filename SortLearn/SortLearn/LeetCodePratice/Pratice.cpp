#include "Pratice.h"
#include <vector>
#include <unordered_map>
#include <unordered_set>
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

/**
给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 */
class Majority
{
public: 
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count_map;
        int maxKey = 0;
        int maxCount = 0;
        for(int i = 0;i<nums.size();i++){
            count_map[nums[i]] += 1; 
            if(maxCount < count_map[nums[i]])
            {
                maxCount = count_map[nums[i]];
                maxKey = nums[i];
            }
        }

        return maxKey;
    }
};

/**
给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
 
*/
class CheckContain
{
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        bool ans = false;
        for(auto num : nums)
        {
            if(set.count(num))
            {
                ans = true;
                break;
            }
           set.emplace(num);   
        }
        return ans;
    }
};

class Intersect
{
    class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int> set;
            unordered_set<int> set2;  //去从用
            vector<int> ans;
            set.insert(nums1.begin(),nums1.end());
            int i = 0;
            for(auto n : nums2)
            {
                if(set.count(n) && !set2.count(n))
                {
                    ans.insert(ans.begin() + i,n);
                    i++;
                }
            }
            return ans;
        }
    };
};

class Solution {
public:
    void swapPtr(int* a,int *b){
        int  tmp = *a;
        *a = *b;
        *b = tmp;
    }

    int maxProduct(vector<int>& nums) {
        int *a = &nums[0],*b = &nums[1];
        
        for(int i = 2;i<nums.size();i++){
            if(nums[i] > *a){
                swapPtr(a,&nums[i]);
            }

            if(nums[i]> *b){
                swapPtr(b,&nums[i]);
            }
        }

        return (*a - 1) * (*b - 1);
    }
};
