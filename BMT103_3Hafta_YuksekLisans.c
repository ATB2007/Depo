/* BMT 103- 3üncü Hafta / Bu Program Girilen ALES, Yabancý Dil, Mezuniyet Ortalamasýna göre 
Yüksek Lisans Programýnda sýralamaya girip girmediðini verir.

Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT
*/



#include<stdio.h>
int main () 

{
    
float ales,ydil,agno,sonuc;


printf("Bu Program Girilen ALES, Yabancý Dil, Mezuniyet Ortalamasýna göre Yüksek Lisans Programýnda sýralamaya girip girmediðini verir.\n");

printf("ALES Puanýný Giriniz.\n");
scanf("%f",&ales);

printf("Yabancý Dil Puanýný Giriniiz.\n");
scanf("%f",&ydil);

printf("Yabancý Dil Puanýný Giriniiz.\n");
scanf("%f",&agno);


sonuc= (ales*(1/2))+(ydil*(1/4))+(agno*(1/4));


if(sonuc>=60)
{
    printf("Sýralamaya Girdiniz.\n");
}
    else
    {
    printf("Sýralamaya Giremediniz");
    }

    return 0;
}
