//Baekjoon 2776
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    int n1 = *(int*)a;
    int n2 = *(int*)b;

    if (n1 < n2)  return -1;
    if (n1 > n2)  return 1;
    return 0;
}
int binsearch(int x, int v[], int n){
	int low = 0;
	int high = n-1;
	int mid;
	
	while (low <= high){
		mid = (low + high)/2;
		if (x < v[mid]) high = mid - 1;
		else if (x > v[mid]) low = mid + 1;
		else return 1;
	}
	return 0;
}
int main(){
	int t, n, m;
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		int *a = malloc(sizeof(int)*n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		
		scanf("%d", &m);
		int *b = malloc(sizeof(int)*m);
		for (int i = 0; i < m; i++) scanf("%d", &b[i]);
		
		qsort(a, n, sizeof(int), compare);
		for (int i = 0; i < m; i++) printf("%d\n", binsearch(b[i], a, n));
	}
}
