#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>b && b>c){
		cout<<"Dung roi nung";
	}
	if(a<b && b<c){
		cout<<"Dung roi nung";
	}	
	else{
		cout<<"Nhu cc";
	}
	return 0;
}

