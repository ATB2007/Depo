/* BMT 103 4. Hafta  Bu program klavyeden girilen n de�erine g�re [k+k+1.23/k-0.25] i�lemini yapar



Ahmet Taha BE�PARMAK
22034040801
2. �ube
ESEF-B�L-E�T
*/


#include<stdio.h>
int main()
{
float toplam,k;
int n;
printf("Bir Say� Giriniz");
scanf("%d",&n);

for(k=0; k<=n; k++);
{ toplam+=(k*k+1.23)/(k-0.25);

	printf("Toplam%f",toplam);
}
return 0;

}
