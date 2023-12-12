#include <iostream>
#include <vector>

typedef struct trail
{
	trail(int x, int y) { time = x; record = y; };
	int time = 0; 
	int record = 0; 
}trail;

int main()
{
	std::vector<trail> trails; 

	trails.push_back(trail(45, 305)); 
	trails.push_back(trail(97, 1062)); 
	trails.push_back(trail(72, 1110)); 
	trails.push_back(trail(95, 1695)); 

	int result = 1; 
	int counter = 0; 
	int val = 0;
	int len = trails.size(); 

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < trails[i].time; j++)
		{
			val = (trails[i].time - j) * j;
			if (val > trails[i].record)
				counter++; 
		}
		result *= counter;
		counter = 0;
	}

	std::cout << result << std::endl;

	return 0; 
}

//Time:        45     97     72     95
//Distance : 305   1062  1110   1695
