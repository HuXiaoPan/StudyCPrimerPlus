#include <stdio.h>

int main(void) {
	// 20191008 S1
	//// 重新开始系统的学习C吧！！
	//printf("Hello C!!!");
	//getchar();

	// 20191008 S2
	// 简单的计算正方形面积
	while (1)
	{
		int num;
		printf("请输入边长:\n");
		scanf_s("%d", &num);
		printf("正方形面积为:%d\n", num*num);
		getchar();
	}

	return 0;
}