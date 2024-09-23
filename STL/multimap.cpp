#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main (){
    multimap<int, char> mpp;

    mpp.insert({3, 'a'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    
   return 0;
}