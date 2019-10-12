#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//함수정의 

int sumTwo(int a,int b)
{
	int output;
	output=a+b;
	return output;
}

int square(int n)
{
	return(n*n);
}

int get_max(int a, int b)
{
	if(a>b)return(a);
	else return(b);
}
	
//함수호출	
int main(int argc, char *argv[]) {
	
	int x,y;
	int output;
	
	x=2,y=5;
	
	output=sumTwo(x,y);
	printf("sumTwo:%i\n",output);
	printf("square:%d\n",square(x));
	printf("get_max:%d\n",get_max(x,y));
	

	return 0;
}
