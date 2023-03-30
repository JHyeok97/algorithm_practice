#include <stdio.h>

int arr[1000001];

int main() {
	int n;

	for(int i=2;i<1000001;i++){
		arr[i] = i;
	}
	
	for(int i=2;i<1000001;i++){
		if(arr[i]==0) continue;

		for(int j=2*i;j<1000001;j+=i){
			arr[j] = 0;
		}
	}

	while(scanf("%d", &n)){
		int flag = 0;

		if(n==0) break;
		
		for(int i=3;i<n;i+=2){
			if(arr[i]==i&&arr[n-i]==n-i){
				printf("%d = %d + %d\n",n,arr[i],n - arr[i]);
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("Goldbach's conjecture is wrong.\n");

	}
}