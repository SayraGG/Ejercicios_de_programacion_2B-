
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;
	int b;
	int temp;
	int vector[11];
	for (a=1;a<=10;a+=1) {
		vector[a] = (rand()%9);
	}
	for (a=1;a<=2;a+=1) {
		for (b=1;b<=2;b+=1) {
			if (vector[b]<vector[b+1]) {
				temp = vector[b];
				vector[b] = vector[b+1];
				vector[b+1] = temp;
			}
		}
	}
	for (a=1;a<=3;a+=1) {
		printf("%i\n",vector[a]);
	}
	return 0;
}

