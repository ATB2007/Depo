/*
BMT-103 Dersi 9. hafta uygulama ödevi. 
Bu program matrise 0-100 arasýnda rastgele rakamlar atayýp sonrasýnda
bu iki matrisi toplamakta ve sonucunu 3. bir matrise atamaktadýr. 


Ahmet Taha BEÞPARMAK
22034040801
2.Þube
ESEF - BÝL EÐT
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdýrýr
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
    
    // Burada matris A ve matris B ye 0 ile 100 arasýnda rastgele deðerler atanýr.
     int i,j;

    for(i=0;i<5;i++)
    	for(j=0;j<4;j++)
    	{
    		matrisA[i][j]=rand()%100;
    		matrisB[i][j]=rand()%100;
		}

    // yukarýda tanýmlý fonksiyonu kullanarak matris A ve matris B yi ekrana yazdýrýnýz. 
    printf("birinci matris:\n");
   matris_yazdir(matrisA);
   printf("\n ikinci matris:\n");
   matris_yazdir(matrisB);
    
    // Burada iki Matris A ve Matris B yi toplayarak sonucunu Matris Toplama ye atayýnýz. 
    	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			matristop[i][j]=matrisA[i][j]+matrisB[i][j];	
}
    
     // yukarýda tanýmlý fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdýrýnýz. 
     printf("\n toplam matris:\n");
 matris_yazdir(matristop);

    return 0;
}
