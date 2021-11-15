#include<stdio.h>
using namespace std;
int feature1(){

}

int main(int argv,int ** argc)
{
	int a, b;
	scanf("%x", &a);
	printf("%d %o %o", a, a >> 3, ~a);
	scanf("%o", &b);
	printf("%d", a | b);]]
	return 0;
}
