#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "NoteLib.h"
#include "data.h"

int initAccount() {
	system("cls");
	char *tmp_password;
	char ch;
	int i;
	printf("�������˺�(���20λ)��\n");
	scanf_s("%s", account, 20);
	getchar();
	printf("���������룺\n");
	i = 0;
	while ((ch = getch()) != 13) {
		password[i] = ch;
		putch('*');
		i++;
	}
	printf("%s\n", password);

	printf("ȷ�����룺\n");
	tmp_password = (char *)malloc(21 * sizeof(char));
	memset(tmp_password, 0, 21);
	i = 0;
	while ((ch = getch()) != 13 ) {
		if (ch != 8) {
			tmp_password[i] = ch;
			putch('*');
			i++;
		}
		else if (ch == 8) {
			tmp_password[i - 1] = 0;
			printf("\b \b");
			i--;
		}
		
	}
	printf("%s\n", tmp_password);
	//	scanf_s("%s", tmp_password,21);
	if (strcmp(password, tmp_password) != 0) {
		printf("�����������벻һ��\n");
		system("pause");
		memset(password, 0, 21);
		return 0;
	}
	printf("�����ɹ�\n");
	return 1;
}