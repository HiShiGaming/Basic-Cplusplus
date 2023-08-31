#include<iostream>

using namespace std;

int main() {
	int a,b,c;
	cin >> a>>b>>c;
	if (c >= a && c >= b ){
		cout<<c<<" co con cac dai nhat ";
	}
	if(b > c && b > a){
		cout<<b<<" co con cac dai nhat ";
	}
	if (a>b && a>c){
		cout<< a<<" co con cac dai nhat";
	}
	return 0;
}
