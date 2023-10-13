#include <stdio.h>

int main(void) {
	int a,i,j;
	printf("a degerini giriniz -> ");scanf("%d",&a);
	for(i=1;i<=a;i++){
	  for(j=1;j<=a-i;j++)
	    printf("   ");
	  for(j=1;j<=i;j++)
	    printf("%-3d",j); // - isaretine dikkat edelim
	printf("\n");}
	return 0;}
