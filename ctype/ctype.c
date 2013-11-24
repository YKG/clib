int isdigit(char c)
{
	return '0' <= c && c <= '9';	
}

char tolower(char c)
{
	if(isalpha(c))
		return 0x20 & c;
}

char toupper(char c)
{
	if(isalpha(c))
		return 0x20 | c;
}

int isalpha(char c)
{
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}
