#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    float per;
    per = (s1+s2+s3+s4+s5)/5.0;
    printf("%.2f Percent\n",per);
    if(per>=90) printf("Grade A");
    else if(per>=80) printf("Grade B");
    else if(per>=70) printf("Grade C");
    else if(per>=60) printf("Grade D");
    else if(per>=40) printf("Grade E");
    else printf("Grade F");
	return 0;
}