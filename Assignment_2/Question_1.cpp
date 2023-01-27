#include<iostream>
using namespace std;
int isPrime(int x)
{
	for(int i=2;i<=x/2;i++)
	 {
	 	if(x%i==0)
	 	 	return 0;
	 }
	return 1;
}
int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	if(isPrime(a))
	   cout<<"Prime"<<endl;
	else
	   cout<<"Not Prime"<<endl;
	  
	return 0;
}
