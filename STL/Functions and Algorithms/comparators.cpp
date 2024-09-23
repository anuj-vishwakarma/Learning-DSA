#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Here we've changed the implementation of comparator and made our own comparator, 
// what generally happens is if el1 > el2 then return false otherwise true, so in that case 
// the sorting will occur in ascending order but in this case 
// what we've done is the opposite so that we can sort the elements of the array in 
// descending order 
// bool internalComparator(int el1, int el2){
//     if(el1 < el2)
//         return false;
//     return true;
// }

// Implementing a complex comparator 

bool internalComparatorMyCode(pair<int, int> el1, pair<int, int> el2){
    if(el1.second > el2.second) return true; 
    if(el1.second == el2.second)
        if(el1.first < el2.first) return true;
    return false;
}
bool internalComparatorStriversCode(pair<int, int> el1, pair<int, int> el2){
    // 1. Check if second el of pair is greater, 
    
    // 1. a) if yes return true
    if(el1.second > el2.second) return true;

    // 1. b) if no then return false
    if(el1.second < el2.second) return false;

    // now upto this point this is clear that second value of each pair is same

    // Now if first of el1 is smaller then return true
    if(el1.first < el2.first) return true;
    
    return false;
}
void explainComparator(){
    pair<int, int> arr [] = {{1,6}, {1,5}, {2,6}, {2,9}, {3,9}};
// Now, how we wanna sort this arry of pairs is, we want to sort in descending order of 
// second value of each pair

// in case if the second value is equal then sort in ascending order according to first value.
    sort(arr, arr + 5, internalComparatorMyCode);

    for(auto it : arr){
        cout << "{" << it.first << "," << it.second << "}  ";
    }
} 
int main(){
    explainComparator();
}