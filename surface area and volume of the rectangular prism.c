/*The code calculates the surface area and volume of the rectangular prism */

#include <stdio.h>
	int main () {

	float length1;
	float length2;
	float height;
	float area;
	float volume;

	printf("Please enter the first length of base rectangle:");
	scanf("%f" , &length1);
	printf("Please enter the second length of base rectangle:");
	scanf("%f" , &length2);
	printf("Please enter the height length:");
	scanf("%f" , &height);

	area= (2*length1*length2)+(2*length1*height)+(2*length2*height);
	volume= length1*length2*height;
	
	printf("The surface area of rectangular prism is %.2f\n" ,area);
	printf("The volume of rectangular prism is %.2f" ,volume);
	
	return 0;
}
