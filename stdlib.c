#include "stdlib.h"
/*
 * Test passed.
 *
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

    while(isdigit(*p)){
        if ((n > max / 10)
             || (n == max / 10 && *p - '0' > max % 10)){
            n = (int)max;
            while(isdigit(*p++))
                ;
        }else{
            n = n * 10 + (*p - '0');
            p++;
        }
    }

    return n == max ? n : (int)n * sign;
}


/*
 * Take care: +/-, 科学记数法(e)
 */
double atof(const char *str)
{
    int sign = 1;
    char *p = str;
    int intpart, fracpart, exppart;

    while(isspace(*p)){
    	p++;
    }

    if(*p == '-')
    {
    	sign = -1;
    	p++;
    }else if(*p == '+'){
    	p++;
    }

    if (isdigit(*p))
    {
    	intpart = atoi(p);
    	while(isdigit(*p))
    		p++;
    }else{
    	intpart = 0;
    }

    if (*p == '.')
    {
    	fracpart = atoi(++p);
    	while(isdigit(*p))
    		p++;
    }

    if(*p == 'e' || *p == 'E')
    {
    	p++;
    	exppart = atoi(p);
    }
    
}

int abs(int n)
{
	return n < 0 ? -n : n;
}
