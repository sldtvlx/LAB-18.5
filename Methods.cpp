#include "Header.h"
#include <math.h>
Pair::Pair(int f, int s)
{
	first = f;
	second = s;
}

void Pair::change_first(int f)
{
	first = f;
}

void Pair::change_second(int s)
{
	second = s;
}

int Pair::umnozhenie()
{
	return first * second;
}

float Pair::gip()
{
	return sqrt((first * first) + (second * second));
}