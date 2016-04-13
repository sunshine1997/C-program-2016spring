#include<iostream>
using namespace std;
int main()
{
	int n,k,a[1000];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{ 
		for(int j=1;j<n;j++){
	if (k=(a[i]+a[i+j]))
	{cout<<"yes"<<endl;break;}
	else 
		cout<<"no"<<endl;
		}
	}
	return 0;
}
