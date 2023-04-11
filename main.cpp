#include "rabin_karp.h"

int main(int argc, char** argv) {
	string str = "_";
	string sub_str = "_";

	cout << "Введите строку, в которой будет осуществляться поиск: ";
	cin >> str;

	do {
		cout << "Введите строку, которую нужно найти: ";
		cin >> sub_str;

		if (find_substring_light_rabin_karp(str, sub_str) == -1) {
			cout << "Подстрока " << sub_str << " не найдена" << endl;
		}
		else {
			cout << "Подстрока " << sub_str << " найдена по индексу " << find_substring_light_rabin_karp(str, sub_str) << endl;
		}
	} while (sub_str != "exit");

	return 0;
}