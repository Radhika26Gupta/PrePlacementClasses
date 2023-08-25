#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0||n==1)return n;
    else return fibo(n-1)+fibo(n-2);
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"0"<<" "<<"1"<<" ";
    for(int i=2;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
    
}