#include <stdio.h>
#include <stdlib.h>
#include <time.h>


   int main(void)
   {
   	int i;
   	int max=45;
   	
   	srand((unsigned)time (NULL));//현재 시간에 맞게 나올 시드를 결정 
   	for(i=0;i<6;i++)
	   {
   	    printf("%d",1+rand()%max);
	   }
   	
   	 
   	return 0;
   }
