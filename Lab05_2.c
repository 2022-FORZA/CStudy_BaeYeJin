//Baekjoon 2577
#include <stdio.h>
int main(){
	int r, i, num[10] = {0};
	scanf("%d %d %d", &a, &b, &c);
	r = a*b*c;
	while (r > 0){
		i = r%10;
		num[i]++;
		r /= 10;
	}
	for (i = 0; i < 10; i++) printf("%d\n", num[i]);
}
