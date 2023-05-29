#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//Задан массив из k символов.Преобразовать массив следующим образом : сначала
//должны стоять цифры, входящие в массив, а затем все остальные символы.
//Взаимное расположение символов в каждой группе не должно изменяться.

using namespace std;
int main() {
	vector<char> msgConvert;
	int count;
	char userInput;
	string outputMsg;

	setlocale(LC_ALL, "RUS");

	cout << "Введите кол-во символов: ";
	cin >> count;
	cout << "Введите ваши символы для сортировки:\n";

	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ") ";
		cin >> userInput;
		msgConvert.push_back(userInput);
	}

	sort(msgConvert.begin(), msgConvert.end());

	outputMsg = "\nСортировка массива:\n";
	for (int i = 0; i < msgConvert.size(); i++)
	{
		outputMsg += to_string(i + 1) + ") " + msgConvert[i] + "\n";
	}

	cout << outputMsg << endl;

	return 0;
}