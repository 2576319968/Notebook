#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#define INIT 0
#define ADD 1
#define DELE 2
#define CHANGE 3
#define CHECK 4
#define SAVE 5
#define QUIT 6
//����ɾ���ġ��顢���桢�˳�

static char account[21];
static char password[21];
static char note[20][500];

int init_Notebook() {
	system("cls");
	char *tmp_password;
	char ch;
	int i;
	printf("�������˺�(���20λ)��\n");
	scanf_s("%s",account,20);
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
	tmp_password = (char *)malloc(21*sizeof(char));
	memset(tmp_password, 0, 21);
	i = 0;
	while ((ch = getch()) != 13) {
		tmp_password[i] = ch;
		putch('*');
		i++;
	}
	printf("%s\n", password);
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
// int add_data() {
// 	
// }
// int delet_data() {}
// void change_data() {}
// int check_data() {}
// void save_file() {}
// void open_file() {}
// int quit() {}

int main()
{
	int flat;
	int num = 0;

	printf("0������ 1������ 2��ɾ�� 3���޸� 4���鿴 5������ 6���˳�\n");
	while (scanf("%d",&flat) != EOF) {
		switch (flat)
		{
		case INIT:
			while (init_Notebook() == 0) {
			}
				break;
// 		case ADD:
// 			add_data(); break;
// 		case DELE:
// 			delet_data(); break;
// 		case CHANGE:
// 			change_data(); break;
// 		case CHECK:
// 			check_data(); break;
// 		case SAVE:
// 			save_file(); break;
// 		case QUIT:
// 			quit(); break;
		default:
			break;
		}
		
	}
	
}