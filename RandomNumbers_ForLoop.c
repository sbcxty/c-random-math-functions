#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// declaration of functions
float randomNumbers();
float squareRoot(float a);
float cosNumber(float b);
float sinNumber(float c);
float roundNumber(float d);


void main() {
	float num, iteration;
	srand(time(NULL));
	
	for(int i = 1; i < 6; i++) {
		iteration = i;
		printf("Iteration: %d \n", i);
		num = randomNumbers();
		squareRoot(num);
		sinNumber(num);
		cosNumber(num);
		roundNumber(num);
		printf("--------------------------------  \n");
	}
}

float randomNumbers() {
	// Avoid putting an srand in an isolated function since it runs on the same second; hence, giving you the same random number
	float random = (rand() / (float)RAND_MAX) * 100.0f;
	printf("Random Number: %.2f \n", random);
	return random;
	
}

float squareRoot(float a) {
	float squared = sqrtf(a);
    printf("Square root: %.2f \n", squared);
    return squared;
}

float cosNumber(float b) {
	float cosine = cosf(b);
	printf("Cosine: %.2f \n", cosine);
	return cosine;
}

float  sinNumber(float c) {
	float sine = sinf(c);
	printf("Sine: %.2f \n", sine);
	return sine;
}

float roundNumber(float d) {
	float rounded = roundf(d);
	printf("Rounded: %.2f \n", rounded);
	return rounded;
}