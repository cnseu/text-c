#include <stdio.h>
#include <Windows.h>
int main() {
	int hour=1, min=10, sec=00;
	int i, j, k;
	for(i=hour; i>=0; i--) {
	for(j=min; j>=0; j--) {
	for(k=sec; k>=0; k--) {
	printf("\r%2d:%2d:%2d", i, j, k);
	Sleep(1000);   //1√Î=1000∫¡√Î 
	}
	sec = 59;
	}
	min = 59;
	hour = 59;
	}
	
	exit(0);
}
