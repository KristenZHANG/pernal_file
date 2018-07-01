#include <stdio.h>

int add_int(int, int,int);
float add_float(float, float);

int add_int(int num1, int num2, int itera){
	int sum=0;
	for(int i=0;i<itera;i++)
	    sum = sum + num1 + num2;
	return sum;
}

float add_float(float num1, float num2){
    return num1 + num2;

}