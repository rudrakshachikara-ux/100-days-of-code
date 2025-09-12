#include <stdio.h>
int main() {
	// your code goes here
     int P,R,T;
     float SI;
     printf("Enter the value of Principal\n");
     scanf("%d", &P);
     printf("Enter the value of Rate\n");
     scanf("%d", &R);
     printf("Enter the value of Time\n");
     scanf("%d", &T);
     SI = (P * R * T)/100;
     printf("Simple interest is %f" , SI);
     
     return 0;
}
      
       
