#include<stdio.h>
using namespace std;
int main(int argv, char **argc)
{
	int i, k, ans, a;
	scanf("%d", &i);
	k = (i >= -4 && i <= 1)? 1: 0;
	printf("%d", k);
	scanf("%d", &a);
	printf("%d", (a >> 15) % 2);
}
