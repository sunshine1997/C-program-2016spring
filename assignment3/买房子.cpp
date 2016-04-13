#include<iostream>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	for(int M=1;M<=20;M++)
	{
		if ((200*((1+K)^(M-1)))<=(N*M));
		cout<<M<<endl;break;
	}
	cout<<"Impossible"<<endl;
	return 0;
}

