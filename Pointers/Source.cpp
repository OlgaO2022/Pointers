#include <iostream>
using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

void refswap(int &refn1, int &refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n = 10, m = 15;


	// ССылки на переменные
	/*int* pn = &n;
	cout << "*pn = " << *pn << '\n'; // разименование не удобно
	int& refn = n;
	cout << "refn = " << refn << '\n';
	refn = 20;
	cout << "Ноавя n = " << n << '\n';*/

		//Указатели на переменные
/*cout << "Адрес n = " << &n << "\n";

int* pn; // Объявляем указатель pn
pn = &n; // направляем указатель на переменную n

cout << "pn =            " << pn << '\n'; // Выводим значение pn

cout << "n =   " << n << '\n';
cout << " *pn = " << *pn << '\n'; // используя разименование, выводим n

*pn = 20; // использую разименование, меняем значение n

cout << "Новая n = " << n << '\n';

pn = &m; // перенаправляем указатель на адрес m
cout << "Адрес m = " << &m << '\n'; // 
cout << "        pn = " << pn << '\n'; //

int* pm = &m; // создаем еще один укказатель и направляем его на m
cout << "      pm = " << pn << '\n'; */

//Указатели на массивы
/*int mass[5]{5, 8, 0, 11, 7};

	int* pm2 = &mass[2];

	cout << *pm2 << '\n';
	pm2++; 
	cout << *pm2 << '\n';

	cout << mass << '\n'; //адрес первого элемента массива
	pm2 = mass;
	cout << *pm2 << '\n'; //5

	cout << "Массив : \n";

	for (int i = 0; i < 5; i++)
		//cout << mass[i] << ", ";
		cout << *(pm2+i) << '\n';
	cout << "\b\b.\n";*/

	// Задача. Создать функцию, меняющую значения двух переменных местами
	cout << n << ' ' << m << '\n';
	// my_swap(n, m); // не работает, т.к. параметры - это копии
	// pswap(&n, & m); // не удобно, т.к. передаем адреса
	refswap(n, m); // идеально, удобно и красиво

	cout << n << ' ' << m << '\n';



	



return 0;
}
