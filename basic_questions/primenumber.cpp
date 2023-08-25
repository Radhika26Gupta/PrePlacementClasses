#include<iostream>
using namespace std;
bool primeno(int n)
{
    bool flag = true;
    if(n==1||n==0)flag = false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag = false;
        }
    }
    return flag;
}
int main()
{
    int n,m;
    cout<<"Enter the lower limit ";
    cin>>n;
    cout<<"Enter the upper limit ";
    cin>>m;
    for(int i=n;i<=m;i++)
    {
        if(primeno(i))cout<<i<<" ";
    }   
}