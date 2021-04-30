#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() { 
	int n;
	scanf("%d", &n);
	int s[100] ;
	int x = 0;
	while (n > 0) {
		s[x] = n % 2;
		x++;
		n = n / 2;
	} 
	int i;
	for (i = 0; i <= x; i++) {
		printf("%d", s[i]);
	}
	return 0;
}
