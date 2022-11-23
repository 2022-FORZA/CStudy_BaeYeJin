//Baekjoon 2563
#include <stdio.h>
int n, p[100][100], x, y, sum;
int main(){
	scanf("%d", &n);
	
	while (n--){
		scanf("%d %d", &x, &y);
		for (int i = x; i < x+10; i++){
			for (int j = y; j < y+10; j++){
				if (p[i][j] == 0){
					sum++;
					p[i][j] = 1;
				}
			}
		}
	}
	
	printf("%d", sum);
}
