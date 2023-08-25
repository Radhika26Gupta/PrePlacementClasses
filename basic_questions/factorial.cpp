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
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	int ans = fact(num);
	cout<<"The factorial of number is  : "<<ans;
}
