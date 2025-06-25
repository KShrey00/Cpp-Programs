#include<iostream>
using namespace std;
//using inclusion-exclusion principle 
//find count of numbers divisible by two nubers

int divisible(int a,int b, int c);

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}
int divisible(int a,int b, int c)
{
    int c1=a/b;
    int c2=a/c;
    int c3=a/(b*c);
    return c1+c2-c3;
}
