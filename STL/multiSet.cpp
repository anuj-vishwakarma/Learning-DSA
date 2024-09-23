#include<iostream>
#include<set>
using namespace std;
int main (){
    multiset<int> ms ;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(0);
    ms.insert(0);
    ms.insert(2);

    ms.erase(ms.find(0)); // deletes the first 0
    ms.erase(1); // deletes all 1s
    
    for(auto it : ms){
        cout << it << " ";
    }
    return 0;
}