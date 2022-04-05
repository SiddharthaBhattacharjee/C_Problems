#include <stdio.h>
int main()
{
    int n,o;
    scanf ("%d",&n);
    if(n%2==0){
        o=n/2;
    }
    else{
        o=n/2 + 1;
    }
    printf("%.9f",(float)o/(float)n);
	return 0;
}