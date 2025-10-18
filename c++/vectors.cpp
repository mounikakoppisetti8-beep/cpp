#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<char>v={'a','c','f','d','z'};
	v.pop_back();
	v.erase(find (v.begin() v.end()'f'));
	for(int i=0;i<v.size(),i++){
	cout<<v[i]<<" ";
}
return 0;
}
