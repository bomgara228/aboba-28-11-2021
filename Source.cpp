#include <iostream>
using namespace std;
#include <iomanip>
#include <ctime>
int main() {
	/*Matrix8. Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). заполните матрицу случайными числами из диапозона от 1 до 9.
	* вывести матрицу на экран и найти произведение элементов K-й строки данной матрицы
		*/
	
		const int n = 3;
		const int m = 5;
		int mas[n][m];
		srand(time(0));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				mas[i][j] = rand()%9+1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << setw(4) << mas[i][j];
			}
			cout << endl;
		}
		int k;
		cout << "enter row number\n";
		cin >> k;
		for (int p = 0; p < m; p++) {
			cout << mas[k][p] << ' ';
		}
}