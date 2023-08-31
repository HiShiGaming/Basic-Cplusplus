#include <iostream>
using namespace std;
int QHD(int n)//Hàm quy ho?ch d?ng
{
    int a[n+1];
    a[0]=0; a[1]=1; a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];// công th?c truy h?i quy ho?ch d?ng 
    }
    return a[n];//Tr? v? k?t qu? cho hàm quy ho?ch
}
int main()
{
    int n;
    cout<<"Nhap n:"; cin>>n;
    cout<<"Fibonacci thu n la: "<<QHD(n);
}
 
