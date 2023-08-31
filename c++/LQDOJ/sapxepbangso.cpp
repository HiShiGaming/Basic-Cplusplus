#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,m,k,t;
	t=1;
	cin>>n>>m>>k;
	long a[n][m],sortedd[n*m];
	for (int i=1;i<=n;i++){
		for (int j =1; j<=m;j++){
			a[i][j]=pow(i,2)+pow(j,2);
		}
	}
	for (int i=1;i<=n;i++){
		for (int j =1; j<=m;j++){
			sortedd[t]=a[i][j];
			t++;
		}
	}
	sort(sortedd,sortedd+n*m);
	cout<<sortedd[k-1];
	return 0;
}
