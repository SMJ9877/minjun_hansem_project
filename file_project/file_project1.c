#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;

	fp = fopen("D:\\minjun_hansem_project\\exampleFile.txt", "wt");
	if (fp == NULL) {
		printf("���� - ����\n");
		return 1;
	}
	fprintf(fp, "hansem");

	fclose(fp);

	printf("�Ϸ�\n");
	return 0;
}