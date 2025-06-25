#include<iostream>

using namespace std;

int main(){

    int n;
    bool s=1;
    cout << "Enter number:";
    cin>>n;
    for (int i=1; i<=n; i++){

        if (i%2==0)
            s=0;
        else 
            s=1;
        for (int j=1; j<=i; j++){
            cout<<s<<" ";
            s=!s;
        }
        cout<<endl;

    }

    return 0;

}