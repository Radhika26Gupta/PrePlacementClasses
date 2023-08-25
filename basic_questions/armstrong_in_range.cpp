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
    // cout<<count<<"\n";
    return count;
}
bool armstrong(long int n)
{
    int num = n;
    int sum = 0;
    int c = no_of_digit(num);
    bool flag =  false;
    while(num!=0)
    {
        int rem = num%10;
        sum = sum + pow(rem,c);
        num/=10;
    }
    // cout<<sum<<"\n";
    if(sum==n)
    {
        flag = true;
    }
    return flag; 
}
int main()
{
    long int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    for(int i=num1;i<=num2;i++)
    {
        if(armstrong(i))cout<<i<<" ";
    }
}

