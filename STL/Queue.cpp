#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void explainQueue(){
    /*
        Similar to stack, but with FIFO. 
        just like line to get ticket, the one who first comes in queue will get ticket first
    */
    queue<int> q ; 
    q.push(3);
    q.push(2);
    q.push(9);
    q.push(8);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

void explainPriorityQueue(){
    // stores the highest element at top, implemented using heap, and maintains the order
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> p; 
    // this becomes minimum heap, i.e. it will store minimum element at top 

    pq.push(5);
    pq.push(2);
    pq.push(10);

    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
     
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

}
int main (){
    explainPriorityQueue();
    return 0;
}   