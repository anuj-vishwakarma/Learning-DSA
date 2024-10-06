#include<iostream>
using namespace std;
class Solution{	
	public:
		bool anagramStrings(string& s,string t){
            if(s.length() != t.length())
                return false;

            int n = s.length();

            int freq_s[256] = {0};
            int freq_t[256] = {0};

            for(int i=0; i<n; i++){
                freq_s[s[i]]++;
                freq_t[t[i]]++;
            }

            for(int i=0; i<256; i++){
                if(freq_s[i] != freq_t[i])
                    return false;
            }
            return true;
		}
};
int main()
{   
    Solution sol;
    string s = "anagram", t = "aangrma";
    cout << sol.anagramStrings(s, t);
    return 0;
}