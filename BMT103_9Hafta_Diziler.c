/*
BMT-103 Dersi 9. hafta uygulama �devi. 
Bu program matrise 0-100 aras�nda rastgele rakamlar atay�p sonras�nda
bu iki matrisi toplamakta ve sonucunu 3. bir matrise atamaktad�r. 


Ahmet Taha BE�PARMAK
22034040801
2.�ube
ESEF - B�L E�T
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir b�y�kl�kteki matrisi ekrana yazd�r�r
*/

void matris_yazdir(int matris_yazdir[SAT][SUT])
{
	int i,j;
			
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
			printf("%4d",matris_yazdir[i][j]);
			}
		printf("\n");
		}
}   


int main()
{
    srand(time(NULL)); 
    int matrisA[SAT][SUT], matrisB[SAT][SUT], matristop[SAT][SUT];
    
    // Burada matris A ve matris B ye 0 ile 100 aras�nda rastgele de�erler atan�r.
     int i,j;

    for(i=0;i<5;i++)
    	for(j=0;j<4;j++)
    	{
    		matrisA[i][j]=rand()%100;
    		matrisB[i][j]=rand()%100;
		}

    // yukar�da tan�ml� fonksiyonu kullanarak matris A ve matris B yi ekrana yazd�r�n�z. 
    printf("birinci matris:\n");
   matris_yazdir(matrisA);
   printf("\n ikinci matris:\n");
   matris_yazdir(matrisB);
    
    // Burada iki Matris A ve Matris B yi toplayarak sonucunu Matris Toplama ye atay�n�z. 
    	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			matristop[i][j]=matrisA[i][j]+matrisB[i][j];	
}
    
     // yukar�da tan�ml� fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazd�r�n�z. 
     printf("\n toplam matris:\n");
 matris_yazdir(matristop);

    return 0;
}
