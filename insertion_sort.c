#include <stdio.h>
#define MAX_SIZE 5

int main (){
	
	int a, ii;
	int list[MAX_SIZE]={5, 6, 2, 7, 9};
	
	for (int i = 1; i<MAX_SIZE; i++){
		
		a = list[i]; //두 번째 배열 저장 
		
		for (ii = i-1; ii>=0 && list[ii]>a; ii--){ //마지막 배열까지 비교 
			list[ii+1] = list[ii]; //바꾸기 
		}
	 	list[ii+1] = a; // 한칸 옮기기 
	}
	int i=0;
	while (i<MAX_SIZE){
		printf("%d\n", list[i]);
		i++;
	}
	
	return 0;
}
