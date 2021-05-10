
#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(void)
{
	char digit;

	printf("Enter parentheses and/or braces: ");

	for (;(digit = getchar()) != '\n';)
	{
		if (digit == '(' || digit == '{')
		{
			push(digit);
		}
		else if (digit == ')' && pop() != '(')
		{

		}
		else if (digit == '}' && pop() != '{')
		{

		}
	}

	if (is_empty() == true)
	{
		printf("Parentheses\\braces are nested properly");
	}
	else
		printf("Parentheses\\braces are  NOT nested properly");

	getch();
	return 0;
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)                
{                             
	if (is_empty())
		stack_underflow();
	else
		return contents[top--];
}

void stack_overflow()
{
	printf("Too many characters\n\n");
	getch();
	exit(0);
}

void stack_underflow()
{
	printf("Too many right parentheses/braces\n\n");
	getch();
	exit(0);
}




