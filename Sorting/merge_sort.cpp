#include<iostream>
#include<vector>
using namespace std;
class  Solution {
    public: 
        vector<int> mergeSort(vector<int>&arr){
            int low = 0, high = arr.size() - 1;
            divide(arr, low, high);
            // int mid = (low + high) / 2;
            // merge(arr, low, mid, high);
            return arr;
        }
        void divide(vector<int>&arr, int low, int high){
            if(low>=high) return;
            int mid = (low + high) / 2;
            divide(arr, low, mid);
            divide(arr, mid+1, high);
            merge_more_effecient(arr, low, mid, high);
        }
        void merge(vector<int>& arr, int low, int mid, int high){
            vector<int> temp;
            int left = low, right = mid + 1;

            while(left <= mid && right <= high){
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }else{
                    temp.push_back(arr[right]);
                    right++;
                }
                
            }
                while(left <= mid){
                    temp.push_back(arr[left]);
                    left++;
                }
                while(right <= high){
                    temp.push_back(arr[right]);
                    right++;
                }

            
            for(int i=low; i<=high; i++){
                arr[i] = temp[i-low];
            }
        }
        /* 
            In the above code of merge, what we were doing was, we've created a temperorary array(vector) which dynamically increases it's size if more elements are added which is an overhead becuase while doing that it takes a significant amount of time which in case of larger data set can reduce performance, so,
            what we're doing in the code below is, we are defining the size of the temporaray array(vector) and using a variable *k* to access it, so that only necessary space is used and the overhead of dynamically increasing the size of vector can be removed, thus improving performance
        */
        void merge_more_effecient(vector<int>& arr, int low, int mid, int high) {
        int left = low, right = mid + 1;
        vector<int> temp(high - low + 1); 
        int k = 0;

        // Merge both parts into temp
        while(left <= mid && right <= high) {
            if(arr[left] <= arr[right]) {
                temp[k] = arr[left];
                k++;
                left++;
                /* instead of above code this can also be written 
                temp[k++] = arr[left++]*/
            } else {
                temp[k] = arr[right];
                k++;
                right++;
            }
        }

        // Copy remaining elements of left half
        while(left <= mid) {
            temp[k++] = arr[left++];
        }

        // Copy remaining elements of right half
        while(right <= high) {
            temp[k++] = arr[right++];
        }

        // Copy the merged elements back into the original array
        for(int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

};

int main()
{
    Solution sol;
    vector<int> arr = {7, 4, 1, 5, 3};
    sol.mergeSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}