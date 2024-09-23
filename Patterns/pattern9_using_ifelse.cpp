#include<iostream>
using namespace std;
void pattern9(int n);
void pattern10(int n);
int main(){
    pattern10(4);
}

    void pattern9(int n) {
        cout << "----------" << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j<n-i-1){
                    cout << " ";
                }else 
                    cout << "*";
            }
            for(int j=0; j<i; j++)
                cout << "*";
            
            
            cout << "\n";
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j >= i){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
            for(int j=0; j<n-i-1; j++){
                cout << "*";
            }
            cout << "\n";
        }
        cout << "----------" << endl;
    }


void pattern10(int n){
    for(int i=0; i<=2*n - 1; i++){
        if(i == n)
            break;
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int i=0; i<n-1; i++){
        for(int j=n-1-i; j>0; j--){
            cout << "*";
        }
        cout << "\n";
    }

}


