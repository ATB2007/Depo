/* BMT 103 8 inci Hafta / Bu Program  �sim,Soyisim,ya�,cinsiyet bilgileri i�eren Strcut �n di�er Strcut a aktar�r



Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF-B�L E�T 
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
    
    struct point a={"Ali","VEL�",20,'E'};
    struct point b={"Aliye","EL�",19,'K'};
    struct point gecici;
    
    gecici=a;
    a=b;
    b=gecici;
    
    
    
    printf("%s,%s,%d,%c",a.isim,a.soyisim,a.yas,a.cins);
    printf("\n");
    printf("%s,%s,%d,%c",b.isim,b.soyisim,b.yas,b.cins);

    return 0;
}

