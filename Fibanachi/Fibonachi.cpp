#include <iostream>

using namespace std;

int ArrOfNum[500];
int GlobalCounter = 0;
int isMet(int n)
{
	bool flag = false;
	int LocalCounter = 0;
	while (LocalCounter < GlobalCounter && !flag)
	{
		flag = ArrOfNum[LocalCounter] == n;
		LocalCounter++; //
	}

	return flag;
}
void PutIntoArray(int n)
{
	ArrOfNum[GlobalCounter] = n; 
	GlobalCounter++;
}
int GetNumbers(int n)
{
	int num = 0;
	if (n <= 1)
		num = 1;
	else
		num = GetNumbers(n - 1) + GetNumbers(n - 2);
	if (!isMet(num))
	{
		cout << num << " ";
		PutIntoArray(num);
	}
	return num;
}

int main()
{
	setlocale(LC_ALL,"RUS");
	int number;
	cout << "Введите необходимое количество чисел: " << endl;
	cin >> number;
	if (number < 2)
	{
		cout << "Число должно быть больше двух: " << endl;
		return 0; 
	}
	cout << "Полученный ряд чисел:" << endl;
	cout << "0" << " " << "1" << " ";
	if (number > 2)
		GetNumbers(number - 2);
}
