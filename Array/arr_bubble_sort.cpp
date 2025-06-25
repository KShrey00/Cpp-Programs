#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n);

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for (int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}
void bubble_sort(int arr[],int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            if (arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
}

