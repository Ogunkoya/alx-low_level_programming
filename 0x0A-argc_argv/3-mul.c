#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the multiplication of two numbers, followed by a new line.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: If the program receives two arguments - 0.
* If the program does not receive two arguments - 1.
*/

int main(int argc, char *argv[])
{
int first_number, second_number, product;

if (argc != 3)
{
printf("Error\n");
return (1);
}
first_number = atoi(argv[1]);
second_number = atoi(argv[2]);
product = first_number * second_number;
printf("%d\n", product);
return (0);
}
