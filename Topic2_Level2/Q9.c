#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d%d%d",&a,&b,&n);
    int p = pow(2,n/2);
    if(n%2!=0) c = a*p*2;
    else c = a*p;
    d = b*p;
    if(c>d) printf("%d",c/d);
    else printf("%d",d/c);
	return 0;
}