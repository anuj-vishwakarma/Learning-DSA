#include<iostream>
using namespace std;
class Solution{	
    bool isPalindrome;
	public:		
		bool palindromeCheck(string& s){
            int i=0, j=s.length()-1;
            helper(s, i, j);
            return isPalindrome;
        }
        void helper(string& s, int i, int j){
            if(i>=j){
                return;
            }
            if(s[i] == s[j])
                isPalindrome = true;
            else 
                isPalindrome = false;
            helper(s, i+1, j-1);
        }
};

int main()
{
    string s = "hannah";
    // cout << palindromeCheck(s);
    Solution obj;
    cout << obj.palindromeCheck(s);
    return 0;
}