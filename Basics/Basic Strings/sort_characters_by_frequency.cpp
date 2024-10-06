#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool comparator(pair<int, char> el1, pair<int, char> el2){
    
    if(el1.first > el2.first) return true;
    if(el1.first < el2.first) return false;
    if(el1.first < el2.first) return true;
    
    return false;
}
class Solution{	
	public:
		vector<char> frequencySort(string& s){
			pair<int, char> freq[26];


            // storing (a,0), (b,0), (c,0) in pairs initially
            for (int i = 0; i < 26; i++)
            {
               freq[i] = {0, 'a' + i};
            }
            
            // counting frequency 
            for(int i=0; i<s.length(); i++){
                freq[s[i] - 'a'].first++;
            }

            sort(freq, freq+26, comparator);

            vector<char> ans;
            
            for(int i = 0; i < 26; i++) {
                if(freq[i].first > 0) ans.push_back(freq[i].second);
            }

            return ans;            
		}
};
int main()
{   

    return 0;
}