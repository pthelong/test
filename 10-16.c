#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	char s[100];
	int j = 0;
	while (n > 0) {
		int x;
		x= n % 16;
		if (x < 10) s[j] = (char)(x + 48);
		if (x == 10) s[j] = 'A';  
		if (x == 11) s[j] = 'B';  
		if (x == 12) s[j] = 'C';  
		if (x == 13) s[j] = 'D';  
		if (x == 14) s[j] = 'E';  
		if (x == 15) s[j] = 'F';
		j++;  
		n = n /16;

	}
	int i;
	for (i = j - 1; i >=0; i--) {
		printf("%c", s[i]);
	}
	return 0;
}
