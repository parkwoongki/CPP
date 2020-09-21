#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("사용 방법: mile2km 거리\n");
		return 1;
	}

	printf("입력된 거리는 %gkm입니다. \n", 1.609 * atof(argv[1]));

	return 0;
}
