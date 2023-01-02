/* BMT 103- 3üncü Hafta / Bu Program Girilen Boy Kilo Deðerlerine göre Askeri Liseye Kabul Edilip Edilmediðini verir


Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT
*/

#include<stdio.h>
int main () 

{
int yas,kilo;    
float boy,vki;


printf("Bu Program Girilen deðerlere göre Askeri Liseye Kabul Edilip Edilmediðini verir.\n");

printf("Adayýn Yaþýný Giriniz.\n");
scanf("%d",&yas);

printf("Adayýn Boyunu Girinz.\n");
scanf("%f",&boy);

printf("Adayýn Kilosunu Girinz.\n");
scanf("%d",&kilo);

vki= kilo/(boy*boy);


if(yas>=13) and (yas<=17)
{
    if (vki>=18,50) and (vki<=24,99)
    {
    printf("KABUL EDÝLDÝNÝZ.\n");
    }
}

else
    {
    printf("KABUL EDÝLMEDÝNÝZ");
    }

    return 0;
}
