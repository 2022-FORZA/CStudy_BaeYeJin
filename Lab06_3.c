// Baekjoon 10815
#include <stdio.h>
#include <stdlib.h>

int a[500000], b[500000], n, m;

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int binsearch(int x){
	int low = 0, high = n-1, mid;
	
	while (low <= high){
		mid = (low + high)/2;
		if (x < a[mid]) high = mid - 1;
		else if (x > a[mid]) low = mid + 1;
		else return 1;
	}
	return 0;
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);

	qsort(a, n, 4, compare);
	for (int i = 0; i < m; i++){
		printf("%d ", binsearch(b[i]));
	}
}
