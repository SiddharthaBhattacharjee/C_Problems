#include <stdio.h>
int main()
{
    int x1,x2,v1,v2;
    scanf("%d%d%d%d",&x1,&x2,&v1,&v2);
    if((x2-x1+v2-v1)%(v1-v2)!=0){
        printf("YES");
    }
    else{
        printf("NO");
    }
	return 0;
}