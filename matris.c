#include<stdio.h>

//Kullanýcýdan aldýðý deðerlerle 3*5 matris yazdýrýyor.Ve daha sonra her sütunu ayrý ayrý kendi arasýnda toplayýp yazdýrýyor.
//It prints a 3 * 5 matrix with the values it receives from the user. Then it collects and prints each column separately.

int main(){
	
	int i,j;
	int sum=0;
	
	int array[3][5];
	
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			scanf("%d",&array[i][j]);
	
		}
		
	}
	
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			printf("%d ",array[i][j]);
	
		}
		
		printf("\n");
		
	}
	
	for(j=0;j<5;j++){
		
		for(i=0;i<3;i++){
			
			sum+=array[j][i];
			
			
		}
		
		printf("%d ",sum);
		sum=0;
	}
	
	
	
	
	return 0;
	
	
}


