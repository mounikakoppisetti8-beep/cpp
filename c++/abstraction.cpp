#include<bits/stdc++.h>
using namespace std;
//void payusingupi(int amount){
	
//}
//void paycreditcard(){
	
//}
class payments{
	public:
		virtual void pay()=0;
		
};
class payusingupi:public payments{
	void pay()override{
		
	}
	
};
// add new features easily
int main(){
	//int amount=100;
	//payusingupi(amount);
	//payusingcreditcard(amount);
	payments *p1=new payusingcreditcard(amount)
	p1->pay()
	
	
	
	
	
}
