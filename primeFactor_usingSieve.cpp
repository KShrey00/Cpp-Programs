#include<iostream>
using namespace std;
//prime factorization of a number

void primeFactor(int n);

int main()
{
    int n;
    cin>>n;
    primeFactor(n);

    return 0;
}
void primeFactor(int n)
{
    int spf[100]={0};
    for (int i=2; i<=n; i++)
    {
        spf[i]=i;
    }
    for (int i=2; i<=n; i++)
    {
        if (spf[i]==i)
        {
            for (int j=i*i; j<=n; j+=i)
            {
                if (spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
