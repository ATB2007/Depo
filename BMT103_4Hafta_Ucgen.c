/* BMT 103 4. Hafta  Bu program ekrana # i�aretinden ��gen yazar



Ahmet Taha BE�PARMAK
22034040801
2. �ube
ESEF-B�L-E�T
*/


#include<stdio.h>
int main ()
{

int i,j,sayi;


printf("Bir Say� Giriniz");
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
