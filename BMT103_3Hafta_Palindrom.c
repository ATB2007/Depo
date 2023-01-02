/* BMT 103 3üncü Hafta / Bu Program Klavyeden Girilen Bir Sayýnýn Palindrom olup olmadýðýný verir



Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT
*/


#include<stdio.h>
int main () 

{
    
int sayi1,sayi2,bir,on,yuz,bin,onbin;

printf("5 Basamaklý bir sayý giriniz.\n");
scanf("%d",&sayi1);

bir=sayi1%10;
on=((sayi1%100)-bir)/10;
yuz=((sayi1%1000)-(sayi1%100))/100;
bin=((sayi1%10000)-(sayi1%1000))/1000;
onbin=((sayi1%100000)-(sayi1%10000))/10000;

sayi2=bir*10000+on*1000+yuz*100+bin*10+bir;

if(sayi1==sayi2)
{
    printf("Bu sayý PALÝNDROM sayýdýr.\n");
}
    else
    {
    printf("Bu sayý PALÝNDROM sayý deðildir");
    }

    return 0;
}
