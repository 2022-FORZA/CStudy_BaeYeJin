//Baekjoon 5622
#include <stdio.h>
#include <string.h>
int main(){
	int time = 0;
	char word[16];
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++){
		if ('A' <= word[i] && word[i] <= 'C') time += 3;
		if ('D' <= word[i] && word[i] <= 'F') time += 4;
		if ('G' <= word[i] && word[i] <= 'I') time += 5;
		if ('J' <= word[i] && word[i] <= 'L') time += 6;
		if ('M' <= word[i] && word[i] <= 'O') time += 7;
		if ('P' <= word[i] && word[i] <= 'S') time += 8;
		if ('T' <= word[i] && word[i] <= 'V') time += 9;
		if ('W' <= word[i] && word[i] <= 'Z') time += 10;
	}
	printf("%d", time);
}
