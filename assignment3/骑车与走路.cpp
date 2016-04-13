#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float a[1000];
	for (int i=0;i<n;i++)
		cin >> a[i];
	for (int i=0;i<n;i++){
	float x=a[i];
	if ((x/3+27+23)==(x/1.2))
		cout<<"All"<<endl;
	else if((x/3+27+23)<(x/1.2))
		cout<<"Bike"<<endl;
	else 
		cout<<"Walk"<<endl;
	}
	return 0;
}
