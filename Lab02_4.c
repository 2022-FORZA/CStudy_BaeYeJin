// Baekjoon 2476
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, result = 0;
	scanf("%d", &n);
	int *player = malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++){
		int a, b, c, max = 0;
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == b && b == c && c == a) player[i] = 10000 + 1000*a;
		else if (a == b && c != a) player[i] = 1000 + 100*a;
		else if (b == c && a != b) player[i] = 1000 + 100*b;
		else if (c == a && b != c) player[i] = 1000 + 100*c;
		else{
			if (max < a) max = a;
			if (max < b) max = b;
			if (max < c) max = c;
			player[i] = 100*max;
		}
	}
	for (int i = 0; i < n; i++){
		if (result < player[i]) result = player[i];
	}
	printf("%d", result);
}
