#include <iostream>
using namespace std;
#include <iomanip>
#include <ctime>
int main() {
	/* Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). заполните матрицу случайными числами из диапозона от 1 до 9.
	* вывести матрицу на экран и найти произведение элементов K-й строки данной матрицы
		*/
	/*
		int g = 1;
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
			cout << mas[k][p] <<  ' ';
			g *= mas[k][p];
		}
		cout << endl << g;*/
	/*
	//2
	const int n = 3;
	const int m = 5;
	int k;
	int l = 0;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {//str
		for (int j = 0; j < m; j++) {//kol
			mas[i][j] = rand() % 41 - 20;
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	cout << "Enter: ";
	cin >> k;
	for (int i = 0; i < n; i += 1) {
		l += mas[i][k];
	}
	cout << l;
	*/
	/*
	//4
	int l = 0;
	const int n = 3;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {//str
		for (int j = 0; j < n; j++) {//kol
			mas[i][j] = rand() % 81 - 40;
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i][n - 1 - i] % 2 != 0) {
			l += 1;
		}
	}
	cout << l;*/

	//3
	int l = 0;
	const int n = 3;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {//str
		for (int j = 0; j < n; j++) {//kol
			mas[i][j] = rand() % 61 - 30;
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i][i] > 0) {
			l += 1;
		}
	}
	cout << l;
}
