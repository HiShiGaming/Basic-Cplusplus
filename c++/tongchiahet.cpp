#include<iostream>
using namespace std;
int runcase(){
	int n,k,res;
	cin>>n>>k;
	for (int i=1; i<=n;i++){
		if (i % k==0){
			res+=i;
		}
	}
	cout<<res;
	return 0;
}

