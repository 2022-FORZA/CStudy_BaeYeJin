// Baekjoon 11655
#include <stdio.h>
int main(){
	char S[100];
	gets(S);
	for (int i = 0; S[i] != '\0'; i++){
		if (S[i] >= 'n') printf("%c", S[i]-13);
		else if (S[i] >= 'a') printf("%c", S[i]+13);
		else if (S[i] >= 'N') printf("%c", S[i]-13);
		else if (S[i] >= 'A') printf("%c", S[i]+13);
		else printf("%c", S[i]);
	}
}
