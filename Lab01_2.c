// Baekjoon 10988
#include <stdio.h>
#include <string.h>
int main(){
	int len, judge = 1;
	char W[101] = {0};
	scanf("%s", W);
	
	len = strlen(W);
	for (int i = 0; i < len/2; i++){
		if (W[i] != W[len-1-i]) judge = 0;
	}

	if (judge) printf("1");
	else printf("0");
	return 0;
}
