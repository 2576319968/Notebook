
/*
	@function:encryption a string
	@author:wyxTrustYs
	@time:2018-7-9
	@argument:char*
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "NoteLib.h"

void encryption(char *str) {	
	int i = 0;
	while (str[i] != 0) {
		str[i] = ~str[i];
		i++;
	}
}