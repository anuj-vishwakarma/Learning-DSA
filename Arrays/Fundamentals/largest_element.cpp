
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        // Brute force - sort it and return last element

        int largest = nums[0];

        for(auto i : nums){
            if (i > largest){
                largest = i;
            }
        }
        return largest;
    }
};

int main(){

    return 0;
}
