#include <stdio.h>
#include <conio.h>

int main(void){
   float minimum=100,maksimum=999,ust=maksimum,alt=minimum,tahmin;int sayac=0;
   char cevap='h';
   printf("\n %.f ile %.f arasinda bir sayi tut, ben bulacagim...\n\n",minimum,maksimum);
   while((ust-alt)>=0.5){
   	  sayac++;
      tahmin=(ust+alt)/2;	  
      printf("\n %2d. tahminim %.f; bu tahmin kucuk ise K, buyuk ise B, bilmissem T (K,B,T) -> ",sayac,tahmin);
	  cevap=getch();
      if ((cevap=='b') || (cevap=='B')) ust=tahmin;
	    //{ust=tahmin;printf("\nust=%.f,alt=%.f\n",ust,alt);}
      else if ((cevap=='k') || (cevap=='K')) alt=tahmin;
        //{alt=tahmin;printf("\nust=%.f,alt=%.f\n",ust,alt);}
      else if ((cevap=='t') || (cevap=='T'))
        break;
	  else {printf("Tutarsiz cevap!\n");sayac--;}}
    printf("\n\n Tuttugunuz sayi %.f, %d adimda bildim.\n",tahmin,sayac);
	return 0;}
