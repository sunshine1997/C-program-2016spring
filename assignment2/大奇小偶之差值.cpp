#include<iostream>
using namespace std;
int main()
{
	int a[6];
	for (int i=0;i<6;i++){
		cin>>a[i];}
	for (int i=0;i<5;i++){
		for(int j=1;j<6-i;j++){
			bool leftiseven = a[j-1]%2==0;
			bool rightiseven = a[j]%2==0;
			if((!leftiseven&&rightiseven)||
				(a[j-1]>a[j]&&(leftiseven==rightiseven)))
			{
			int temp =a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			}
		}
	}
	int m=a[5]-a[0];
	if(m>0)
		cout<<m<<endl;
	else
	{m=-m;
	cout<<m<<endl;}
        return 0;
}
