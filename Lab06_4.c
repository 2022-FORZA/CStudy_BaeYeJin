//Baekjoon 4948
#include <stdio.h>
#include <stdlib.h>
int Eratos(int n1, int n2){
	int cnt = 0;
	int *prime = malloc(sizeof(int)*(n2+1));
	for (int i = 2; i <= n2; i++) prime[i] = 1;
	for (int i = 2; i*i <= n2; i++){
		if (prime[i]){
			for (int j = i*i; j <= n2; j += i) prime[j] = 0;
		}
	}
	for (int i = n1+1; i <= n2; i++){
		if (prime[i]) cnt++;
	}
	return cnt;
}
int main(){
	while (1){
		int n1, n2;
		scanf("%d", &n1);
		if (n1 == 0) break;
		n2 = 2*n1;
		printf("%d\n", Eratos(n1, n2));
	}
}
