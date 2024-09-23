#include<iostream> 
using namespace std;
bool doesExists(char ch, int index, vector<string>& str){
    for(int i=1; i<str.length; i++){
        string word = str[i];
        for(int j=0; j<word.length(); j++){
            if(word[j] == ch && index == j){
                return true;
            }
        }
    }
}
string longestCommonPrefix(vector<string>& str){
    vector<char> chars;

    for(int i=0; i<str.length(); i++){
        string word = str[i];
        for(int j=0; j<word.length(); j++){
            if(doesExists(word[j], j, str)){
                chars.push_back(word[j]);
            }
        }
    }

    string ans = "";
    for(auto i : chars){
        ans += i;
    }
    return ans;


}
int main(){
    int n;
    vector<string> str;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> words[i];
    }
    return 0;
}