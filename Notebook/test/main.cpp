#include <stdio.h>
#include <conio.h>

int main() {
	extern int a;
	char ch = getch();
	printf("%d ", a);
	return 0;
}