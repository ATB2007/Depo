/* BMT 103 3�nc� Hafta / Bu Program Klavyeden Girilen Bir Say�n�n Palindrom olup olmad���n� verir



Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF-B�L E�T
*/


#include<stdio.h>
int main () 

{
    
int sayi1,sayi2,bir,on,yuz,bin,onbin;

printf("5 Basamakl� bir say� giriniz.\n");
scanf("%d",&sayi1);

bir=sayi1%10;
on=((sayi1%100)-bir)/10;
yuz=((sayi1%1000)-(sayi1%100))/100;
bin=((sayi1%10000)-(sayi1%1000))/1000;
onbin=((sayi1%100000)-(sayi1%10000))/10000;

sayi2=bir*10000+on*1000+yuz*100+bin*10+bir;

if(sayi1==sayi2)
{
    printf("Bu say� PAL�NDROM say�d�r.\n");
}
    else
    {
    printf("Bu say� PAL�NDROM say� de�ildir");
    }

    return 0;
}
