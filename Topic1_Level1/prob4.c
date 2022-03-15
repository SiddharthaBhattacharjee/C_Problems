#include <stdio.h>
int main()
{
    int n;
    int p=2,i=2;
    scanf("%d",&n);
    
    while(i<n){
        if(n%i>n%p){
            p=i;
        }
        i+=1;
    }
    printf("%d",p);

	return 0;
}