#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//����� ������ �� k ��������.������������� ������ ��������� ������� : �������
//������ ������ �����, �������� � ������, � ����� ��� ��������� �������.
//�������� ������������ �������� � ������ ������ �� ������ ����������.

using namespace std;
int main() {
	vector<char> msgConvert;
	int count;
	char userInput;
	string outputMsg;

	setlocale(LC_ALL, "RUS");

	cout << "������� ���-�� ��������: ";
	cin >> count;
	cout << "������� ���� ������� ��� ����������:\n";

	for (int i = 0; i < count; i++)
	{
		cout << i + 1 << ") ";
		cin >> userInput;
		msgConvert.push_back(userInput);
	}

	sort(msgConvert.begin(), msgConvert.end());

	outputMsg = "\n���������� �������:\n";
	for (int i = 0; i < msgConvert.size(); i++)
	{
		outputMsg += to_string(i + 1) + ") " + msgConvert[i] + "\n";
	}

	cout << outputMsg << endl;

	return 0;
}