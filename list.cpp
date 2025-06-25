#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};

    l.push_back(6);
    l.push_front(7);
    l.emplace_back(8);
    l.emplace_front(9);

    for (int val : l){
        cout<<val<<" ";
    }
    return 0;

    // size, erase, clear, begin, end, rbegin, rend, insert, front, back
    
}