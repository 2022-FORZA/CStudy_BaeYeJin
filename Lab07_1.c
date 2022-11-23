// Baekjoon 2312
#include <stdio.h>
int main(){
	int k;
	scanf("%d", &k);
	
	while (k--){
		int n, t, arr[100001] = {0};
		scanf("%d", &n);
		t = n;
		
		for (int i = 2; i <= t; i++){
			while (t%i == 0){
				t /= i;
				arr[i]++;
			}
		}
		for (int i = 2; i <= n; i++){
			if (arr[i]) printf("%d %d\n", i, arr[i]);
		}
	}
}
