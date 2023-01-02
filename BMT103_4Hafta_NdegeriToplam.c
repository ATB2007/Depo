/* BMT 103 4. Hafta  Bu program klavyeden girilen n deðerine göre [k+k+1.23/k-0.25] iþlemini yapar



Ahmet Taha BEÞPARMAK
22034040801
2. Þube
ESEF-BÝL-EÐT
*/


#include<stdio.h>
int main()
{
float toplam,k;
int n;
printf("Bir Sayý Giriniz");
scanf("%d",&n);

for(k=0; k<=n; k++);
{ toplam+=(k*k+1.23)/(k-0.25);

	printf("Toplam%f",toplam);
}
return 0;

}
