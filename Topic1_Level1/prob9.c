#include <stdio.h>
int main()
{
    int U,V;
    scanf("%d %d",&U,&V);
    if((U*V)%2==0){
        printf("%d",(U*V)/2);
    }
    else{
        printf("%d",((U*V)/2)+1);
    }
	return 0;
}