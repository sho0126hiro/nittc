#include <stdio.h>

int Summation(int n){
	if(n==1)return 1;
	return n+Summation(n-1);
}
int main(){
	int n;
	printf("nまでの総和を求めます\n");
	printf("整数nを入力>>>");
	scanf("%d",&n);
	printf("%d\n",Summation(n));
	return 0;
}
