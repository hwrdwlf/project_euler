#include <stdio.h>

// Problem 1 for Project Euler
// https://projecteuler.net/problem=1
int main(int argc, char** argv) {
	int sum = 0;
	for(int i = 0; i < 1000; i++) {
		if( i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("Ans: %d\n", sum);
	return 0;
}