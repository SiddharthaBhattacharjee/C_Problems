#include <stdio.h>
int main()
{
    int bro1,bro2,bro3,tallest;
    scanf("%d%d%d",&bro1,&bro2,&bro3);
    if(bro1>bro2 && bro1>bro3){
        tallest = bro1;
    }
    else if(bro2>bro1 && bro2>bro3){
        tallest = bro2;
    }
    else{
        tallest = bro3;
    }
    printf("%d",tallest);
	return 0;
}