#include<iostream>
using namespace std;
#include<vector>

class Solution{	
	vector<char> ans;
    int  i =0;

    public:		
	    vector<char> reverseString(vector<char>& s){
            helper(s, i);
            return ans;                           
	}
	void helper(vector<char> &s, int i){
		if(i >= s.size() - 1){
            return ;
        }
        helper(s, i+1);
        ans.push_back(s[i]);
	}
};
int main()
{   
    return 0;
}
