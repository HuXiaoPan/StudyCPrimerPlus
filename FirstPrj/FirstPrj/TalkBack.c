#include <stdio.h>
#include <string.h>

#define DENSITY 62.4 //人体密度系数（单位：磅/立方米）

int main(void) {
	float weight, volume; //体重，体积
	int size, letters;
	char name[40] = "aa";
	//printf("你叫啥？\n");
	//scanf_s("%s", name);
	printf("%s,你几磅？\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("%s,你的体积是%2.2f立方英尺\n", name, volume);
	printf("你的名字有%d个字\n", letters);
	printf("你用了%d比特来装他\n",size);
	getchar();
	getchar();
	return 0;
}