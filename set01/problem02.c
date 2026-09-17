//2. Write a C program to add two numbers.
#include <stdio.h>

void i();
void g();
int a(int x, int y);
void o(int z);

int main()
{
    i();
    g();
    return 0;
}

void i()
{
    printf("Enter two numbers: ");
}

void g()
{
    int x, y, z;

    scanf("%d %d", &x, &y);

    z = a(x, y);

    o(z);
}

int a(int x, int y)
{
    return x + y;
}

void o(int z)
{
    printf("Sum = %d", z);
}

