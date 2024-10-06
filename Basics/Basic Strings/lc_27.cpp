#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        int n  = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == val){
                for(int j=i; j<n; j++){
                    if(nums[j] != val){
                        swap(nums[i], nums[j]);
                    }
                }
            }
        }
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " ";
        }
    }
int main()
{       
    vector<int> el = {0,1,2,2,2,3,0,4,2};
    removeElement(el, 2);
    return 0;
}