#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n+1]=-1;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0 , rbd=0;
    if(n==1){
        cout<<1;
        return 0;
    }
    for (int i=1; i<n; i++){
        if ( arr[i]>rbd && arr[i]>arr[i+1] ){
            sum++;
        }
        rbd=max(rbd,arr[i]);
    }
    cout<<sum;
    return 0;
}