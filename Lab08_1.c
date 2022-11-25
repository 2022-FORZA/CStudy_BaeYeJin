//Baekjoon 10845
#include <stdio.h>

int stack[10000], idx, n;

void push(char o[]){
	int i = 0, num = 0;
	for (; o[i] != ' '; i++);
	for (i++; o[i] != '\0'; i++) num = num*10 + (o[i] - '0');
	stack[idx++] = num;
}

void pop(void){
	if (idx == 0) printf("-1\n");
	else{
		printf("%d\n", stack[0]);
		for (int i = 1; i < idx; i++) stack[i-1] = stack[i];
		idx--;
	}
}

void size(void){
	printf("%d\n", idx);
}

void empty(void){
	if (idx == 0) printf("1\n");
	else printf("0\n");
}

void front(void){
	if (idx == 0) printf("-1\n");
	else printf("%d\n", stack[0]);
}

void back(void){
	if (idx == 0) printf("-1\n");
	else printf("%d\n", stack[idx-1]);
}

int main(){
	scanf("%d\n", &n);
	while (n--){
		char order[15] = {0};
		gets(order);
		if (order[0] == 'p' && order[1] == 'u') push(order);
		else if (order[0] == 'p' && order[1] == 'o') pop();
		else if (order[0] == 's') size();
		else if (order[0] == 'e') empty();
		else if (order[0] == 'f') front();
		else if (order[0] == 'b') back();
	}
}
