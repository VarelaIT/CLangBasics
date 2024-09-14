#include <stdio.h>

int main(){
    int status = 0;

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("The expression: a = b - c + d * e; returns %d \n", a);

    int f = 3;
    float g = 4.5;
    double h = 5.25;
    float sum;

    /* Your code goes here */
    sum = f + g + h;

    printf("The sum of f, g, and h is %f.\n\n", sum);

    printf("Working with arrays:\n\n");
    printf("\tint numbers[10];\n");
    int numbers[10];
    for (int i = 0; i < 10; i++){
        numbers[i] = i + 1;
        printf("\t\tItarating over the array with index %d and value %d\n", i, numbers[i]);
    }

    printf("\nWorking with two dimentional arrays:\n\n");
    /* TODO: declare the 2D array grades here */
		float average;
		int i;
		int j;

		int grades[2][5] = {80, 70, 65, 89, 90, 85, 80, 80, 82, 87};

		/* TODO: complete the for loop with appropriate terminating conditions */
		for (i = 0; i < 2; i++) {
			average = 0;
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}
            average /= 5;

			/* TODO: compute the average marks for subject i */
			printf("\tThe average marks obtained in subject %d is: %.2f\n", i, average);
		}


    return status;
}