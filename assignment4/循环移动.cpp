#include<iostream>
using namespace std;
int main()
{
	int n,m,a[100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=0;j<m;j++){
	for(int i=n;i>0;i--)
		{int x=a[n];
		a[n]=a[n-1];
		a[0]=x;
		} 
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
