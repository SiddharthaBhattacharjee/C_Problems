#include <stdio.h>
int main()
{
    int n,a,b,k;
    scanf("%d%d%d%d",&n,&a,&b,&k);
    if((n/a)+(n/b)>k) printf("Win");
    else if((n/a)+(n+b)==k) printf("Win");
    else printf("Lose");
	return 0;
}