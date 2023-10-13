#include <stdio.h>

int main(void) {
	int sayi,i,deger;
	do{
	  printf("100 ile 999 arasinda uc basamakli bir tam sayi giriniz ->  ");
	  scanf("%d",&sayi);
	}while((sayi>999) || (sayi<100));
	int a=sayi/100,b=(sayi-a*100)/10,c=sayi-a*100-b*10;
	printf("\n\nYazmis oldugunuz sayinin okunusu  :  ");
	for(i=1;i<=3;i++){
		if (i==1) deger=a; else if (i==2) deger=b; else deger=c;
		if ((i==1) || (i==3)){
		  if      (deger==9) printf("dokuz ");
		  else if (deger==8) printf("sekiz ");
		  else if (deger==7) printf("yedi ");
		  else if (deger==6) printf("alti ");
		  else if (deger==5) printf("bes ");
		  else if (deger==4) printf("dort ");
		  else if (deger==3) printf("uc ");
		  else if (deger==2) printf("iki ");
		  if (i==1) 
			  printf("yuz ");
		  else
			  if (deger==1) printf("bir");}
		else
		  if      (deger==9) printf("doksan ");
		  else if (deger==8) printf("seksen ");
		  else if (deger==7) printf("yetmis ");
		  else if (deger==6) printf("altmis ");
		  else if (deger==5) printf("elli ");
		  else if (deger==4) printf("kirk ");
		  else if (deger==3) printf("otuz ");
		  else if (deger==2) printf("yirmi ");
		  else if (deger==1) printf("on ");}
	printf("\n\n\n");
	return 0;}
