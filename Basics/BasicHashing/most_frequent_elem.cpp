#include<iostream>
using namespace std;
int main(){
    /* Brute-force 
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

  TC: O(N^2), SC: O(max_eleme
*/

  int n ;
  cin >> n;
  int arr[n];
  int maxi = INT32_MIN;
  
  for(int i=0; i<n; i++){
    cin >> arr[i];
    maxi = max(arr[i], maxi);
  }

  int hash[maxi+1];

  for(int i=0; i<n; i++){
    hash[arr[i]]++;
  }

  int elem;
  cin >> elem;
  
  cout << hash[elem];
  
  return 0;
}
