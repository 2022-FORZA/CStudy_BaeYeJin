//Baekjoon 4344 
#include <stdio.h>
int main(){
	int c;
	scanf("%d", &c);
	while (c--){
		float n, score[1000], avg = 0, cnt = 0;
		scanf("%f", &n);
		for (int i = 0; i < n; i++){
			scanf("%f", &score[i]);
			avg += score[i];
		}
		avg /= n;
		for (int i = 0; i < n; i++){
			if (score[i] > avg) cnt++;
		}
		printf("%.3f%%\n", cnt/n*100 + 1e-6);
	}
}
