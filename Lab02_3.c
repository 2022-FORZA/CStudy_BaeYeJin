// Baekjoon 1075
#include <stdio.h>
int main(){
	int n, f, c = 0;
	scanf("%d %d", &n, &f);
	n = n - (n%100);
	while (n%f != 0){
		n++;
		c++;
	}
	if (c < 10) printf("0%d", c);
	else printf("%d", c);
}
