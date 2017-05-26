#include <stdio.h>
#include <stdlib.h>

#define N 6

int main(){
	
	int A[N];//m番目までの文字列
	short a[N];//m番目を先頭とする文字列
	int s[N] = {4, 6, 7, 3, 2, 7};
	A[0] = 0;
	a[0] = 0;
	
	for(int i = 1; i < N; i++){
		int j = 0;
		while(i != j){
			if(s[i] > s[j]){
				a[i] = a[i] + a[j] + 1; 
				printf("a[%d]:%d\n", i, a[i]);
			}
			j++;
		}
		A[i] = A[i - 1] + a[i];
		printf("A[%d]:%d\n", i, A[i]);
	}
	return 0;
}
