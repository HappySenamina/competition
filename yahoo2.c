#include <stdio.h>

void fbw(int N){
	
	for(int i = 1; i <= N; i++){
		if(i % 3 == 0)
		printf("Fizz");
		if(i % 5 == 0)
		printf("Buzz");
		if(i % 7 == 0)
		printf("Woof");
		if(i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		printf("%d", i);
		
		printf("\n");
	}
	
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	fbw(N);
	
	return 0;
}