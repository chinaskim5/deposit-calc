#include <stdio.h>


int main(){
	int sum,time;
	printf("deposit Amount\n");
	scanf("%d",&sum);
	printf("For how long ?\n");
	scanf("%d",&time);
	if ( sum < 1000 && time > 365 ) {
		printf("The minimum deposit amount in 1000\nThe term does not exceed 365 days\n");
		return 0;
	}
	if (sum < 1000 ) {
		printf("The minimum deposit amount in 1000\n");
		return 0;
	}
	if (time > 365) {
		printf("The term does not exceed 365 days\n");
		return 0;
	}

	return 0;
}
