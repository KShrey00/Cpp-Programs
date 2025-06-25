#include<iostream>
using namespace std;
//Euclid algo to find GCD

int gcd(int a, int b);

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
int gcd(int a, int b)
{
    int sub1=a,sub2=b;
    int rem=-1;
    while (rem!=0)
    {
        rem=sub1%sub2;
        sub1=sub2;
        sub2=rem;
    }
    return sub1;
}
