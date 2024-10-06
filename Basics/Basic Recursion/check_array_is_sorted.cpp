#include<iostream>
#include<vector>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            return helper(nums, 0);
		}
        bool helper(vector<int> &nums, int i){
            if(i == nums.size()-1) return true;
            if (i<nums.size() - 1 && nums[i] > nums[i+1]){
                return false;
            }
            helper(nums, i+1);
        }
};
int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 4};

    cout << sol.isSorted(nums);
    return 0;
}