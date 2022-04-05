#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int asc = (int)ch;
    if((asc>=65&&asc<=90)||(asc>=97&&asc<=122)){
        printf("ALPHABET");
    }
    else{
        printf("NOT AN ALPHABET");
    }
	return 0;
}