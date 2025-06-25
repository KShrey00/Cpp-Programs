#include<bits/stdc++.h>
using namespace std;
//largest word in a sentence

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);//input a line
    cin.ignore();//to remove buffer

    int maxlen=0, currlen=0;
    int st=0,ans=0,i=0;
    while (1)
    {
        if (arr[i]==' ' || arr[i]=='\0')
        {
            if (maxlen < currlen)
            {
                maxlen=max(maxlen, currlen);
                ans=st;
            }
            currlen=-1;
            st=i+1;
        }
        currlen++;
        if (arr[i] == '\0')
            break;
        i++;
    }

   for (int i=0; i<maxlen; i++)
   {
        cout<<arr[i+ans];
   }


}