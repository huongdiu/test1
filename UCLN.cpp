#include <iostream>
#include <stdio.h>
using namespace std;

int UCLN(int a, int b)
{
	if(b==0) return a;
	else return UCLN(b,a%b);
}

int main()
{
	int a,b;
	cout<<"\n Nhap a = "; cin>>a;
	cout<<"\n Nhap b = "; cin>>b;
	cout<<"\n Ket qua = "<<UCLN(a,b);
	return 0;
}
