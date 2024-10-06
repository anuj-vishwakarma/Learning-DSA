#include<iostream>
using namespace std;
#include<vector>
class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){			
            helper(nums, 0, nums.size()-1);
            return nums;
		}
        void helper(vector<int> &nums, int i, int j){
            if(i>=j) return;
            swap(nums[i], nums[j]);
            helper(nums, i+1, j-1);
        }
};
int main()
{
    vector<int> nums = {1, 5, 3, 0};
    Solution s;
    s.reverseArray(nums);
    for(auto i : nums){
        cout << i << " " ;
    }
    return 0;
}

/*

ALways remember it is not generally recommended to use gloabal/static variables in recursion code, also, class variable value remains same and doesn't resets

*/