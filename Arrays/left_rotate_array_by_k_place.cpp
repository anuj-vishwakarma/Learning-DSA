
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void  rotateArray(vector<int>& nums, int k) {

        // Better TC: O(n+d) SC: O(d)
        // int n = nums.size(); // Size of array
        // k = k % n; 
        
        // vector<int> temp;
        
        // for(int i=0; i < k; i++) {
        //     temp.push_back(nums[i]);
        // }
        
        // for(int i=k; i < n; i++) {
        //     nums[i-k] = nums[i];
        // }
        
        // for(int i=0; i < k; i++) {
        //     nums[n-k+i] = temp[i];
        // }
        // }


    // Brute - force
        // if(nums.size() == 1){
        //     return;
        // }
        // for(int count = 0; count%nums.size() < k; count++){
        //     int temp = nums[0];
        //     for(int i=0; i<=nums.size()-2; i++){
        //         nums[i] = nums[i+1];
        //     }
        //     nums[nums.size()-1] = temp;
        // }

        // Optimal is by reversing 
        int n = nums.size();
         k = k % n;
         reverseArray(nums, 0, k - 1);

        // Reverse the last n-k elements
        reverseArray(nums, k, n - 1);

        // Reverse the entire vector
        reverseArray(nums, 0, n - 1);
    }
    void reverseArray(vector<int>& nums, int start, int end) {

        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++, end--;
        }
    }

};

int main()
{   
    vector<int> nums = {2};
    Solution solution;
    solution.rotateArray(nums, 4);

    for(auto i : nums){
        cout  << i << " ";
    }
    cout << endl;

    nums = {1, 3, 4, 5, 2, 7};
    solution.rotateArray(nums, 3);

    
    for(auto i : nums){
        cout  << i << " ";
    }
    return 0;
}
