#include<iostream>
using namespace std;
class Solution {
public:
    bool isomorphicString(string s, string t) {
    	//your code goes here
        if(t.length() != s.length()){
            return false;
        }
        char map_s[256] = {0}, map_t[256] = {0};
        int n = s.length(); 
        for(int i=0; i<n; ++i){
            // checking if mapping elements 
            if(map_s[s[i]] != map_t[t[i]]) return false;
            // both characters are not mapped yet, map them
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
            
        }
        return true;
    }
};
int main(){
    
    return 0;
}