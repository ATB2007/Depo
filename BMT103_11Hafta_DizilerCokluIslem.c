/* Bu Program Yap�lan Se�imlere G�re Bir Dizide A�a��da Men�de Belirtilen ��lemleri Yapar*/

/* 
Ahmet Taha BE�PARMAK
22034040801
ESEF - B�L_E�T
*/

#include<stdio.h>

float siralamadizi(float siralama[5]) //K���kten b�y��e do�ru s�ralama fonk.
{
int i,j,swap;
for(i=1;i<=5;i++)
{
for(j=i+1;j<=5;j++)
if(siralama[j] < siralama[i])
{
swap = siralama[i];
siralama[i] = siralama[j];
siralama[j] = swap;
}
}    
return siralama[i];
}

float ikincieb(float ikincib[5]) //dizideki ikinci en b�y�k say�y� bulan fonk.
{
float swap;
int i,j;
for(i=1;i<=5;i++)
{
for(j=i+1;j<=5;j++)
if(ikincib[j] < ikincib[i]){
swap = ikincib[i];
ikincib[i] = ikincib[j];
ikincib[j] = swap;
}

}   
return ikincib[4];
}

float buyuk(float enbuyuk[5]) // dizideki en b�y�k say�y� bulan fonk.
{
	int i;
	float swap=0;
	for(i=0;i<5;i++)
	{
		if(swap<enbuyuk[i])
		{
			swap=enbuyuk[i];
		}
	}
	return swap;
	
}
float kucuk(float enkucuk[5]) // dizideki en k���k say�y� bulan fonk.
{
	int i;
	float swap=0;
	for(i=1;i<=5;i++)
	{
		if(swap<enkucuk[i])
		{
			swap=enkucuk[i];
		}
	}
		for(i=1;i<=5;i++)
	{
		if(swap>enkucuk[i])
		{
			swap=enkucuk[i];
		}
	}
	
	return swap;
	
}
float ortalama(float ortalama[5]) // dizideki say�lar�n ortalamas�n� bulan fonk.
{
	int i,j,sayac=0;
	float toplam=0,ort=0;
	for(i=1;i<=5;i++)
{
ort=ortalama[i];
toplam=toplam+ort;
}
toplam=toplam/5;
printf("%.2fortalama\n",toplam);
for(j=1;j<=5;j++)
{
	if(toplam<ortalama[j])
	sayac++;

}
	return sayac;
}

float ortaalti(float ortaalti[5]) //dizideki say�lar�n ortalamas�nda daha k���k olanlar� g�steren fonk.
{
	int i,j;
	float toplam=0;
	for(i=1;i<=5;i++)
{
toplam=toplam+ortaalti[i];
}
toplam=toplam/5;
printf("Dizinin Ortalamas�: %.2f\n",toplam);
for(j=1;j<=5;j++)
{
	if(ortaalti[j]<toplam)
printf("%.2f\t",ortaalti[j]);

}

	return ortaalti[j];
}


float reftoplam(float reftop[5]) // Girilen say�dan dizi i�inde daha b�y�k olan say�lar�n toplam�n� g�steren fonk.
{
	int sayi,j;
	float toplam=0;
	printf("paremetre degeri giriniz\n");
	scanf("%d",&sayi);

for(j=1;j<=5;j++)
{
	if(reftop[j]>sayi)
toplam+=reftop[j];
	else 
	continue;
}
	return toplam;
}

float refort(float reftop[5]) // Girilen say�dan dizi i�inde daha b�y�k olan say�lar�n toplam�n� g�steren fonk.
{
	int  j,sayac=0,sayi2;
	float toplam=0;

	printf("Paremetre De�eri Giriniz\n");
	scanf("%d",&sayi2);

for(j=1;j<=5;j++)
{
	if(reftop[j]>sayi2)
{
toplam+=reftop[j];
sayac++;
}
else
continue;
}
toplam=toplam/sayac;
	return toplam;
}
int main()
{
	
int i,j,secim,ortustudg,kbsirali[5];

float sonuc[5],dizi1[5],enbuyuk,enkucuk,ortaaltidg,refustutoplam,ikinci,refortalama;

for(i=1;i<=5;i++)
{
	printf("Dizinin %d inci Eleman�n� Giriniz:\n",i);
	scanf("%f",&dizi1[i]);
}
printf("///Dizi///\n");
for(i=1;i<=5;i++)
{
	printf("%.2f,\t",dizi1[i]);
}

//Men�
printf("\n L�tfen yapmak istedi�iniz i�lemi giriniz");
printf("1-Dizinizi K���kten B�y��e Do�ru S�ralan�r\n");
printf("2-Dizinizdeki En B�y�k Eleman� G�sterir\n");
printf("3-Dizinizdeki En K���k Eleman� G�sterir\n");
printf("4-Dizinin �kinci En B�y�k Say�s�n� Se�er\n");
printf("5-Dizinin Ortalama De�erinden Daha B�y�k Olan De�erlerin Say�s�n� G�sterir\n");
printf("6-Dizinin Ortalama De�erinden Daha K���k Elemanlar� G�sterir\n");
printf("7-Parametre Olarak Girilen De�erden Dizi ��indeki Daha B�y�k Olan Say�lar�n Toplam�n� G�sterir\n");
printf("8-Parametre Olarak Girilen Degerden Dizi ��indeki Daha B�y�k Olan Say�lar�n Ortalamas�n� G�sterir\n");
printf("9-��kmak icin 9 a Bas�n�z\n");
printf("Se�iminiz\t");
scanf("%d",&secim);

switch(secim) //Men� Se�im
{
	case 1:
	kbsirali[5]=siralamadizi(dizi1);
	for(i=1;i<=5;i++)
{
	printf("%.2f,\t",dizi1[i]);
}
break;
	case 2:	
	enbuyuk=buyuk(dizi1);
	printf("%.2f",enbuyuk);	
break;
	case 3:
	enkucuk=kucuk(dizi1);
	printf("%.2f",enkucuk);
break;
case 4:
	ikinci=ikincieb(dizi1);
	printf("%.2f",ikinci);
break;	
	case 5:
		ortustudg=ortalama(dizi1);
		printf("ortalama ustu %d deger vardir",ortustudg);
break;
	case 6:
		ortaalti(dizi1);
break;	
	case 7	:
		refustutoplam=reftoplam(dizi1);
		printf("%.2f",refustutoplam);
break;
	case 8 :
	refortalama=refort(dizi1);
	printf("%.2f",refortalama);
break;		
	case 9 :
break;
}
		
		 
}

