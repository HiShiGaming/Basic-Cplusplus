#include<iostream>
using namespace std;
int main(){
	int sum,n,tb;
	cin>>n;
	int a[n];
	sum=0;
	tb=0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}	
	for (int i=1;i<=n;i++){
		if(a[i]%2!=0){
			sum+=a[i];
			tb++;
		}
	}
	cout<<sum;
	return 0;
}
