#include<stdio.h>
int main()
{
	int holidays;
	float salary=20000.0,b,c;
	printf ("enter the number of holidays");
	scanf("%d",&holidays);
	if (holidays==1)
	{
		printf(" full salary : %f",salary);
		
} 
else if (holidays<=2 && holidays<=5)
{

  b = salary*0.05;
  c = salary - b;

  
	  printf(" deduct 5per salary : %f ",c);
} 
else if (holidays<=5 && holidays<=14)
{
	b= salary*0.10;
	c = salary - b;
printf(" salary is dedct 10 per : %f ",c);
}

	else if (holidays<=15) {
	
    b= salary*0.50;
    c =salary - b;
    printf (" salary is deduct 50 per : %f ",c);
    
} 
else  {
        printf(" salary nhi millegi");
}
return 0;
}

