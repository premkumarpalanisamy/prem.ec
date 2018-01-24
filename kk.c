
#include <stdio.h>

int main() {
	int N[4]={1,2,3,4},r,k,sum=0;
	scanf("%d",&k);
	for(r=0;r<k;r++)
	{
		sum=sum+N[r];
	}
	printf("%d",sum);
	return 0;
}
