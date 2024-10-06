#include<iostream>
#include<cmath>
using namespace std;
class Solution{	
    int i = 2;
	public:
		bool checkPrime(int num){
			if(num <= 1) return false;
            if(i > sqrt(num))
                return true;
            return helper(num, i);
        }
        bool helper(int num, int i){
            if(i > sqrt(num))
                return true;
            if(num % i == 0) return false ;
            helper(num, i+1);
        }
};

int main()
{
    Solution sol;
    cout << sol.checkPrime(5);
    return 0;
}