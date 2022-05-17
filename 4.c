#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *p1, *p2;
	char *sonuc;
	
	printf("stringi giriniz:");
	
	scanf("%s", p1);
	
	int uzunluk1 = 0;
	
	while(*p1 != '\0'){
		uzunluk1++;
		p1++;
	}

	printf("stringi giriniz:");
	
	scanf("%s", p2);
	
	int uzunluk2 = 0;
	
	while(*p2 != '\0'){
		uzunluk2++;
	
		p2++;
	}
	
	sonuc = (char*)malloc((uzunluk1 + uzunluk2) * sizeof(char));
	
	
	return 0;
}
