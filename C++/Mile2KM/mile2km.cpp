#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("��� ���: mile2km �Ÿ�\n");
		return 1;
	}

	printf("�Էµ� �Ÿ��� %gkm�Դϴ�. \n", 1.609 * atof(argv[1]));

	return 0;
}
