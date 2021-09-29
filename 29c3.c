#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size; 

	if (chest <= 90) {
		size = 'S';
	}
	// 90 < chest <= 100
	else if (chest > 90 && chest <= 100) {
		size = 'M';

	else {
		size'L';
	}
	printf("chest???? %d? ?? ?? ???? %c???. \n", chest, size);

	
	
}