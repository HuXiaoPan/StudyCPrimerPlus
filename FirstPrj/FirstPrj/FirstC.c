#include <stdio.h>

int main(void) {
	// 20191008 S1
	//// ���¿�ʼϵͳ��ѧϰC�ɣ���
	//printf("Hello C!!!");
	//getchar();

	// 20191008 S2
	// �򵥵ļ������������
	while (1)
	{
		int num;
		printf("������߳�:\n");
		scanf_s("%d", &num);
		printf("���������Ϊ:%d\n", num*num);
		getchar();
	}

	return 0;
}