#include<math.h>
#include<iostream>
using namespace std;
int no_of_digit(long int n)
{
    int count = 0;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    cout<<count<<"\n";
    return count;
}
int armstrong(long int n,int len)
{
    int num = n;
    int sum = 0;
    int rem;
    // int c = no_of_digit(num);
    while(num!=0)
    {
         rem = num%10;
        sum = sum + pow(rem,len);
        num/=10;
    }
    cout<<sum<<"\n";
    if(sum==n)return 1;
    else return 0;
}
int main()
{
    long int a;
    cout<<"Enter a number : ";
    cin>>a;
    int l = no_of_digit(a);
    if(armstrong(a,l))cout<<"Armstrong number";
    else cout<<"Not an armstrong number";
}

