#include <iostream>
#include <vector>

typedef struct trail
{
	trail(int x, int y) { time = x; record = y; };
	long long int time = 0;
	long long int record = 0;
}trail;

int main()
{
	trail rec(45977295, 305106211101695); 
	int counter = 0;
	int val = 0;

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
//Distance : 305   1062  1110   1695
