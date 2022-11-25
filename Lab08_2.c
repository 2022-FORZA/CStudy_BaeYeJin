// Baekjoon 9693
#include <stdio.h>
#include <math.h>
int primefact(int i, int p){
	int result = 0;
	while (i%p == 0){
		result++;
		i /= p;
	}
	return result;
}
int main(){
	long long n;
	int x = 0;
	
	while (1){
		int cnt2 = 0, cnt5 = 0, m = 0;
		
		scanf("%lld", &n);
		if (n == 0) return 0;
		
		for (int i = 2; i <= n; i++){
			if (i%2 == 0) cnt2 += primefact(i, 2);
			if (i%5 == 0) cnt5 += primefact(i, 5);
		}
		while (cnt2-- > 0 && cnt5-- > 0) m++;
		printf("Case #%d: %d\n", ++x, m);
	}
}
