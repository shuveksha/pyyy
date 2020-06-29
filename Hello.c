#include <iostream>

int add(int, int); // Function prototype.

int add(int a, int b) {

	return a + b ; 
}


int main() {
	// Define some variables 
	int a, b; 
	int result; 

	printf("Enter the first number"); 
	scanf("%d", &a);

	printf("Enter the second number"); 
	scanf("%d", &b);

	result = add(a, b);

	print("The sum of %d and %d is %d", a, b, result);


	return 0; 
}

