#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        int temp = nums[0];
        for(int i=0; i<=nums.size()-2; i++){
            nums[i] = nums[i+1];
        }
        nums[nums.size()-1] = temp;
    }
};

int main()
{   
    vector<int> nums = {2};
    Solution solution;
    solution.rotateArrayByOne(nums);

    for(auto i : nums){
        cout  << i << " ";
    }
    return 0;
}
