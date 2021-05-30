/*	Базовый класс: ПАРА_ЧИСЕЛ (PAIR)
	Первое_число(first) - int
	Второе_число(second) – int
	Определить методы изменения полей и вычисления произведения чисел.
	Создать производный класс ПРЯМОУГОЛЬНЫЙ_ТРЕУГОЛЬНИК
	(RIGHTANGLED), с полями - катетами.Определить метод вычисления гипотенузы.
*/

#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите значения катетов: "; cin >> a >> b;
	Pair pair(a, b);
	int menu = 1;
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
	{
		cout << "Меню:\n\t0) Выход \n\t1) Изменить первое значение\n\t2) Изменить второе значение\n\t3) Найти произведение\n\t4) Найти гипотинузу\n\t5) Вывести значения двух катетов" << endl;
		cout << "Ввод: "; cin >> menu;

		if (menu == 0)
		{
			cout << "Вы вышли из программы";
		}

		if (menu == 1)
		{
			cout << "\nВведи новое значение: "; cin >> a;
			pair.change_first(a);
			cout << "Изменения применены\n\n";
		}
		
		if (menu == 2)
		{
			cout << "\nВведи новое значение: "; cin >> b;
			pair.change_second(b);
			cout << "Изменения применены\n\n";
		}

		if (menu == 3)
			cout << "Результат умножения: " << pair.umnozhenie() <<"\n\n";

		if (menu == 4)
			cout << "Площадь прямоугольного треугольника по заданым катетам: " << pair.gip() << "\n\n";

		if (menu == 5)
		{
			cout << "Первый катет равен: " << pair.first << endl;
			cout << "Второй катет равен: " << pair.second << endl;
		}
	}
}