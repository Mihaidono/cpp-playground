#include <stdio.h>

#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}

int main(int argc, char *argv[])
{
	int number = -13;

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
		return -1;
	}

	// TODO(Gusti): i don't know why this doesn't work, but someone please FIX it.
	// I made it so it accepts multiple arguments and prints for each of them if they're odd or even
	for (int i = 1; i < argc; i++)
	{
		printf("For argument: %s it is:", argv[i]);
		printOddOrEven(atoi(argv[i]));

	}

	return 1;
}