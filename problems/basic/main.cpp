#include <iostream>

//#define INPUT_FILE
//#define OUTPUT_FILE

int main()
{
	int total_count;

	#ifdef INPUT_FILE
	FILE *fp_in = fopen("input.txt", r+);
	#endif

	#ifdef OUTPUT_FILE
	FILE *fp_out = fopen("output.txt", w+);
	#endif

	#ifdef INPUT_FILE
	fscanf(fp_in, "%d", &total_count);
	#else
	scanf("%d", &total_count);
	#endif

	while (total_count--) {
		int input;

		#ifdef INPUT_FILE
		fscanf(fp_in, "%d", &input);
		#else
		scanf("%d", &input);
		#endif

		for (int i=0; i<input; i++) {
			#ifdef OUTPUT_FILE
			fprintf(fp_out, "HELLO!\n");
			#else
			printf("HELLO!\n");
			#endif
		}
	}

	return 0;
}
