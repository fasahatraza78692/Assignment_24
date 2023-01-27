#include<iostream>
using namespace std;
int Heighest(int x)
{
	int h=0,a;
    while(x)
   	 {
   	 	a=x%10;
   	 	if(a>h)
   	 	   h=a;
   	 	x/=10;
	 }
  return h;
}
int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"Heighest value digit = "<<Heighest(a);
	return 0;
}
