//BAEKJOON 2693
#include <stdio.h>
int compare(const void *n1, const void *n2){
	int a = *(int*)n1;
	int b = *(int*)n2;
	return (a == b) ? 0 : ((a > b) ? 1 : -1);
}
int main(){
	int t, n[10], result[1000];
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		for (int j = 0; j < 10; j++) scanf("%d", &n[j]);
		qsort(n, 10, sizeof(int), compare);
		result[i] = n[7];
	}
	for (int i = 0; i < t; i++) printf("%d\n", result[i]);
}