#include<iostream>
using namespace std;
int main()
{
	int L,M,a[1000],b[1000];
	cin>>L>>M;
	for(int i=0;i<M;i++)
		cin>>a[i]>>b[i];
	int sum=0;
	for(int i=0;i<M;i++){
		if ((i+1)==M)
			a[i+1]=L;
		if (b[i]<a[i+1]){
        	sum=sum+b[i]-a[i]+1;}
		else {if (b[i]>b[i+1]){
			int max=b[i];
			b[i]=b[i+1];
			b[i+1]=max;}
		      if (a[i]<a[i+1]){
			int min=a[i];
			a[i]=a[i+1];
			a[i+1]=min;}
                 }
	}
	cout<<L+1-sum<<endl;
	return 0;
}
