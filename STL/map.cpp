#include<iostream>
#include<map>
using namespace std;
int main (){
    map<int, string> mpp;
    
    mpp[1] = "abc";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp[4] = "raj";
    mpp.insert({4, "Aj"});

    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl; 
    }

    cout << "Finding elements " << endl;
    auto it = mpp.find(3); 
    string s;
    cout << (*it).first << " -> " << (*it).second << endl;
    return 0;
}