#include<iostream>
#include"dice.h"
#include<cstdlib>
using namespace std;

int Dice::roll()
{
	result = rand() % 6 + 1;
	return result;
}
float Dice::average(Dice mydice1, int numRolls)
{   
	int i,sum=0,temp;
	for (i = 0; i < numRolls; i++)
	{
		temp = mydice1.roll;
		sum = sum + temp;

	}
	return (sum / numRolls);
}
float Dice::average(int arr[], int numInt)
{
	int i,sum=0;
	for( i = 0; i < numInt; i++)
	{
		sum = sum + arr[i];
	}
	return (sum / numInt);
}

