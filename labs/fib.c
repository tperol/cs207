#include <stdint.h>
#include <stdio.h>

int fib(int n){
	if (n == 1){
		return 0;
	}	
	else if (n == 2){
		return 1;
	}
	else {
		return fib(n-1) + fib(n -2);
	}
}
int main () {

	int c = fib(10);

	printf("c=%d\n",c);

}