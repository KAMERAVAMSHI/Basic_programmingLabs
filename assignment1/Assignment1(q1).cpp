
//Reads the length of the side of a square and prints the area
#include<stdio.h>
int main(){
	float side;
	float area;
	printf("enter the magnitude of side:");
	scanf("%f",&side);
	area=side*side;
	printf("area of the square is %f",area);
	return 0;
}

