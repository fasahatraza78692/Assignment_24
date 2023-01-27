#include<iostream>
using namespace std;
int fact(int n)
{
	int fc=1;
	for(int i=1;i<=n;i++)
	  fc=fc*i;
	return fc;
}
int comb(int n,int r)
{
	return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
	int n,sps;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	sps=n;
	for(int i=1;i<=n;i++)
	 {
	 	for(int k=1;k<=sps;k++)
	 	   cout<<" ";
	 	   sps--;
	 	for(int j=1;j<=i;j++)
	 	 cout<<comb(i,j)<<" ";
	 	cout<<endl;
	 }
	return 0;
}
