#include <stdio.h>
int main()
{
    int n;
    int sq=0;
    scanf("%d",&n);
    while(n>0){
        sq+=(n*n);
        n--;
    }
    printf("%d",sq);
	return 0;
}