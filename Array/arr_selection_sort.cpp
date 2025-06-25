#include<iostream>
using namespace std;

void selection_sort(int arr[],int n);

int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
void selection_sort(int arr[],int n){
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            if (arr[j]<arr[i]){
                int a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }
}


