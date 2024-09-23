#include<iostream>
using namespace std;
    void pattern20(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << "*";
            }
            
            for(int j=2*n - i*2 - 2; j>0; j--){
                cout << "-";
            }

            for(int j=0; j<=i; j++){
                cout << '*';
            }
            cout << "\n";
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout << "*";
            }
            
            for(int j=n-i-1; j<n-i-1; j++){
                cout << "-";
            }

            cout << endl;
        }
    }
void pattern18(int n) {
        for(int i=0; i<n; i++){
            char c = 65 + n - 1;
            for(int j=c-i-1; j>=c; j--){
                cout << j;
            }
            cout << "\n";
        }
    }
void pattern17(int n){

        for(int i=0; i<n; i++){
            char c = 65;
            for(int j=0; j<n; j++){
                if(j < n-i-1){
                    cout << " ";
                }else{
                    cout << c;
                    c++;
                }
            }
            c--;
            for(int j=0; j<i; j++){
                c--;
                cout << c;
            }
            cout << "\n";
        }
     }

int main(void){
     pattern20(4);
}
