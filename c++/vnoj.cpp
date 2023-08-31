#include<iostream>
using namespace std;
int main(){
	int n,m,res;
	cin >>n>>m;
	char c[100000][1000000];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>c[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if(c[i][j] != c[i+1][j] && c[i][j] != c[i][j+1] &&c[i+1][j] != c[i+1][j+1] && c[i][j+1]==c[i+1][j+1]){
				res=1;
				break;
			}
		}
	}
	if(res==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
