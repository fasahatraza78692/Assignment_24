#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
double add(double a, double b)
{
	return a+b;
}
double add(double a, int b)
{
	return a+b;
}
double add(int a, double b)
{
	return a+b;
}
int main()
{
	cout<<add(8,2)<<endl;
	cout<<add(81.3,2.9)<<endl;
	cout<<add(13.5,2)<<endl;
	cout<<add(4,12.56)<<endl;
	return 0;
}
