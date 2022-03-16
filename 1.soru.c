//16.03.2022 LAB 6:Hafta 1.Soru

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int x;
	
	printf("Diziniz kac elemanli olsun, giriniz...\n");
	scanf("%d",&x);
	
	
	int *p;
	p=(int*)calloc(x, sizeof(int));
	
	int i;
	
	printf("Elamanlari doldurunuz...\n");
	
	for(i=0; i < x; i++) {
		scanf("%d",&p[i]); //string hariç & gerekli.
	}
	
	// en buyuk bulmayý ogren.
	
	int eb=0;
	
	while(x > 0) {
		if(p[x] > eb){
			eb=p[x];
		}
		x--;
	}
	
	printf("En buyuk sayi:%d",eb);
	
	
	
	return 0;
}
