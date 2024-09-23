#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        /* Brute-force
        TC: O(N^2) 
        SC: O(10^4);
        */

    int el=-1;
    int maxCount = 0;
    int n = nums.size();
    int maxi = nums[0];
    for(auto i : nums){
        maxi = max(maxi, i);
    }
    int hash[maxi] = {0};

    for(int i=0; i<n; i++){
        hash[nums[i]]++;
    }

    for(int i=0; i<maxi; i++){
        if(hash[i] > maxCount){
            maxCount = hash[i];
            el = i;
        }else if(hash[i] == maxCount && i<el ){
            el = i;
        }
    }

    return el;
    }
};
int main (){

    int n; 
    cin >> n;
    int nums[3];
    int el1Freq=0, el2Freq=0;
    int el1 = -1, el2 = -1;
    int vis[10001] = {0};
    
    for (int i = 0; i < n; i++)
    {
        if(vis[nums[i]] == 0){
            vis[nums[i]] = 1;

            int count = 0;

            for (int j = 0; j < n; j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }
            if(count > el1Freq){
                el2Freq = el1Freq; el2=el1;
                el1Freq = count; el1 = nums[i];
            }else if(count > el2Freq){
                el2Freq = count; el2 = nums[i];
            }else if(count == el1Freq && nums[i] < el1){
                 el1 = nums[i];
                 el1Freq = count;
            }else if(count == el2Freq && nums[i] < el2){
                el2 = nums[i];
                el2Freq = count;
            }
            
        }
    }
    

    

    return 0;
}