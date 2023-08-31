#include <bits/stdc++.h>
using namespace std;
int main(){
	int stt,s;
	cin>>stt>>s;
	int a[stt][s];
	int m[stt], v[stt];
	for (int i=1;i<=stt;i++){
		for(int j=1; j<=s;j++){
			a[i][j] = 0;
		}
	}
	for (int i=1; i<= s; i++){
		cin>>m[i]>>v[i];		
	}
	for (int i=1;i<=stt;i++){
		for(int j=1; j<=s;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	
	return 0;
}
