#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter number:";
    cin>>a;
    cout<<"\nEnter number:";
    cin>>b;
    cout<<"\nEnter number:";
    cin>>c;

    if (a>b){
        if (a>c)
            cout<<"Greatest: "<<a<<endl;
        else
            cout<<"Greatest: "<<c<<endl;
    }
    else{
        if(b>c)
            cout<<"Greatest: "<<b<<endl;
        else
            cout<<"Greatest: "<<c<<endl;
    }
    return 0;

}