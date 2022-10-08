//BAEKJOON 8958
#include <stdio.h>
int main(){
	int n;
	char ox[81];
	scanf("%d", &n);
	while (n--){
		int cnt = 0, sum = 0;
		scanf("%s", ox);
		for (int i = 0; ox[i] != '\0'; i++){
			if (ox[i] == 'O'){
				cnt++;
				sum += cnt;
			}
			else cnt = 0;
		}
		printf("%d\n", sum);
	}
}
