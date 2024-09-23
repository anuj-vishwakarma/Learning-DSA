#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void explainSet(){
    /*
        Stores only unique element in ascending order only
    */

   set<int> s;

   s.insert(4);
   s.insert(9);
   s.insert(0);
   s.insert(2);
   s.insert(5);
   s.insert(6);

    auto i = s.find(0); // return iterator to element if found, else returns the last iterator, that's why we're checking below, if i(iterator) doesn't equals end then only print the element
    if(i != s.end())
        cout << *i;

    cout << "\n";

   for(auto it : s){
    cout << it << " ";
   }

    cout << endl;
//    s.count() returns 1 if there is any element (>=1) and returns 0 if there ain't no element

// Erase 

s.erase(12); // deletes 12 from set 

for(auto i : s){
    cout << i << " ";
}

cout << endl;
auto it1 = s.begin();
it1++; // now it1 points to the second element
auto it2 = s.end();
it2--; // now it2 points to the last element, remember it is not inclusive

// deletes element from second element to the last element
// s.erase(it1, it2);
for(auto i : s){
    cout << i << " ";
}
cout << "\nUpper and lower bound " << endl;

// upper_bound returns an iterator that points to an element that is 
// >=  to the given number

auto it = s.lower_bound(15);

// since 15 is biffer than the maximum element of set so, lower_bound() will return the iterator to last of the set, i.e., iterator which points at the end. and we can't print it's value because it ain't a valid memory location so, we can verify it like this : 
if(it == s.end()){
    cout << "end";
}
// cout << *it;

}
int main (){
    explainSet();
    return 0;
}   