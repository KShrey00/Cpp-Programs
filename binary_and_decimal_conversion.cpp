#include<iostream>
using namespace std;

int DeciToBinary(int n);  //conversion from decimal to binary
int BinToDeci(int n);  //from binary to decimal

int main(){
    // cout<<DeciToBinary(5)<<endl;
    cout<<BinToDeci(111)<<endl;
    return 0;
}
int DeciToBinary(int n){
    int bin=0, i=1;
    while (n>0){
        int rem=n%2;
        n/=2;
        bin=bin+rem*i;
        i*=10;
    }
    return bin;
}
int BinToDeci(int n){
    int dec=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        dec=dec + rem*pow;
        n/=10;
        pow*=2;
    }
    return dec;
}
