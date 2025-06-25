#include<iostream>

using namespace std;
int main(){

    int num;
    cout << "enter number:";
    cin>>num;
    int rnum=0;
    while (num>0){
        int l=num%10;
        rnum=rnum*10+l;
        num=num/10;
    }
    cout<<"Rverse number: "<<rnum<<endl;

    return 0;
}