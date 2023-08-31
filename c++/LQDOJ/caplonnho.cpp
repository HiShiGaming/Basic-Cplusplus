#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long paration(long n){
	long sum;
	while(n){
	sum+=n%10;
	n/=10;
	}
	return sum;
}
long logic(int l,int s){
	int ans,tong,dk;
	dk=pow(10,l);
	for(int i=1;i<dk;i++){
		if (paration(i)==s){
			ans=i;
			break;
			return ans;
		}
	}
}
int main(){
	int dk,ans,tong,l,s;
	cin>>l>>s;
	/*dk=pow(10,l);
	for (int i=1;i<dk;i++){
		if(paration(i)==s){
			ans=i;
			break;
		}
	}*/
	cout<<logic(l,s);
	return 0;
}
