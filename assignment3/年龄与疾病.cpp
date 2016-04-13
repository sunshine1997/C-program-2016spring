#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	double b=0,c=0,d=0,e=0;
	for(int i=0;i<n;i++){
		if (a[i]>=1&&a[i]<=18)
                    b=b+1;
		else if (a[i]>=19&&a[i]<=35)
                    c=c+1;
		else if (a[i]>=36&&a[i]<=60)
			d=d+1;
		else if (a[i]>60)
			e=e+1;
	}
	double B,C,D,E;
	B=(b/n)*100;
        C=(c/n)*100;
	D=(d/n)*100;
	E=(e/n)*100;
	cout<<"1-18: "<<fixed<<setprecision(2)<<B<<"%"<<endl;
	cout<<"19-35: "<<C<<"%"<<endl;
	cout<<"36-60: "<<D<<"%"<<endl;
	cout<<"60-: "<<E<<"%"<<endl;
	return 0;
}
