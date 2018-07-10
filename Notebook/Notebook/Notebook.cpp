#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include "NoteLib.h"
#include "data.h"
//增、删、改、查、保存、退出

char note[20][1024];
int main()
{
	int flat;
	int num = 0;

	printf("0、创建 1、增加 2、删除 3、修改 4、查看 5、保存 6、退出\n");
	while (scanf("%d",&flat) != EOF) {
		switch (flat)
		{
		case INIT:
			while (initAccount() == 0) {
				printf("账户创建失败\n");
			}
				break;
		case ADD:
			printf("正在输入，输入 '#' 结束：\n");
			add_data(note); break;
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
		printf("0、创建 1、增加 2、删除 3、修改 4、查看 5、保存 6、退出\n");
	}
	
}