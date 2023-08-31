#include<iostream>
using namespace std;
int main(){
	int n,k,res;
	cin>>n;
	int a[n];
	for (int i =1 ; i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	for (int i =1; i<=n;i++){
		if(a[i] ==k){
			res+=1;
		}
	}
	cout<<res;
	return 0;
}
