#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        int ind = -1, n=s.length();
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] - '0' % 2 != 0)
                ind = i;
                break;
        }
        string ans;

        if(ind == -1)
            return "";
        
        int i = 0;
        while(i<n){
            if(s[i] != '0'){
                break;
            }
            i++;
        }
        return s.substr(i, ind-i);
    }
};
int main(){
    string s = "02";
    int x = s[0] - 48;
    int y = s[1] - 48;
    int a = 2, b=2, c=0, d=2, e;
    e = a++ && b++ && c++ || d++;
    printf("%d", e);
    return 0; 
}