/* 	Anna Lizbeth Barajas Sandoval 222835 
	Halloween Challenge 2024
	Nota: Se modifico la notacion de los inputs y outputs 
	para tener un mejor entendimiento del programa
*/
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

//funcion para asignar los numeros aleatorios de las pruebas, las casas y los dulces
int random(int max)
{
	return rand()% max + 1;
}

//funcion que crea la solucion para cada casa
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
		cout << "Max Candies: " << oddCandies << endl;
	else if (oddCandies < evenCandies)
		cout << "Max Candies: " << evenCandies << endl;
	else
		cout << "Same candies either way" << endl;	// poco probable pero puede que ambos casos den lo mismo
}

int main()
{
	int tests, houses, candies;
	srand(time(NULL));
	tests = random(50);
	
	cout << "Number of tests: " << tests << endl << "**********" << endl;
	for (int i = 0; i < tests; i++)
	{
		cout << "Test #" << i+1 << endl;
		houses = random(50); 
		cout << "Houses: " << houses << endl;
		vector<int> candyPerHouse; // vector para almacenar los dulces
		candyPerHouse.clear(); //para vaciar el vector
		for (int j = 0; j < houses; j++)
		{
			candies = random(100);
			cout << candies << " ";
			candyPerHouse.push_back(candies); //se almacenan en el vector
		}
		cout << endl;
		solution(candyPerHouse); //se manda vector 
		cout << endl;
	}
	
	return 0;
}