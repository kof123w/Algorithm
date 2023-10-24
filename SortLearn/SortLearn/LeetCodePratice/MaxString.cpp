#include "MaxString.h"
#include<vector>
#include<string>

using namespace std;

class MaxStringCl {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        
        string val;
        for(int v : nums){
            val += to_string(v);
        }

        return val;
    }

    void quickSort(vector<int>& nums,int left,int right){
        if(left>=right){
            return;
        }
        int key = nums[left];
        int i = left;
        int j = right;

        while(i<j){
            while(i<j&&!sortCompere(key,nums[j])){
                j--;
            }

            if(i<j && sortCompere(key,nums[j])){ 
                nums[i] = nums[j];
                i++;
            }

            while(i<j && sortCompere(key,nums[i])){
                i++;
            }

            if(i<j && !sortCompere(key,nums[i])){
                nums[j] = nums[i];
                j--;
            }
        }

        nums[i] = key;
        quickSort(nums,left,i-1);
        quickSort(nums,i+1,right);
    }

    //排序比较
    bool sortCompere(int &a,int &b){
        return to_string(a).compare(to_string(b))==-1;
    }
};