#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n);

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertion_sort(int arr[], int n){
    for (int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

