/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;
    
    printf("ENTER THE ROWS AND COLuNMS OF MATRIX A:");
    scanf("%d %d",&arows,&acolumns);

printf("ENTER THE elements of matix A:\n");
for(i=0;i<arows;i++)
{
    for(j=0;j<acolumns;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("ENETR THE RWOS AND COLUMNS OF MATRIX B:");
scanf("%d %d", &brows,&bcolumns);

if(brows!=acolumns)
{
    printf("SORRY! WE CAN'T MULTIPLY THE MATRICES A and B:");
}
else
{
    printf("ENTER THE ELEMENTS OF MATIX ANB B:");
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
}
printf("\n");
for(i=0;i<arows;i++)
{
    for(j=0;j<bcolumns;j++)
    {
        for(k=0;k<brows;k++)
        {
            sum+= a[i][k]*b[k][j];
        }
        product[i][j]=sum;
        sum=0;
    }
}
printf("RESULTANT MATRIX\n:");
for(i=0;i<arows;i++)
{
    for(j=0;j<bcolumns;j++)
    {
        printf("%d",product[i][j]);
        printf("\n");
    }
    printf("\n");
}
return 0;

}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   