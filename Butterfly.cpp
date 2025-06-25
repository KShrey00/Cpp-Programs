#include<iostream>

using namespace std;

int main(){

    int p,n=1,k=1;
    cout << "Enter number:";
    cin>>p;
    for (int q=1;q<=p;q++)
        n*=2;
    for (int i=1; ;){

        for (int j=1; j<=n/2; j++){
            if (j<=i )
                cout<<"* ";
            else
                cout<<"  ";
        }

        for (int l=1; l<=n/2; l++){
            if (l<=(n/2-i))
                cout<<"  ";
            else
                cout<<"* ";
        }
        cout<<"\n";

        if (k==n+1)
            break;
        else if (k<n/2)
            i++;
        else if (k>n/2)
            i--;
        k++;
        //cout<<"\n"<<i<<n<<"\n";
    }

    return 0;
}