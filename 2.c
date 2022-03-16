//16.03.2022 LAB6 2.Soru


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char *cptr;
	cptr = (char*)malloc(14*sizeof(char));
	

	char adsoyad[14]={'m','e','h','m','e','t',' ','k','o','r','k','u','t','\0'};
	
	strcpy(cptr,adsoyad);
	printf("%s",cptr);
	
	return 0;
}
