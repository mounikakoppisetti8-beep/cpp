#include<bits/stdc++.h>
using namespace std;
void binary(int n){
	for(int k=32;k>=0;k--){
		int mask=1<<k;
		if((mask&n)>0){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	binary(n);
}
