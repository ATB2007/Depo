/* BMT 103- 9 ncu Hafta / Bu Program Kullancýnýn gireceði 5 integer deðeri diziye kaydedip istenilen parametreye göre
ortalama deðerini hesaplayýp geri döndürür


Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF-BÝL EÐT
*/


#include <stdio.h>

float dizi[5];
float diziort;
int i;


void siralama(float *p, int uzunluk)
{
    
    
    float x=0;
    for (int i=0; i<uzunluk-1; i++)
    { 
        for(int j=i+1; j<uzunluk; j++)
        {
            if (p[i]<p[j])
            {
                x=p[i];
                p[i]=p[j];
                p[j]=x;
                
            }
        }
    }
printf("Dizinin Küçükten Büyüðe Doðru Sýralamasý\n");
for (int i=4; i>=0; i--)
{
    printf("%.f\t",dizi[i]);
}
printf("\nDizinin En Büyük Sayýsý %f",dizi[0]);
printf("\nDizinin En Küçük Sayýsý %f",dizi[4]);

}

void ortalamabuyuk(float dizi[5])
{
char adet;

for (int i=0; i<5; i++)
    {
        diziort=diziort+dizi[i];
    }   
        for (int i=0; i<5; i++)
        {
		if(dizi[i]>diziort)
        adet++;
     }
 
    printf("Dizinin Ortalamasýndan Büyük Sayýlar %c tanedir",adet);
}     
void ortalamakucuk(float dizi[5])
{
printf("\nDizinin Ortalamasýndan Küçük Sayýlar\n");
for (int i=0; i<5; i++)
    {
        (diziort=diziort+dizi[i]);
        }
       for (int i=0; i<5; i++)
       {
	   
	    if(dizi[i]<diziort)
        {
        printf("%f ",&dizi[i]);
     }
 }
}



void main()
{


for (int i=0; i<5; i++)
{
    printf("Dizinin %d. Elemanýný Giriniz: ",(i+1));
    scanf("%f",&dizi[i]);
}

siralama(dizi,5);
ortalamabuyuk(dizi);
ortalamakucuk(dizi);


}
