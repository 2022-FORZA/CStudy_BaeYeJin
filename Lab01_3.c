// Baekjoon 1259
#include <stdio.h>
#include <string.h>
int main(){
    int len, judge = 1;
    char num[6] = {1};
    while (1){
        scanf("%s", num);
        if (num[0] == '0') break;
        len = strlen(num);
        judge = 1;
        for (int i = 0; i < len/2 + 1; i++){
            if (num[i] == num[len-1]){
                len--;
            }
            else{
                judge = 0;
                break;
            }
        }

        if (judge) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
