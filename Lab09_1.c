//Baekjoon 1312
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a, b, n, result;
	scanf("%d %d %d", &a, &b, &n);
	for (int i = 0; i < n; i++){
		a %= b;
		a *= 10;
		result = a/b;
	}
	printf("%d", result);
	return 0;
}
