/* 	Anna Lizbeth Barajas Sandoval 222835 
	Halloween Challenge 2024
*/
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int random(int max)
{
	return rand()% max + 1;
}

void solution(vector<int> &total)
{
	int evenCandies = 0;
	int oddCandies = 0;
	for (int i = 0; i < total.size(); i++)
	{
		if (i % 2 == 0)
			evenCandies += total[i];
		else
			oddCandies += total[i];
	}
	
	if (evenCandies < oddCandies)
		cout << oddCandies << endl;
	else if (oddCandies < evenCandies)
		cout << evenCandies << endl;
	else
		cout << "Same candies either way" << endl;
}

int main()
{
	int t, n, c;
	srand(time(NULL));
	t = random(50);
	
	cout << t << endl;
	for (int i = 0; i < t; i++)
	{
		n = random(50); 
		cout << n << endl;
		vector<int> candyPerHouse;
		candyPerHouse.clear();
		for (int j = 0; j < n; j++)
		{
			c = random(100);
			cout << c << " ";
			candyPerHouse.push_back(c); 
		}
		cout << endl;
		solution(candyPerHouse);
	}
	
	return 0;
}