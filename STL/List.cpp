#include<iostream>
using namespace std;
int main(){
    /* Brute-force */
  int n ;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
    
  }

  int maxi = INT32_MIN;

  for(int i=0; i<n; i++){
    int count = 0; 
    for(int j=0; j<n; j++){
      if(arr[j] == arr[i])
          count++;
    }
    maxi = max(count, maxi);
  }

  cout << maxi << endl;
  return 0;
}