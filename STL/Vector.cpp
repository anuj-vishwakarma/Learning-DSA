#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void explainVector(){
    // vector<int> vec;
    // vec.push_back(3);
    // vec.push_back(2);
    // vec.emplace_back(9);

    // Accessing elements : 
    // method 1 : cout << vec[index]; 
    // method 2 : cout << vec.at(index);

    // /*
    // for(int i=0; i<vec.size(); i++){
    //     cout << vec[i] << " " ;
    // }
    // */


    // cout << endl;
    // // pointer to first element 
    // vector<int>::iterator beginItr = vec.begin(); 
    // // pointer to the next to last element
    // vector<int>::iterator endItr = vec.end();

    // // vector<int>::iterator instead of this we can use 
    // // auto 

    // //  so vector<int>::iterator  = auto 

    // // output : 3 0(since there ain't any element, so zeros is printed)
    // // cout << *beginItr << " " << *endItr << endl;

    // /*
    // for(vector<int>::iterator i=beginItr; i<endItr; i++){
    //     cout << *i << " ";
    // }
    // */
    // cout << endl; 

    // auto begin = vec.begin();
    // auto end = vec.end();


    // // Now, instead of all these we can simply use for-each loop

    // for(auto i : vec)
    //     cout << i << " ";

    // cout << "\n";
    // // Reverse Iterator 

    // // pointer to location befor first element
    // auto reverseBegin = vec.rbegin(); 
    // // pointer to the location of last element
    // auto reverseEnd = vec.rend();

    // for(auto i = reverseBegin; i<reverseEnd; i++){
    //     cout << *i << " ";
    // }
    /*
    vector<int> vector1(5); // creates vector of size 5 and initializes with 0, 
    vector<int> vector2(5, 10); // creates vector of size 5 and initializes with 10

    // cretes a vector and initializes by two elements, 7 and 8
    vector<int> vec = {7, 8};

    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    // created a copy of vec and stored in dupVec
    vector<int> dupVec(vec);

    // created a copy of vec having elements from second element to last element, i.e. we can define range 
    vector<int> dupVec1(vec.begin() + 1, vec.end());

    cout << "Duplicate vector with some range specified" << endl;
    for(auto i : dupVec1){
        cout << i << " ";
    }
    */


    // Erase : to delete element from the vector
/*
    vector<int> vec = {7, 8, 1, 2, 0};

    for(auto it : vec){
        cout << it << " ";
    }
    cout << endl;
    // vec.erase(1); // can't do it like this 
    // vec.erase(vec.begin()); deletes the first element
    // vec.erase(vec.begin(), vec.end() - 3); // deletes element in range

    // vec.erase( vec.end());

    // vec.erase(vec.begin(), vec.end()-1); // when deleting in range, the second parameter is not inclusive, 
    // it will delete from first to element before last, rather vec.begin(), vec.end() will delete all the elements
    for(auto i : vec){
        cout << i << " ";
    }

    cout << "\n";

    vec.clear();
    cout << vec.size() << endl;

    */
    /*

    here you can se we'er deleting each element from vector and once all deleted the size of vector 
    will become zero, thus even the hi in the for loop will not get printed below
    vec.erase(vec.begin(), vec.end());
    for(auto it : vec){
        cout << it << " ";
        cout << "hi";
   }
   */

   // after each deletion of element size of the vector is also updated i.e. it will become zero if you delete all the elements from it 

//    vec.clear(); // deletes all the element at once. 

//    swap
/*
    vector <int> vec1 = {3, 1};
    vector <int> vec2 = {1, 8 ,2};
    swap(vec1, vec2); 

    // now if you'll print the vec1, the elements of vec2 will be printed, because they've been swapped. 


    // Insert 

    // vector <int> vec = {7, 8, 1, 2, 0};

    // // vec.insert(index, 45); // index is not given as parameter rather pointer is given so we can write it like 

    // // vec.insert(vec.begin(), 9); // will be inserted at index 0
    // vec.insert(vec.begin() + 2, 10);

    // for(auto it:vec)
    //     cout << it << " ";

*/
    
}
void explainList(){

    // For vector, internal implementation is done using arrays, while in case of list and deque, it is implemented using a linkedList

    // List is almost same as vector in working but the only difference is in the method it has which allows us to push the elements at front
    list<int> ls = {3, 1};
    ls.push_front(5);
    // or  ls.emplace_front(5);

    for(auto it : ls)
        cout << it << " ";
}
int main (){
    explainList();
    return 0;
}

/*
Containers 
Algorithms 
Functions 
Iterators


1. Pair (utility library)
2. vectors 

*/