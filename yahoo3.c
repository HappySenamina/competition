//yahoo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char *arr){//大文字必須、数字NG
	
	int n = strlen(arr);
	
	int way = 0;
	for(int i = 0; i < n; i++){
		int a = 0;
		int j = 0;
		while(arr[i + j] > '9' || arr[i + j] < '0'){
			if(arr[i + j] <= 'Z' && arr[i + j] >= 'A'){
				a = 1;
				way++;
				j++;
			}else if(arr[i + j] <= 'z' && arr[i + j] >= 'a'){
				j++;
				if(a == 1)
				way++;
			}else{
				break;
				}
			}
	}
	return way;
}

int main(){
	
	char *arr;
	arr = (char *)malloc(sizeof(char));
	
	printf("文字列を入力してください\n");
	scanf("%s", arr);
	printf("%d\n", check(arr));
	
	return 0;
}