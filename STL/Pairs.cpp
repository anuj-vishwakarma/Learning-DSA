#include<iostream>
using namespace std;
void explainPair(){
    // can you store two numbers into a single variable ?
    pair<int, int> pr1 = {2, 8};
    pair<int, char> pr2 = make_pair(3, 'b');
    pair<pair<int, char>, int> pr3 = {{1, 'a'}, 3};

    cout << pr1.first << " " << pr1.second << endl;
    cout << pr2.first << " " << pr2.second << endl;
    cout << pr3.first.second << " " << pr3.second << endl;
}
int ret(){
    int a = 10;
    printf("%d", a = 200);
    printf("\n");
    return (a=10);
}
int main (){
    printf("%d", ret());
    printf("\n%d", 0 && 1);
    return 0;
}