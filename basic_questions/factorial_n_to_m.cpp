#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0||n==1)return 1;		
	int f = 1;
	for(int i=n;i>=1;i--)
	{
		f = f*i;
	}
	return f;
}
int main()
{
	int num1,num2;
	cout<<"Enter first number : ";
	cin>>num1;
    cout<<"Enter second number : ";
	cin>>num2;
    for(int i=num1;i<=num2;i++)
    {
        cout<<"factorial of "<<i<<" is : "<<fact(i)<<endl;
    }
	
}
