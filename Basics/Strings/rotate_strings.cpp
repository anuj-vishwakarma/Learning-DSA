#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution{
    public:
        bool rotateStringByActualShift(string &str, string &goal){
            if(str == goal){
                return "true";
            }
            if(str.length() != goal.length()){
                return false;
            }
            int n = str.length();
            // right shifting using loop from n-1 to 1
            for(int j=0; j<n; j++){
                char temp = str[n-1];
                for (int i = n-1; i > 0; i--)
                {
                    str[i] = str[i-1];
                }
                str[0] = temp;
                // cout << str << endl;
                if(str == goal){
                    return true;
                }
            }
            
            return false;
        }

        bool rotateStringByAcuumulatingString(string &str, string &goal){
            int n = str.length();
            string left = "";
            for (int i = 0; i < n; i++)
            {
                string right = str.substr(i);

                if(right + left == goal)
                    return true;
                
                left += str[i];
            }
            return false;
        }

        bool rotateStringOptimal(string &str, string &goal){
            if(str.length() != goal.length()) return false;
            
            string double_str = str + str;
            return double_str.find(goal) != string::npos;
        }
};
int main(){
    // rotate strings to match goal
    // char temp ;
    // temp = str[0];
    // str[0] = str[3];
    // str[3] = temp;
    // cout << str;string str = "anuj";

    Solution sol ;
    string str = "anuj";
    string goal = "janu";
    cout << sol.rotateStringOptimal(str, goal);
    
    return 0;
}