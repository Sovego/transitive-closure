#include <iostream>


int main() {
	
	
	int N;
	std::cout << "enter the number of vertices ";
	std::cin >> N;
	int** arr;
	arr = new int* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];


	for (int i = 0; i < N; i++) {
		for (int j=0;j<N;j++)
		arr[i][j] = 2000000;
	}


	int a, b, c;
	a = 0;
	while (a > -1) {
		std::cout << "From ";
		std::cin >> b;
		if (b < 0) { break; }
		std::cout << "To ";
		std::cin >> c;
		arr[b-1][c-1] = 1;
	}

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if ((arr[i][j] > arr[i][k] + arr[k][j]))
					arr[i][j] = 2;
			}
		}
	}
	std::cout << "\t\t";
	for (int i = 1; i <= N; i++)
	{
		std::cout << i << "\t";
	}
	std::cout << std::endl << std::endl;
	for (int count_row = 0; count_row < N; count_row++)
	{
		std::cout << count_row +1 << "\t\t";
		for (int count_column = 0; count_column < N; count_column++)
		{
			if (arr[count_row][count_column]!= 2000000)
				std::cout << "1" << "\t";
			else {
				std::cout << "~" << "\t";
			}
		}
		std::cout << std::endl;
	}

}