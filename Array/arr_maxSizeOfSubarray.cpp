#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pd= arr[0]- arr[1];
    int ans=2, curr=2;
    for (int i=1; i<n; i++){
        int a=arr[i-1] - arr[i];
        if ( pd == a)
            curr++;
        else
            curr=2;
        ans= max(curr,ans);
    }
    cout<<ans;
    return 0;
}

