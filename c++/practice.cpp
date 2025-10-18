#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,e,f;
	cin>>a>>b>>c;
	float d=b*b-4*a*c;
	e=(-b+sqrt(d))/2*a;
	f=(-b-sqrt(d))/2*a;
	cout<<e<<f<<endl;
	
}

