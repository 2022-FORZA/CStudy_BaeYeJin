// Baekjoon 2979
#include <stdio.h>
int M[4], T[100], x, y, sum;
int main(){
	scanf("%d %d %d", &M[1], &M[2], &M[3]);
	for (int i = 0; i < 3; i++){
		scanf("%d %d", &x, &y);
		for (int j = x; j < y; j++) T[j]++;
	}
	for (int i = 0; i < 100; i++){
		sum += M[T[i]]*T[i];
	}
	printf("%d", sum);
}
