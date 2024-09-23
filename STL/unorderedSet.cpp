#include<iostream>
#include<unordered_set>
using namespace std;
int main (){
    unordered_set<int> us ;

    // Almost similar to the set, but it has better time complexity because it stores element without any order
    // if we do 
    auto it = us.find(3); // ~O(1) TC (avg case),  In rare cases e.g. when dataset is large and elements are colliding then in that case TC: O(N)  (worst case)

    return 0;
}