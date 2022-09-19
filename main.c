#include <stdio.h>

    int main(void){
    	int sayi1,i,bolum;
    	printf("Herhangi bir sayi giriniz : ");
    	scanf("%d",&sayi1);
      
    	for(i = 1; i<=sayi1;i++){
    		bolum=sayi1 % i;
    		if(bolum==0){
    			printf("bu sayı %d ",i," sayısına bölünebilir");
    		}
    	}
    	return 0;
    }
