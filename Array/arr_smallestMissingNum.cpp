//smallest positive missing number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    const int N= 1e6+2;
    bool sarr[N];
    for (int i=0; i<N; i++)
    {
        sarr[i]=false;
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]>=0)
        {
            sarr[arr[i]]=true;
        }
    }
    int ans=-1;
    for (int i=0; i<N; i++)
    {
        if (sarr[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}