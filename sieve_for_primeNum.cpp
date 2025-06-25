#include<iostream>
using namespace std;
//sieve of eratosthenes
//to find prime num till a num

void sieve(int n);

int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
void sieve(int n)
{
    int prime[n+1];
    for (int i=0; i<=n; i++)
        prime[i]=0;
    for (int i=2;i<=n; i++)
    {
        if (prime[i]==0)
        {
            for ( int j=i*i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for (int i=2; i<=n; i++)
    {
        if (prime[i] == 0)
            cout<<i<<" ";
    }
}
