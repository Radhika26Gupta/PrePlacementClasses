#include<iostream>
using namespace std;
int main()
{
    int n;
    int x;
    int var1 = 1;
    int var2 = 65;
    cout<<"Enter any number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int x=n;x>i;x--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            // cout<<i<<" ";
            if(i%2!=0)
            {
                cout<<var1<<" ";
                var1++;
            }
            else{
                cout<<char(var2)<<" ";
                var2++;
            }
        }
        cout<<"\n";
    }
} 
