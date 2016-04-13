#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	if (95<=a&&a<=100)
		b=1;
	else if(90<=a&&a<95)
		b=2;
	else if(85<=a&&a<90)
		b=3;
	else if(80<=a&&a<85)
		b=4;
	else if(70<=a&&a<80)
		b=5;
	else if(60<=a&&a<70)
		b=6;
	else if(a<60)
		b=7;
	switch(b){
	case 1:cout<<"1"<<endl;break;
	case 2:cout<<"2"<<endl;break;
	case 3:cout<<"3"<<endl;break;
	case 4:cout<<"4"<<endl;break;
	case 5:cout<<"5"<<endl;break;
	case 6:cout<<"6"<<endl;break;
	case 7:cout<<"7"<<endl;break;
	}
 return 0;
}
