#include <bits/stdc++.h>
using namespace std;
void show(){
	for (int i=1;i<=100;i++){
		if(i%3==0 && i%5!=0){
		cout<<i<<" ";
		}
	}
}
void name(string ten){
	cout<<"Hello "<<ten;
}
int main(){
	string ten; cin>>ten;
	name(ten);
	tolower(ten);

	return 0;
}
