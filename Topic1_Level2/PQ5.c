#include <stdio.h>
int main()
{
    float tractLand,tractLandAcred;
    scanf("%f",&tractLand);
    tractLandAcred=tractLand/43560;
    printf("%.2f sq.ft is equal to %.2f acres",tractLand,tractLandAcred);
	return 0;
}