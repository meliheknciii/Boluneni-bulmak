#include <stdio.h>
#include <stdlib.h>

// Projede belirli sayilari boluneni bulmalarini istiyoruz.

int main() {
	int sayi2;
	printf("sayiyi girin: ");
	scanf("%d",&sayi2);
	 // && = ve 
	 // || = veya
	  
	
	if (sayi2%3==0 || sayi2%5==0)
	{
		printf("sayi 3 ve 5 e tam bolunur");
		
	}
	else
	{
		printf("Sayi 3 ve 5 e tam bolunmez");
	}
	return 0;
}
