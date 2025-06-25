#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"Enter number:";
    cin>>n;
    for (int i=1; i<=n; i++){
        int c=n-i;
        for (int j=n; j>=1; j--){
           if (c>0){
                cout<<"  ";
                c--;
           }
           else
                cout<<j<<" ";
        }
      
        for (int k=2; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}