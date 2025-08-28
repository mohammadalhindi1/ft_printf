#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("%c %s %p %d %i %u %x %X ", 'x', "mohammad alhindi", NULL, 56, 56, 198, 189);	
	fr_prinf("%c %s %p %d %i %u %x %X ", 'x', "mohammad alhindi", NULL, 56, 56, 198, 189);
}
