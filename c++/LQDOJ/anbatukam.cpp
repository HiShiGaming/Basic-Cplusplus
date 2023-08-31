#include<bits/stdc++.h>
using namespace std;
void pre(long long n){
	long long a[n],prefix[n];
	for (int i=1;i<=n;i++){
		cin>>a[i];		
	}
	prefix[1]=a[1];
	for (int i=2;i<=n;i++){
		prefix[i]=a[i]+prefix[i-1];
	}
	for (int i=1;i<=n;i++){
		cout<<prefix[i]<<" ";
	}
	return;
}
int main(){
	long long n;
	cin>>n;
	pre(n);
	return 0;
	
}
