#include <stdio.h>

int main() 
{
	int s1,s2,s3;
	printf("Enter the measurement of sides");
	scanf("%d %d %d ,&s1,&s2,&s3");
	if ((s1+s2>s3)&&(s2+s3>s1)&&(s3+s1>s2))
{
    printf("valid traingle");
    if((s1==s2)&&(s2==s3)&&(s3==s1)
{
    printf("traingle is equilateral");
}
else if ((s1==s2)||(s2==s3)||(s2==s3)||(s3==s1))
{
    printf("traingle is isosceles");
}
elseif ((s1!=s2)&&(s2!=s3)&&(s3!=s1))
{
    printf("traingle is scalene");
}
else
{
    printf("not valid traingle");
}
    return 0;
}


