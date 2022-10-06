//BAEKJOON 1110
#include <stdio.h>
int cycle(int n){
	return (n%10)*10 + (n/10 + n%10)%10;
}
int main(){
	int n, temp1, temp2 = 100, count = 0;
	scanf("%d", &n);
	temp1 = n;
	while (temp2 != n){
		temp2 = cycle(temp1);
		temp1 = temp2;
		count++;
	}
	printf("%d", count);
}