#include<stdio.h>
int main(){
int n,i,sum;
printf("enter value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	sum+=i;
}
printf("sum of series:%d\n",sum);
return 0;
}
