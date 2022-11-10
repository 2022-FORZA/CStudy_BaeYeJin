//Baekjoon 1010
#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, m, b = 1;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++){
			b *= m-i;
			b /= 1+i;
		}
		printf("%d\n", b);
	}
}
