#include "stdio.h"
#include "ctype.h"
// #include "stdlib.h"

/*
 * -21.... ~ 21...
 */
int atoi(const char *str)
{
	int sign = 1;
	unsigned int n = 0;
	unsigned int max = ~(1 << 31);
	char *p = (char *)str;

	while(isspace(*p++))
		;

	if (*p == '-'){
		p++;
		sign = -1;
		max = 1 << 31;
	}else if (*p == '+'){
		p++;
	}

	// printf("===========\n");
	while(isdigit(*p)){
		if ((n > max / 10)
			 || (n == max / 10 && *p - '0' > max % 10)){
			// printf("n=max: %d\n", (int)max);
			n = (int)max;
			while(isdigit(*p++))
				;
		}else{
			n = n * 10 + (*p - '0');
			// printf("%d\n", n);
			p++;
		}
	}

	return n == max ? n : (int)n * sign;
}

char *x[] = {
	"   3234567890",
	"  12345678900",
	"1234567890000",
	"-1234567890",
	"-431234567890",
};

int main1()
{
	int i = sizeof(x)/sizeof(x[0]);

	while(i--){
		printf("%s\n", x[i]);
		printf("%d\n", atoi(x[i]));
	}
	return 0;
}

int main2()
{
	char buf[1024];

	while(1){
		scanf("%s", buf);
		printf("%d\n", atoi(buf));
	}
	return 0;
}

int main()
{
	return main2();
}
