//BAEKJOON 2588 
#include <stdio.h>
int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int n3 = n1 * (n2%10);
	int n4 = n1 * ((n2/10)%10);
	int n5 = n1 * (n2/100);
	printf("%d\n%d\n%d\n%d", n3, n4, n5, n1*n2);
	return 0;
}
