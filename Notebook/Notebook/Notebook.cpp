#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include "NoteLib.h"
#include "data.h"
//����ɾ���ġ��顢���桢�˳�

char note[20][1024];
int main()
{
	int flat;
	int num = 0;

	printf("0������ 1������ 2��ɾ�� 3���޸� 4���鿴 5������ 6���˳�\n");
	while (scanf("%d",&flat) != EOF) {
		switch (flat)
		{
		case INIT:
			while (initAccount() == 0) {
				printf("�˻�����ʧ��\n");
			}
				break;
		case ADD:
			printf("�������룬���� '#' ������\n");
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
		printf("0������ 1������ 2��ɾ�� 3���޸� 4���鿴 5������ 6���˳�\n");
	}
	
}