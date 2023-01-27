#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a<b)
	  return b;
	return a;
}
float max(float a,float b)
{
	if(a<b)
	  return b;
	return a;
}
int main()
{
	cout<<max(15,49)<<endl;
	cout<<max(14.3,9.4)<<endl;
	return 0;
}
