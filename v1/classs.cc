#include"head.h"
int sum(int a,int b){
	Calc add;
	add.v1 = a;
	add.v2 = b;
	return add.v1+add.v2;
}

int product(int c,int d){
	Calc times;
	times.v1 = c;
	times.v2 = d;
	return times.v1*times.v2;
}

