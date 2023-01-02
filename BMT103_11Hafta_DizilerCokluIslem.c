/* Bu Program Yapýlan Seçimlere Göre Bir Dizide Aþaðýda Menüde Belirtilen Ýþlemleri Yapar*/

/* 
Ahmet Taha BEÞPARMAK
22034040801
ESEF - BÝL_EÐT
*/

#include<stdio.h>

float siralamadizi(float siralama[5]) //Küçükten büyüðe doðru sýralama fonk.
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

float ikincieb(float ikincib[5]) //dizideki ikinci en büyük sayýyý bulan fonk.
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

float buyuk(float enbuyuk[5]) // dizideki en büyük sayýyý bulan fonk.
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
float kucuk(float enkucuk[5]) // dizideki en küçük sayýyý bulan fonk.
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
float ortalama(float ortalama[5]) // dizideki sayýlarýn ortalamasýný bulan fonk.
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

float ortaalti(float ortaalti[5]) //dizideki sayýlarýn ortalamasýnda daha küçük olanlarý gösteren fonk.
{
	int i,j;
	float toplam=0;
	for(i=1;i<=5;i++)
{
toplam=toplam+ortaalti[i];
}
toplam=toplam/5;
printf("Dizinin Ortalamasý: %.2f\n",toplam);
for(j=1;j<=5;j++)
{
	if(ortaalti[j]<toplam)
printf("%.2f\t",ortaalti[j]);

}

	return ortaalti[j];
}


float reftoplam(float reftop[5]) // Girilen sayýdan dizi içinde daha büyük olan sayýlarýn toplamýný gösteren fonk.
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

float refort(float reftop[5]) // Girilen sayýdan dizi içinde daha büyük olan sayýlarýn toplamýný gösteren fonk.
{
	int  j,sayac=0,sayi2;
	float toplam=0;

	printf("Paremetre Deðeri Giriniz\n");
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
	printf("Dizinin %d inci Elemanýný Giriniz:\n",i);
	scanf("%f",&dizi1[i]);
}
printf("///Dizi///\n");
for(i=1;i<=5;i++)
{
	printf("%.2f,\t",dizi1[i]);
}

//Menü
printf("\n Lütfen yapmak istediðiniz iþlemi giriniz");
printf("1-Dizinizi Küçükten Büyüðe Doðru Sýralanýr\n");
printf("2-Dizinizdeki En Büyük Elemaný Gösterir\n");
printf("3-Dizinizdeki En Küçük Elemaný Gösterir\n");
printf("4-Dizinin Ýkinci En Büyük Sayýsýný Seçer\n");
printf("5-Dizinin Ortalama Deðerinden Daha Büyük Olan Deðerlerin Sayýsýný Gösterir\n");
printf("6-Dizinin Ortalama Deðerinden Daha Küçük Elemanlarý Gösterir\n");
printf("7-Parametre Olarak Girilen Deðerden Dizi Ýçindeki Daha Büyük Olan Sayýlarýn Toplamýný Gösterir\n");
printf("8-Parametre Olarak Girilen Degerden Dizi Ýçindeki Daha Büyük Olan Sayýlarýn Ortalamasýný Gösterir\n");
printf("9-Çýkmak icin 9 a Basýnýz\n");
printf("Seçiminiz\t");
scanf("%d",&secim);

switch(secim) //Menü Seçim
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

