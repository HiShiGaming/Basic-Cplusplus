#include<bits/stdc++.h>
using namespace std;
bool checkprime(long long n,long long k){
	long long prime[n];
	long long ans[k];
	for(int i=1;i<=n;i++){
		prime[i]=true;
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==true){
			for(int j=i*2;j<=n;j+=i){
				prime[j]=false;
			}
		}		
	}
	return prime[n];
}
long long numberseparation(long long n){
	long sum;
	while(n){
		sum+= n%10;
		n/=10;
	}
	return sum;
}
int main(){
	long long n,res;
	cin>>n;
	res=numberseparation(n);
	cout<<res<<endl;
	return 0;
}
