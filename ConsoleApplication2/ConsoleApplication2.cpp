#include <iostream>
#include <cstdlib>

using namespace std;

void play(int m);

int main()
{
	int option;
	int magic;

	setlocale(0, "");

	magic = rand();
	do {
		cout << "1. Получить новое число\n" << endl;
		cout << "2. Сыграть\n" << endl;
		cout << "3. Выйти из программы \n" << endl;
		do {
			cout << "Введите свой вариант: ";
			cin >> option;
			cout << "\n";
		} while (option < 1 || option > 3);
		switch (option) {
		case 1:
			cout << "Получаем новое число... \n" << endl;
			magic = rand();
			break;
		case 2:
			play(magic);
			break;
		case 3:
			cout << "До свидания!\n" << endl;
			break;
		} 
	} while (option != 3);
	return 0;
}

void play(int m)
{
	int t, x;
	cout << "Угадайте магическое число.\n" << endl;
	for (t = 0; t < 5; t++) {
		cout << "у вас осталось " << 5 - t << " попыток.\n" << endl;
		cin >> x;
		if (x == m) {
			cout << "Поздравляем, вы угадали!\n" << endl;
			return;
		}
		else
			if (x < m) cout << "Маловато...\n" << endl;
			else cout << "Многовато...\n" << endl;
	}	
	cout << "Вы использовали все попытки. \nПопробуйте снова.\n" << endl;
	cout << "Загаданное число - " << m << "\n" << endl;
}