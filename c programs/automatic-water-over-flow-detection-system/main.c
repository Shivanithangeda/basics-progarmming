/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>


// function to calculate the volume of tank 
float volume(int radius, int height) 
{ 
	return ((22 / 7) * radius * radius * height); 
} 

// function to print overflow / filled / 
// underflow accordingly 
void check_and_print(float required_time, 
					float present_time) 
{ 
	if (required_time < present_time)
	{
	    
	  printf("\n       ******** OVERFLOW ********");
	  for(int i=0;i<7;i++)
	  {
	      printf("%c",'\0'+7);
	  }
	}   
	else if (required_time > present_time)
	{
	    printf("\n     ******UNDER FLOW  *******");
	}
	else
		printf("\n      *******Filled*********");
} 

// driver function 
int main() 
{ 
	int radius, // radius of the tank 
		height, // height of the tank 
		rate_of_flow;// rate of flow of water
			float present_time ; // time given
			printf("\n       ******************************************      ");
			printf("\n    ////// WATER OVER FLOW DETECTON SYSTEM //////       ");
			printf("\n--------------------------------------------------------------------");
		printf("\n               ENTER THE RADIUS OF THE TANK:");
		scanf("%d",&radius);
		printf("\n               ENTER TH EHEIGHT OF TANK:");
		scanf("%d",&height);
		printf("\n               ENTR THE RATE OF FLOW:");
		scanf("%d",&rate_of_flow);
          printf("\n            ENTER THE TIME TO FILL:");
          scanf("%f",&present_time);
          	printf("\n--------------------------------------------------------------------"); 	
	// calculate the required time 
	float required_time = volume(radius, height) / 
									rate_of_flow; 
	
	// printing the result 
	check_and_print(required_time, present_time); 
	return 0; 
} 
 

