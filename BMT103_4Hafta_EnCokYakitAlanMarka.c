/* BMT 103 5. Hafta  Bu program Markalara G�re Hangi Araban�n Daha Fazla Yak�t Ald���n� G�sterir


Ahmet Taha BE�PARMAK
22034040801
2. �ube
ESEF-B�L-E�T
*/



#include<stdio.h>


int main()
{

char mark;
int reno,mazd,hond,ford;
float renotutar,mazdtutar,hondtutar,fordtutar,tutar;


reno=0;
mazd=0;
hond=0;
ford=0;

printf("Renault 1\n");
printf("Mazda   2\n");
printf("Honda   3\n");
printf("Ford    4\n");


do
{
printf("Marka Giriniz\n");
scanf("%c",mark);
printf("Tutar� Giriniz\n");
scanf("%f",tutar);

switch(mark)
{

case  1: reno++; renotutar+=tutar; break;
case  2:  mazd++; mazdtutar+=tutar; break;
case  3:  hond++; hondtutar+=tutar; break;
case  4:  ford++; fordtutar+=tutar; break;

}

}while(mark==111);   //Klavyeden 111 girilince sonucu ekrana yazar

if ((reno>mazd) && (reno>hond) && (reno>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Renault");
if ((mazd>reno) && (mazd>hond) && (mazd>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Mazdad�r");
if ((hond>mazd) && (hond>reno) && (hond>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Hondad�r");
if ((ford>mazd) && (ford>hond) && (ford>reno))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Ford");

if ((reno>mazd) && (reno>hond) && (reno>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Renault");
if ((mazd>reno) && (mazd>hond) && (mazd>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Mazdad�r");
if ((hond>mazd) && (hond>reno) && (hond>ford))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Renault");
if ((ford>mazd) && (ford>hond) && (ford>reno))
    printf("En �ok Sat�� Yap�lan Ara� Modeli Renault");


return 0;
}
