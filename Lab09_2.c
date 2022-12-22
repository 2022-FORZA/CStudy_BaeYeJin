// Baekjoon 14246
#include <stdio.h>
int main(){
	int n, arr[100000];
	long long k, sum = 0, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	scanf("%ld", &k);
	
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			sum += arr[j];
			if (sum > k){
				count += n-j;
				break;
			}
		}
		sum = 0;
	}
	printf("%ld", count);
}
