#include "revert_string.h"
#include "string.h"

void RevertString(char *str)
{
    int i = 0;
	for(i; i<strlen(str)/2; i++)
	{
		char temp = str[i];
		str[i]=str[strlen(str)-1-i];
		str[strlen(str)-1-i] = temp;
	}
}