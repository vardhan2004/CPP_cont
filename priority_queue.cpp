#include<bits/stdc++.h>
using namespace std;
// priority queue --> It maintains a Heap Data structure
// it as an adaptive containers these provides different interface for sequential containers
// it Gives to the first priority to Greatest element
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    priority_queue<int> pq;
    int n = sizeof(arr)/sizeof(int);
    // max heap
    cout << "MAX HEAP "<< endl;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }
    while(pq.empty() != 1){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    //min Heap
    cout << "MIN HEAP " << endl;
    for(int i = 0; i < n; i++){
        pq.push(-1*arr[i]);
    }
    while(pq.empty() != 1){
        cout << -1*pq.top() << " ";
        pq.pop();
    }
}