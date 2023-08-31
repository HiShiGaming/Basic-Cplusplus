#include<bits/stdc++.h>
using namespace std;
int main(){
	long double ans,n,a,b;
	cin>>n>>a>>b;
	ans=a*b;
	if(ans>10*18){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
	return 0;
}
