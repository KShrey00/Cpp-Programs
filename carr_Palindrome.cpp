#include<bits/stdc++.h>
using namespace std;
//palindrome

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;
    for (int i=0; i<n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check=false;
            break;
        }
    }
    if (check==true)
        cout<<"A Palindrome";
    else
        cout<<"Not a Palindrome";

}