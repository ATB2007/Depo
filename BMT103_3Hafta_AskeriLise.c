/* BMT 103- 3�nc� Hafta / Bu Program Girilen Boy Kilo De�erlerine g�re Askeri Liseye Kabul Edilip Edilmedi�ini verir


Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF-B�L E�T
*/

#include<stdio.h>
int main () 

{
int yas,kilo;    
float boy,vki;


printf("Bu Program Girilen de�erlere g�re Askeri Liseye Kabul Edilip Edilmedi�ini verir.\n");

printf("Aday�n Ya��n� Giriniz.\n");
scanf("%d",&yas);

printf("Aday�n Boyunu Girinz.\n");
scanf("%f",&boy);

printf("Aday�n Kilosunu Girinz.\n");
scanf("%d",&kilo);

vki= kilo/(boy*boy);


if(yas>=13) and (yas<=17)
{
    if (vki>=18,50) and (vki<=24,99)
    {
    printf("KABUL ED�LD�N�Z.\n");
    }
}

else
    {
    printf("KABUL ED�LMED�N�Z");
    }

    return 0;
}
