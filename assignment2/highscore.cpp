#include<iostream>
using namespace std;
int main() {
	int n,a[100],max;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n;i++){
		for (int j=1; j <n;j++){
		if(a[j - 1] < a[j]){
                  int max = a[j];
		  a[j] = a[j-1];
		  a[j-1] = max;
		}
	}
	}
	for (int i;
	cout << a[i] << endl;)
return 0;
}
