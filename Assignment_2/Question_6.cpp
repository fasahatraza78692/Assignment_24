#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers"<<endl;
	cin>>a>>b;
	cout<<"Before swapping..."<<endl;
	cout<<"A = "<<a<<" B = "<<b<<endl;
	swap(&a,&b);
    cout<<"After swapping..."<<endl;
	cout<<"A = "<<a<<" B = "<<b<<endl;
	return 0;
}
