#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,e,f;
	cin>>a>>b>>c;
	double d=(b*b)-(4*a*c);
	if(d>0){
	e=(-b+sqrt(d))/(2*a);
	f=(-b-sqrt(d))/(2*a);
	cout<<e<<","<<f<<endl;}
	else if(d==0){
		cout<<(b/(2*a))<<(b/(2*a))<<endl;
	}
	else{
		cout<<(b/(2*a))<<sqrt(-d)/(2*a)<<endl;
	}
	
}

