// Baekjoon 2559
#include <stdio.h>
int n, k, t[100000], sum, max = -99999999;
int main(){
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &t[i]);
		if (i < k) sum += t[i];
	}
	for (int i = 0; i <= n-k; i++){
		if (max < sum) max = sum;
		sum += t[i+k];
		sum -= t[i];
	}
	printf("%d", max);
}
