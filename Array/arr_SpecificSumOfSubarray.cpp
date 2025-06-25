#include<iostream>
using namespace std;

//O(n*n)
void sumOfArray(int arr[],int n,int s);
//optimized
//O(n)
void OP(int arr[], int n, int s);

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s;
    cin>>s;
    //sumOfArray(arr, n, s);
    OP(arr, n, s);
    return 0;
}

void sumOfArray(int arr[],int n,int s)
{
    int sum=0;
    for (int i=0; i<n; i++ )
    {
        for (int j=i; j<n ; j++)
        {
            sum+=arr[j];
            if (sum==s)
            {
                cout<<i<<","<<j<<endl;
                return;
            }
        }
        sum=0;
    }
}

void OP(int arr[], int n, int s)
{
    int en=-1,st=-1,sum=0,i=0,j=0;
    while(j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if (sum==s)
    {
        cout<<i+1<<" "<<j;
        return;
    }
    while(j<n)
    {
        sum+=arr[j];
        while (sum>s)
        {
            sum-=arr[i];
            i++;
        }
        
        if (sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return;
}

