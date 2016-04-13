#include<iostream>
using namespace std;
int main()
{
	int a[6];
	for(int i=0;i<6;i++)
		cin>>a[i];
	int b,sum=0;
	b=a[0];
	for(int i=1;i<6;i++)
	{
		if (b>a[i])
		{
	        	sum=sum+a[i];
		}
		else
			sum=sum;
	}
	cout<<sum<<endl;
	return 0;
}
