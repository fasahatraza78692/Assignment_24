#include<iostream>
using namespace std;
int Fib(int N)
{
	int x=-1,y=1,z,n,flag=0;
	cout<<"Enter in how many terms of Fibonnaci series you want to find the number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		z=x+y;
		if(z==N)
		  {
		  	flag=1;
		  	break;
		  }
		x=y;
		y=z;   
	}
	if(flag==1)
	  return 1;
	else
	  return 0;
}
int main()
{
	int a;
	cout<<"Enter a number to check wethear it is Fibonacci or not"<<endl;
	cin>>a;
	if(Fib(a))
	  cout<<"Number is Fibonacci";
	else
	  cout<<"Number is not Fibonacci";
	return 0;
}
