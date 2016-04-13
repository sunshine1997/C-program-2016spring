#include<iostream>
using namespace std;
int main()
{
	int a,x,y,z;
	cin>>a;
	x=a/100;
	y=(a-x*100)/10;
	z=a-x*100-y*10;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	return 0;
}
