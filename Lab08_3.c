// Baekjoon 1436
#include <stdio.h>
int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 666; ; i++){
		int k = i, six_cnt = 0;
		while (k > 0){
			if (k%10 == 6) six_cnt++;
			else six_cnt = 0;
			k /= 10;
			if (six_cnt == 3){
				cnt++;
				break;
			}
		}
		if (cnt == n){
			printf("%d", i);
			return 0;
		}
	}
}
