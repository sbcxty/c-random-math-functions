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
	float num1, num2, num3, num4, num5;
	srand(time(NULL));
	
	num1 = randomNumbers();
	squareRoot(num1);
	sinNumber(num1);
	cosNumber(num1);
	roundNumber(num1);
	printf("-------------------------------- \n");
	
	num2 = randomNumbers();
	squareRoot(num2);
	sinNumber(num2);
	cosNumber(num2);
	roundNumber(num2);
	printf("-------------------------------- \n");
	
	num3 = randomNumbers();
	squareRoot(num3);
	sinNumber(num3);
	cosNumber(num3);
	roundNumber(num3);
	printf("--------------------------------  \n");
	
	num4 = randomNumbers();
	squareRoot(num4);
	sinNumber(num4);
	cosNumber(num4);
	roundNumber(num4);
	printf("--------------------------------  \n");
	
	num5 = randomNumbers();
	squareRoot(num5);
	sinNumber(num5);
	cosNumber(num5);
	roundNumber(num5);
	printf("--------------------------------  \n");
	
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