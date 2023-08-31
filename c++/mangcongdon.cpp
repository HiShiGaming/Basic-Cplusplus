#include<iostream>
using namespace std;
int main(){
	int n,l,r;
	cin>>n;
	int a[n];int prefix[n];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	prefix[1]=a[1];
	for (int i=2;i<=n;i++){
		prefix[i]=prefix[i-1]+a[i];
	}
	for (int i=1;i<=n;i++){
		cout<<prefix[i]<<" ";
	}
	cout<<endl;
	cout<<" Tinh mang cong don theo doan: ";
	cin>>l>>r;
	cout<<prefix[r]-prefix[l-1];
	return 0;
}
