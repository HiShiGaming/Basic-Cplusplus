#include<iostream>
using namespace std;
int main(){
	int z;
	cin>>z;
	int a[z],max;
	max=0;
	for (int i=1; i<=z;i++){
		cin>>a[i];
		if (max < a[i]){
			max=a[i];
		}
	}
	cout<<max;
	return 0;
}
