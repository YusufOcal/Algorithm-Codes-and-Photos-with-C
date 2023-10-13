#include <stdio.h>

int main(void) {
	float a,b,c,d,e,f,g,h;
	printf("Bu program 2x2 boyutunda iki kare matrisin carpimini hesaplar.\n\n");
	printf("A matrisi [a b;c d] ve B matrisi [e f;g h] degiskenleri ile olusturulacaktir.\n\n");
	printf("C matrisi [a*e+b*g a*f+b*h;c*e+d*g c*f+d*h] seklinde hesaplanacaktir.\n\n");
	printf("a,b,c,d,e,f,g ve h degerlerini sirasiyla girmeniz istenecektir.\n\n");
	printf("a degerini giriniz -> ");scanf("%f",&a);
	printf("b degerini giriniz -> ");scanf("%f",&b);
	printf("c degerini giriniz -> ");scanf("%f",&c);
	printf("d degerini giriniz -> ");scanf("%f",&d);
	printf("e degerini giriniz -> ");scanf("%f",&e);
	printf("f degerini giriniz -> ");scanf("%f",&f);
	printf("g degerini giriniz -> ");scanf("%f",&g);
	printf("h degerini giriniz -> ");scanf("%f",&h);
	printf("\n\n");
	printf("| %10.2f %10.2f | x | %10.2f %10.2f | = | %10.2f %10.2f |",a,b,e,f,a*e+b*g,a*f+b*h);
	printf("\n");
	printf("| %10.2f %10.2f |   | %10.2f %10.2f |   | %10.2f %10.2f |",c,d,g,h,c*e+d*g,c*f+d*h);
	printf("\n\n");
	printf("olarak hesaplanmistir.\n");
	return 0;}
