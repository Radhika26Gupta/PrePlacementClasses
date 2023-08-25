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
    for(int i=0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
    
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=14;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n-2;i++)
//     {
//         int c = a+b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
// }