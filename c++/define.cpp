#include<bits/stdc++.h>
#define gay(i,a,b) for(int i=a;i<=b;i++)
#define gaynung(j,a,b) for(int j=i*2;j<=b;j+=i)
using namespace std;
bool prime(long long n){
	long long prime[n];
	gay(i,0,n){
		prime[i]=true;
	}
	gay(i,2,n){
		if(prime[i]==true){		
			gaynung(j,i,n){
				prime[j]=false;
			}
		}
	}
	if(prime[n]==true){
		return true;
	}
	else{
		return false;
	}	
}
int main(){
	long long n;
	cin>>n;
	if(prime(n)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
	return 0;
}

