#include<iostream>
#include<vector>
using namespace std;
/*

    Selection sort is simply: Select minimum from array and swap with the current element

*/
int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();
    int idx = -1;
    int mini  = arr[0];
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         if(arr[j] < mini){
    //             mini = arr[j];
    //             idx = j;
    //         }
    //     }
    //     swap(arr[i], arr[idx]);
    //     mini = INT32_MAX;
    // }

    // Better way 
    for(int i=0; i<arr.size(); i++){
            int mini = i; 
            for(int j=i; j<arr.size(); j++){
                if(arr[j] < arr[mini])
                    mini = j;
            }
            swap(arr[i], arr[mini]);
        }
    signed char x = 129;
    cout << x;
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}