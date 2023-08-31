#include<iostream>
using namespace std;
int main(){
	int b;
	cin>>b;
	for(int i=b;i<=b;i=i-1){
		cout<<i<< " ";
		if (b+i==0){
			break;
		}
	}
	return 0;	
}
