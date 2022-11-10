//Baekjoon 3052
#include <stdio.h>
int main(){
	int mod[42] = {0}, input, cnt = 0;	
	for (int i = 0; i < 10; i++){
		scanf("%d", &input);
		mod[input%42]++;
	}
	for (int i = 0; i < 42; i++){
		if (mod[i]) cnt++;
	}
	printf("%d", cnt);
}
