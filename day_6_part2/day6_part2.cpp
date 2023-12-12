#include <iostream>
#include <vector>

typedef struct trail
{
	trail(unsigned long long x, unsigned long long y) { time = x; record = y; };
	unsigned long long time = 0;
	unsigned long long record = 0;
}trail;

int main()
{
	trail rec(45977295, 305106211101695);
	unsigned long long counter = 0;
	unsigned long long val = 0;

	for (int j = 0; j < rec.time; j++)
	{
		val = (rec.time - j) * j;
		if (val > rec.record)
			counter++;
	}

	std::cout << counter << std::endl;

	return 0;
}

//Time:        45     97     72     95
//Distance : 305   1062   1110   1695
