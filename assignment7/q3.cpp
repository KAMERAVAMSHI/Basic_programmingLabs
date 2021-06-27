#include <stdio.h>

int main()
{
int a[50][50], transpose[50][50], x, y,i=0,j=0;
printf("Enter rows and columns: ");
scanf("%i %i", &x, &y);

printf("\nEnter matrix elements:\n");
for (i = 0; i < x; ++i)
{
for (j = 0; j < y; ++j)
{
printf("Enter element a%i%i: ", i + 1, j + 1);
scanf("%d", &a[i][j]);
}
}

printf("\nEntered matrix: \n");
for (i = 0; i < x; ++i)
{
for (j = 0; j < y; ++j)
{
printf("%d ", a[i][j]);
if (j == y - 1)
printf("\n");
}
}

for (i = 0; i < x; ++i){
for (j = 0; j < y; ++j)
{
transpose[j][i] = a[i][j];
}
}

printf("\nTranspose matrix: \n");
for (i = 0; i < y; ++i)
{
for (j = 0; j < x; ++j)
{
printf("%d ", transpose[i][j]);
if (j == x - 1)
printf("\n");
}
}

}

