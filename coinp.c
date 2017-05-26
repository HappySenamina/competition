//コイン両替問題

#include <stdio.h>
#define N 2

int min(int a, int b){
	if(a > b)
	return b;
	else
	return a;
	
}

int main(){
	
	int value[6] = {1, 2, 7, 8, 12, 50};
	int T[N + 1];
	
	T[0] = 0;
	for(int i = 1; i < N + 1; i++)
	T[i] = 10000;
	
	for(int i = 0; i < N + 1; i++){
		for(int j = 0; j < 6; j++){
			if(i - value[j] >= 0){
				T[i] = min(T[i - value[j]] + 1, T[i]);
			}
		}
	}
	
	printf("%d\n", T[N]);
	
	return 0;
}