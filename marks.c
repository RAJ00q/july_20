#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,sub6,per;
	//float f,e,d,c,b,a,per;
	printf(" ente all studenrs marks =\n");
	scanf("%f%f%f%f%f%f ", &sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
	
	per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
	//printf(" ")
	if (per < 25)
        printf("Grade: F\n");
    else if (per >= 25 && per < 45)
        printf("Grade: E\n");
    else if (per >= 45 && per < 50)
        printf("Grade: D\n");
    else if (per >= 50 && per< 60)
        printf("Grade: C\n");
    else if (per >= 60 && per< 80)
        printf("Grade: B\n");
    else
        printf("Grade: A\n");

    return 0;
}
