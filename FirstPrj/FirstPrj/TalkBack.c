#include <stdio.h>
#include <string.h>

#define DENSITY 62.4 //�����ܶ�ϵ������λ����/�����ף�

int main(void) {
	float weight, volume; //���أ����
	int size, letters;
	char name[40] = "aa";
	//printf("���ɶ��\n");
	//scanf_s("%s", name);
	printf("%s,�㼸����\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("%s,��������%2.2f����Ӣ��\n", name, volume);
	printf("���������%d����\n", letters);
	printf("������%d������װ��\n",size);
	getchar();
	getchar();
	return 0;
}