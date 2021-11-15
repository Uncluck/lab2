#include<stdio.h>
using namespace std;
int feature1(){

}

int main(int argv,int ** argc)
{
	int a, c;
	scanf("%x", &a);
	printf("%d %o %o", a, a >> 3, ~a);
	scanf("%o", &c);
	printf("%d", a | c);]]
	return 0;
}
