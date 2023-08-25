// make sure to revise again

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2==0)cout<<char(64+i);
            else cout<<char(96+i);   
        }
        cout<<"\n";
    }
} 
