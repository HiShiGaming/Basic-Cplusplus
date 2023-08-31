#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][m];
	for (int i=1;i<=n;i++){
		for (int j =1; j<=m;j++){
			a[i][j]=pow(i,2)+pow(j,2);
				//if(a[i][j]%5==0){
				//sum+=a[i][j];
			//}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j =1; j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
