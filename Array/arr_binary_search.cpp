#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key);

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key:";
    cin>>key;
    cout<<binary_search(arr,n,key);
}

int binary_search(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if (mid==key)
            return mid;
        else if (mid < key)
            s=++mid;
        else
            e=mid-1;
    }
    return -1;
}
