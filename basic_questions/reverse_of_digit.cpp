#include<iostream>
using namespace std;
int reverse(int num)
{
    int rev = 0;
    int rem;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<"\n"<<reverse(n);
}