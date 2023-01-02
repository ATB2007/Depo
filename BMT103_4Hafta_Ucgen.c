/* BMT 103 4. Hafta  Bu program ekrana # iþaretinden üçgen yazar



Ahmet Taha BEÞPARMAK
22034040801
2. Þube
ESEF-BÝL-EÐT
*/


#include<stdio.h>
int main ()
{

int i,j,sayi;


printf("Bir Sayý Giriniz");
scanf("%d",&sayi);


for(i=1; i<=sayi; i++)
{
    for(j=1; j<=i; j++)
{
    printf("#");
}
printf("\n");

}
}
