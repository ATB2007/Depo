/* BMT 103- 3�nc� Hafta / Bu Program Girilen ALES, Yabanc� Dil, Mezuniyet Ortalamas�na g�re 
Y�ksek Lisans Program�nda s�ralamaya girip girmedi�ini verir.

Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF-B�L E�T
*/



#include<stdio.h>
int main () 

{
    
float ales,ydil,agno,sonuc;


printf("Bu Program Girilen ALES, Yabanc� Dil, Mezuniyet Ortalamas�na g�re Y�ksek Lisans Program�nda s�ralamaya girip girmedi�ini verir.\n");

printf("ALES Puan�n� Giriniz.\n");
scanf("%f",&ales);

printf("Yabanc� Dil Puan�n� Giriniiz.\n");
scanf("%f",&ydil);

printf("Yabanc� Dil Puan�n� Giriniiz.\n");
scanf("%f",&agno);


sonuc= (ales*(1/2))+(ydil*(1/4))+(agno*(1/4));


if(sonuc>=60)
{
    printf("S�ralamaya Girdiniz.\n");
}
    else
    {
    printf("S�ralamaya Giremediniz");
    }

    return 0;
}
