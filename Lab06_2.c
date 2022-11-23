//Baekjoon 1316
#include <stdio.h>
int main(){
	int n, cnt;
	char c;
	scanf("%d\n", &n);
	cnt = n;
	while (n--){
		char word[102] = {0};
		int alpha[26] = {0}, i = 1;
		while ((c=getchar()) != '\n'){
			if (word[i-1] != c){
				word[i] = c;
				i++;
			}
		}
		for (i = 1; word[i] != '\0'; i++){
			if (alpha[word[i]-'a'] == 0) alpha[word[i]-'a']++;
			else{
				cnt--;
				break;
			}
		}
	}
	printf("%d", cnt);
}
