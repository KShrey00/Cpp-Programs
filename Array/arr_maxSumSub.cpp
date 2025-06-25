#include<iostream>
#include<climits>
using namespace std;
//kadane algo 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
        if (arr[i]<0)
            sum=0;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}