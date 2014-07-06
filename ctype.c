#include "ctype.h"

int isdigit(int c)
{
	return '0' <= c && c <= '9';	
}

int tolower(int c)
{
	if(isalpha(c))
		return 0x20 & c;
}

int toupper(int c)
{
	if(isalpha(c))
		return 0x20 | c;
}

int isalpha(int c)
{
	return ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z');
}


int isalnum(int c)
{
	return ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9');
}


int iscntrl(int c)
{
	return (0x00 <= c && c <= 0x1F) || c == 0x7F;
}

/*
 *   09  '\t'
 *   0A  '\n'
 *   0B  '\v'  Windows: 男性符号
 *               Linux: 垂直制表符，即跳到下一行并与上一行的结尾对齐
 *   0C  '\f'  Windows: 男性符号
 *               Linux: 翻页符号。功能类似于清屏
 *   0D  '\r'
 *   20  ' '
 */
int isspace(int c)
{
	return c == 0x20 || (0x09 <= c && c <= 0x0d);
}

int isxdigit(int c)
{
	return ('0' <= c && c <= '9')
	 	|| ('a' <= c && c <= 'f')
	 	|| ('A' <= c && c <= 'F');
}

int ispunct(int c)
{
	return (0x21 <= c && c <= 0x2F) 
		|| (0x3A <= c && c <= 0x40)
		|| (0x5B <= c && c <= 0x60)
		|| (0x7B <= c && c <= 0x7E);
}

int isgraph()
{
	return 0x21 <= c && c <= 0x7E;
}

int isprint()
{
	return 0x20 <= c && c <= 0x7E;
}

// /*
//  * C++11 only
//  */
// int isblank(int c)
// {
// 	return c == '\t' || c == ' ';
// }
