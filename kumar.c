#include <stdio.h>

int main(void) {
	int n,a,d,s=0;
	printf("enter the value");
scanf("%d%d%d",&n,&a,&d);
	s=n*(2*a+(n-1)*d);
	s=s/2;
	
		printf("%d",s);
	return 0;
}
