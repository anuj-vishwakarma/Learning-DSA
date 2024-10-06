#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        divide(nums, low, high);
    }
    int getIndex(vector<int>& arr, int low, int high){
        int pivot = arr[low];
        int i = low, j = high;
        while(i < j ){
            while(arr[i] <= pivot && i<=high){
                i++;
            }
            while(arr[j] > pivot && j >= low){
                j--;
            }
            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }
    void divide(vector<int>& arr, int low, int high){
        if(low < high){
            int pIndex = getIndex(arr, low, high);
            divide(arr, low, pIndex - 1);
            divide(arr, pIndex+1, high);
        }
    }
};


int main()
{
    Solution sol;
    vector<int> nums = {5, 8, 1, 9, 4, 2, 9, 4, 7};
    sol.quickSort(nums);
    
    for(auto i : nums)
        cout << i << " ";
    return 0;
}