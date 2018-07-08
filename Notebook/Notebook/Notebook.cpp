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
//增、删、改、查、保存、退出

static char account[21];
static char password[21];
static char note[20][500];

int init_Notebook() {
	system("cls");
	char *tmp_password;
	char ch;
	int i;
	printf("请输入账号(最多20位)：\n");
	scanf_s("%s",account,20);
	getchar();
	printf("请输入密码：\n");
	i = 0;
	while ((ch = getch()) != 13) {
		password[i] = ch;
		putch('*');
		i++;
	}
	printf("%s\n", password);

	printf("确认密码：\n");
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
		printf("两次输入密码不一致\n");
		system("pause");
		memset(password, 0, 21);
		return 0;
	}
	printf("创建成功\n");
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

	printf("0、创建 1、增加 2、删除 3、修改 4、查看 5、保存 6、退出\n");
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