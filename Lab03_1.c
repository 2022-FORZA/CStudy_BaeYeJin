//BAEKJOON 1159
#include <stdio.h>
int main(){
	int n, alpha[26] = {0}, count = 0;
	char name[31];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", name);
		alpha[name[0] - 97]++;
	}
	for (int i = 0; i < 26; i++){
		if (alpha[i] >= 5){
			printf("%c", i + 97);
			count++;
		}
	}
	if (count == 0) printf("PREDAJA");
	return 0;
}