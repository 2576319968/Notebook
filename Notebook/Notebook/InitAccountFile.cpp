
/*
	@function:initAccountFile
	@Descreaption:Creat new file in data folder
	@author:wyxTrustYs
	@argument:char* char*
	@time:2018-7-9
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "NoteLib.h"

int InitAccountFile(char *acc,char *passw) {
	FILE *file = NULL;
	char addr[100] = "D:\\data\\";
	encryption(passw);

	strcat(addr, acc);
	if ((file = fopen(addr, "wb+")) == NULL) {
		printf("打开文件失败\n");
		return 0;
	}
	fputs(passw, file);
	fputc('\n', file);
	fclose(file);
	return 1;
}