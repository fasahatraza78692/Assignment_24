#include<iostream>
using namespace std;
float area(float r)
{
	return 3.14*r*r;
}
int area(int h,int b)
{
	return h*b;
}
float area(float h,float b)
{
	return (0.5*(h*b));
}
int main()
{
	int a,b;
	float A,B;
	char x;
	cout<<"For area of Circle press C or c"<<endl;
	cout<<"For area of Rectangle press R or r"<<endl;
	cout<<"For area of Triangle press T or t"<<endl;
	cin>>x;
	if(x=='C'||x=='c')
	 {
	 	cout<<"Enter the radius of Circle"<<endl;
	 	cin>>a;
	 	cout<<"Area of circle = "<<area(a);
	 }
	if(x=='T'||x=='t')
	 {
	 	cout<<"Enter the height and base of Triangle"<<endl;
	 	cin>>A>>B;
	 	cout<<"Area of Triangle = "<<area(A,B);
	 }
	if(x=='R'||x=='r')
	 {
	 	cout<<"Enter the height and breadth of Rectangle"<<endl;
	 	cin>>a>>b;
	 	cout<<"Area of Rectangle = "<<area(a,b);
	 }
  return 0;
}
