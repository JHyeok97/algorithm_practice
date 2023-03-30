#include <stdio.h>

#define MAX 1000001

int Divisor[MAX];
long long Sum[MAX];

int main() {
	int T, N;	

	scanf("%d", &T);

	for(int i = 1; i < MAX; i++){
		for(int j = i; j < MAX; j += i){
			Divisor[j] += i;
		}
	}

	for(int i = 1; i < MAX; i++){
		Sum[i] = Divisor[i] + Sum[i-1];
	}

	while(T--){
		scanf("%d",&N);
		printf("%lld\n", Sum[N]);
	}
}