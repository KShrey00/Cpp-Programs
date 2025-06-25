#include<iostream>

using namespace std;
int main(){

    int num;
    cout << "enter number:";
    cin>>num;
    int n=num;
    int snum=0;
    while (num>0){
        int l=num%10;
        snum=snum+l*l*l;
        num=num/10;
    }
    if (n==snum)
        cout<<"Armstrong number"<<endl;
    else
        cout<<"Not an armstrong number"<<endl;
    return 0;
}