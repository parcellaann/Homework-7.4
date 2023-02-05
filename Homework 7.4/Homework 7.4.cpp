// Homework 7.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

char *changeSim(char str[], char sim)
{
	str[strlen(str) - 1] = sim;
	str[0] = sim;
	return str;
}

char *deleteSpace(char str[]) 
{
	int i = 0, j;
	while ((str[i] == ' ') || (str[i] == '\t'))
	{
		i++;
	}
	if (i > 0)
	{
		for (j = 0; j < strlen(str); j++)
		{
			str[j] = str[j + i];
		}
		str[j] = '\0';
	}
	i = strlen(str) - 1;
	while ((str[i] == ' ') || (str[i] == '\t'))
	{
		i--;
	}
	if (i < (strlen(str) - 1))
	{
		str[i + 1] = '\0';
	}
	return str;
}

int main()
{
	std::cout << "Task 1.\n";
	std::cout << "Enter string.\n";
	char str[100];
	std::cin >> str;
	char sim;
	std::cout << "Enter simbol.\n";
	std::cin >> sim;
	changeSim(str, sim);
	std::cout << str;

	std::cout << "\n\nTask 2.\n";
	std::cout << "Enter string.\n";
	char str2[100] = "      Hello world para-pa-pa!     ";
	std::cout << "Before:\n"<< str2 << "\n After: \n";
	std::cout << deleteSpace(str2);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
