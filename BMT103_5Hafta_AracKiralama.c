/* BMT 103-5 Hafta / Bu Program kiralanan Aracýn Türü,Süresi ve Kullaným Mesafesine göre ücretini hesaplar


Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT
*/

#include<stdio.h>
int main()
{

char tip;
int gun,mesafe,ucret;

ucret=0;

printf("Arabanin Turu Nedir ");
scanf("%c",&tip);

printf("Arabayi kac gun kullandiniz ");
scanf("%d",& gun);

printf("Araba ile kac km yol yaptiniz ");
scanf("%d",& mesafe);

switch(tip){

case 'a':
case 'A': ucret = gun*20 + mesafe*18; break;
case 'b':
case 'B': ucret = gun*32 + mesafe*22; break;
case 's':
case 'S': ucret = gun*43 + mesafe*28; break;
case 'p':
case 'P': ucret = gun*51 + mesafe*36; break;

default : printf("Yanlýs arac turu!");
}

printf("Odemeniz Gereken Tutar: %d", ucret);

}
