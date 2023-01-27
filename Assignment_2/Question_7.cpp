#include<iostream>
using namespace std;
int add(int x,int y,int z=0) // THIS FUNCTION IS CAPABLE TO ADD 2 OR 3 NUMBERS
{
	return x+y+z;
}
int main()
{
	int a,b,c,n;
	cout<<"If you want to add two numbers press 2 otherwise press any number"<<endl;
	cin>>n;
	if(n==2)
	 {
	 	cout<<"Enter 2 numbers"<<endl;
	 	cin>>a>>b;
	 	cout<<"Addition = "<<add(a,b);
	 }
	else
	 {
		cout<<"Enter 3 numbers"<<endl;
	    cin>>a>>b>>c;
	    cout<<"Addition = "<<add(a,b,c);
	 }
	return 0;
}
