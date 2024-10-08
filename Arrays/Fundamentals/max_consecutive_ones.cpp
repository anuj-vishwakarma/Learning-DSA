#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int curr_count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                curr_count++;
                max_count = max(max_count, curr_count);
            }
            // if(curr_count > max_count ){
            //     max_count = curr_count;
            // }
            if(nums[i] == 0){
                curr_count = 0;
            }
        }
        return max_count;
    }
}; 

int main()
{

    return 0;
}
