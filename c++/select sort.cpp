#include<iostream>
using namespace std;
int main(){
	int n,min;
	cin>>n;
	int a[n],sort[n];
	for (int i=1; i<=n;i++){
		cin>>a[i];
	}
	min=a[1];
	for (int i=1;i<=n;i++){
		if(min>a[i]){
			min= a[i];
		}
	}
	for
	cout<<min;
	return 0;
}
