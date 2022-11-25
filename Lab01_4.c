// Baekjoon 2490
#include <stdio.h>
int main(){
	int i = 3;
	while (i--){
		int j = 4, sum = 0, n;
		while (j--){
			scanf("%d", &n);
			if (n) sum++;
		}
		if (sum == 3) printf("A\n");
		if (sum == 2) printf("B\n");
		if (sum == 1) printf("C\n");
		if (sum == 0) printf("D\n");
		if (sum == 4) printf("E\n");
	}
}
