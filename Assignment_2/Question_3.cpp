#include<iostream>
using namespace std;
int power(int a,int b)
{
	int static x=1;
	if((a==0&&b==0)||(a==0&&b!=0))
	   return 0;
	else if(b==0)
	   return 1;
         else
	      {
	      	while(b)
	          {
	          	x=x*a;
	          	b--;
			  }
	      }
	 return x;
}
int main()
{
	int x,y;
	cout<<"Enter a number"<<endl;
	cin>>x;
	cout<<"Enter it's power"<<endl;
	cin>>y;
	cout<<x<<"^"<<y<<" = "<<power(x,y);
	return 0;
}
