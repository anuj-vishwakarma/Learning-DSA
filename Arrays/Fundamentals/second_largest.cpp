#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        // brute-force would be to just sort and return second last element from last if it is not same as the last element because there might be possibilty if there are only one same element in array so no second largest would be there. 

        // TC: NlogN + N(this is the case when all of 'em are largest so end up traversing whole array)

        // sort(nums.begin(), nums.end());
        // int largest = nums[nums.size() - 1];
        // int s_largest = -1;

        // for(int i=nums.size() - 2; i>=0; i--){
        //     if(nums[i] != largest){
        //         s_largest = nums[i];
        //     }
        // }
        // if(s_largest == -1){
        //     return -1;
        // }
        // return s_largest;


        // Better - approach 

        /* find out the largest and again traverse and find out the second largest this time and*/

        int largest = nums[0];

        for(auto i : nums){
            if (i > largest){
                largest = i;
            }
        }
        // now we've found the largest element 
        // TC : O(N+N) = O(2N) 
        /*
        
        int sec_large = -1;

        for(int i : nums){
            if(i != largest && i > sec_large){
                sec_large = i;
            }
        }

        return sec_large;

        */


    //    Optimal Approach : 

    int l = nums[0];
    int s_l = -1;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] > l){
            s_l = l;
            l = nums[i];
        }
        else if(nums[i] < l && nums[i] > s_l){
            s_l = nums[i];
        }
            
    }
    return s_l;
    }

};
int main(){
    vector<int> nums = {2,8,11,9, 12};  
    Solution sol ; 
    cout << sol.secondLargestElement(nums);
    return 0;
}
