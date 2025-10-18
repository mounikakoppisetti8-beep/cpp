#include<stdio.h>
int main(){
		int n,i,sum=0;
		scanf("%d",&n);
		int x[n],y[n],z[n];
		for(i=0;i<n;i++){
			scanf("%d %d %d",&x[i],&y[i],&z[i]);
			sum=sum+x[i]+y[i]+z[i];
		}
		if(sum==0){
			printf("YES");}
		else{
			printf("No");
		}
	}

