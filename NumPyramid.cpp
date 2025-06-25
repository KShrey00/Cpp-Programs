#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter number:";
    cin>>n;
    for (int i = 1; i<=n; i++){
        int c=n-i;
        for (int j=1; j<=n; j++){
            if (c>0){
                cout<<" ";
                c--;
            }
                
            else
                cout<<j-(n-i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}