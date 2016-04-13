#include<iostream>
using namespace std;
int main()
{
	int N,K,a[1000],b[1000];
	cin>>N>>K;
	for (int i=0;i<N;i++)
	{	cin>>a[i];
	}
	for (int i=1;i<N+1;i++)
		if (a[i-1]>a[i])
		b[i-1]=a[i-1];
		else
			b[i-1]=a[i];
	}
	return 0;
}
