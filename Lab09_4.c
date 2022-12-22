//Baekjoon 9012
#include <stdio.h>
#include <string.h>

char t[51], b[51];
int main(){
	int n;
	scanf("%d\n", &n);
	
	while (n--){
		int index = -1, judge = 1;

		gets(t);
		
		for (int i = 0; i < strlen(t); i++){
			if (t[i] == '(') b[++index] = t[i];

			else if (t[i] == ')'){
				if (b[index] == '(') index--;
				else judge = 0;
			}
		}

		for (int i = 0; i <= index; i++){
			if (b[i] == '(') judge = 0;
		}

		if (judge) printf("YES\n");
		else printf("NO\n");
	}
}
