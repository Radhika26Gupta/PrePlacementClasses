#include<iostream>
using namespace std;
int main()
{
    int no_of_rows;
    int no_of_cols;
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || i+j == n+1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}