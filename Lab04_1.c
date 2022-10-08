//BAEKJOON 4539
#include <stdio.h>
int main(){
	int n, x;
	scanf("%d", &n);
	while (n--){
		scanf("%d", &x);
		int t = 1;
		while (x > t*10){
			x += 5*t;
			t *= 10;
			x -= x%t;
		}
		printf("%d\n", x);
	}
}
