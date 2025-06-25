#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n; i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    for (int j=0; j<n; j++){
        mx=max(mx,arr[j]);
    }
    cout<<"Maximum element:"<<mx;
}