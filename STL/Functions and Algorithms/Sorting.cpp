#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sorting(){
    int arr[5] = {6, 2, 1, 7, 0};
    // sort(arr, arr+5);
    
    // sorting in range 
    sort(arr+1, arr+4);

    for(auto it : arr){
        cout << it << " ";
    }

    cout << endl;

    vector<int> vec = {5, 7, 1, 0, 1};
    sort(vec.begin(), vec.end());

    for(auto it : vec){
        cout << it << " ";
    }
}

void explainAccumulate (){
    int arr[5] = {6, 2, 1, 7, 0};

    cout << accumulate(arr, arr+5, 0);
    cout << endl;
    cout << accumulate(arr, arr+5, 6);
    cout << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << accumulate(vec.begin(), vec.end(), 0);

}

void explainCount () {
    int arr[] = {6,1, 2, 1, 7, 0};
    int num = 1;
    cout << count (arr, arr+5, num); // Tells how many time an elements is present 
}

void explainFind(){
    int arr[] = {6,1, 2, 1, 7, 0};
    auto it = find(arr, arr+5, 1);
    cout << *it;
    cout << endl;
    auto i = find(arr, arr+5, 19);
    if(i == (arr+5))
        cout << "not found ";

}

void explainNextPermutation(){
    // works on array, vector, strings etc. 
    string str = "cba ";

    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));
}
int main (){
    explainNextPermutation();
    return 0;
}