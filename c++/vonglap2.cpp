#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long a,b;
	
	cin>>b;
	for (int i=1; i<=round(sqrt(b)); i++){
		if(b%i==0){
			cout<< i<<" "<<b/i<<" ";
		}
	}
	return 0;
}
