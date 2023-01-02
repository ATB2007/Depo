/* BMT 103 8 inci Hafta / Bu Program  Ýsim,Soyisim,yaþ,cinsiyet bilgileri içeren Strcut ýn diðer Strcut a aktarýr



Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT 
*/

#include <stdio.h>

struct point 
{
char isim[20];
char soyisim[25];
int yas;
char cins;
};


void swap(struct point a, struct point b);

int main()
{
    
    struct point a={"Ali","VELÝ",20,'E'};
    struct point b={"Aliye","ELÝ",19,'K'};
    struct point gecici;
    
    gecici=a;
    a=b;
    b=gecici;
    
    
    
    printf("%s,%s,%d,%c",a.isim,a.soyisim,a.yas,a.cins);
    printf("\n");
    printf("%s,%s,%d,%c",b.isim,b.soyisim,b.yas,b.cins);

    return 0;
}

