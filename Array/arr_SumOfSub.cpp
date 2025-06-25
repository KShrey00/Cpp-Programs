#include<iostream>
#include<climits>
using namespace std;
//circular subarray
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    int ka[n];
    int arsum=0;
    for (int i=0; i<n; i++)//sum of array and negative array
    {
        arsum+=arr[i];
        ka[i]=-arr[i];
    }
    int sum=0, ans=INT_MIN;//kadane's algo
    for (int i=0; i<n; i++)
    {
        sum+=ka[i];
        if (ka[i]<0)
            sum=0;
        ans=max(ans,sum);
    }
    int curr=0;//logic : sum of all elements of array - sum of non contributing elements
    curr=arsum-(-ans);
    cout<<curr;

    return 0;
}