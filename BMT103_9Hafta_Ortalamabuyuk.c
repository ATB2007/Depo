/* BMT 103- 9 ncu Hafta / Bu Program Kullanc�n�n girece�i 5 integer de�eri diziye kaydedip istenilen parametreye g�re
ortalama de�erini hesaplay�p geri d�nd�r�r


Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF-B�L E�T
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
printf("Dizinin K���kten B�y��e Do�ru S�ralamas�\n");
for (int i=4; i>=0; i--)
{
    printf("%.f\t",dizi[i]);
}
printf("\nDizinin En B�y�k Say�s� %f",dizi[0]);
printf("\nDizinin En K���k Say�s� %f",dizi[4]);

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
 
    printf("Dizinin Ortalamas�ndan B�y�k Say�lar %c tanedir",adet);
}     
void ortalamakucuk(float dizi[5])
{
printf("\nDizinin Ortalamas�ndan K���k Say�lar\n");
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
    printf("Dizinin %d. Eleman�n� Giriniz: ",(i+1));
    scanf("%f",&dizi[i]);
}

siralama(dizi,5);
ortalamabuyuk(dizi);
ortalamakucuk(dizi);


}
