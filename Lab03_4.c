//BAEKJOON 13241
#include <stdio.h>
int main(){
	long long a, b, gcd, lcm;
	scanf("%lld %lld", &a, &b);
	for (long long i = 1; i <= a && i <= b; i++){
		if (a%i == 0 && b%i == 0) gcd = i;	//the greatest common divisor
	}
	lcm = (a*b)/gcd;	//the least common multiple
	printf("%lld", lcm);
}