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
	if (sum < 100000 ) {
          if (time < 31 && time > 0)
            sum*=0.9;
        else if (time < 121 && time > 30)
            sum*=1.02;

        else if (time < 241 && time > 120)
            sum*=1.06;
        else
            sum*=1.12;


	}
	else {
         if (time < 31 && time > 0)
            sum*=0.9;
        else if (time < 121 && time > 30)
            sum*=1.03;

        else if (time < 241 && time > 120)
            sum*=1.08;
        else
            sum*=1.15;
	}
	printf("Your input at the time of expiry= %d\n",sum);

	return 0;
}
