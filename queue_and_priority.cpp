#include<iostream>
#include<queue>
using namespace std;

int  main(){
    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);


    while (!q.empty()){
        cout<< q.top() <<" ";
        q.pop();
    }
    cout<<endl;

    priority_queue<int> qq;

    qq.push(6);
    qq.push(2);
    qq.push(4);
    qq.push(3);

    while (!qq.empty()){
        cout<<qq.top()<<" ";
        qq.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int>, greater<int>> qqq;

    qqq.push(6);
    qqq.push(3);
    qqq.push(9);
    qqq.push(8);

    while (!qqq.empty()){
        cout<<qqq.top()<<" ";
        qqq.pop();
    }
    cout<<endl;

    return 0;
}