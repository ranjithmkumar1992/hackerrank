#include<stdio.h>

int main() {
	/*
	 * Go into project properties. Search for C/C++Build -> Settings.
	 * In the Tool Settings tab search for GCC C compiler and then Miscellaneous.
	 * In other flags text box add the -std=c99.
	 */
	for (int i = 0; i < 5; i++) {

		int a;
		printf("\na: %d", a);

		register int b;
		printf("\nb: %d", b);
	}

	register int b;
	printf("\nb last:%d", b);
	return 0;
}
