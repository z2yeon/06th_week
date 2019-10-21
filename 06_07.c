#include <stdio.h>
#include <stdlib.h>

   int factorial(int);
   int combination(int,int);
   
   int main(void)
   {
   	int n,r;
   	
   	printf("input n and r: ");
   	scanf("%d%d",&n,&r);
   	
   	printf("%d\n",combination(n,r));
   	
    return combination(n,r);
   }
   
     //팩토리얼 함수 
   int factorial(int n)
   {
	int fac=1,i;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return (fac);
   }
   
   //콤비네이션 함수
    int combination(int n,int r)
   {
   	int comb;
   	comb=factorial(n)/(factorial(n-r)*factorial(r));
   	return (comb);
   }
   
    

   



