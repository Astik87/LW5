// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// --------------------------- Лабораторная работа 1 --------------------------- //

// 1 Перевести версты в сажени и выразить в сантиметрах.

void lw1_1() {
    cout << "Введите версты: ";

    float num;

    cin >> num;

    double a = num * 583.333;

	double b = a * 182.88;

    cout << num << " верст" << " = " << a << " сажень\n";

    cout << a << " сажень" << " = " << b << "см";

}

// 2 Перевести узлы в километры в час и выразить в метрах в секунду.

void lw1_2() {
    cout << "Введите узлы: ";

    float num;

    cin >> num;

    float a = num * 1.852;

    float b = a / 3.6;

    cout << num << " узлы" << " = " << a << " к/ч\n";

    cout << a << " к/ч" << " = " << b << "м/с";

}

// 3 Перевести градусы Цельсия в Кельвина и выразить в Фаренгейтах.

void lw1_3() {
    cout << "Введите градусы Цельсия: ";

    float num;

    cin >> num;

    float a = num + 273.15;

    float b = (a - 273.15) * 9 / 5 + 32;

    cout << num << " градус Цельсия" << " = " << a << " К\n";

    cout << a << " К" << " = " << b << " F";

}

// 4 Перевести дюймы в метры и выразить в аршинах.

void lw1_4() {

    cout << "Введите дюймы: ";

    float num;

    cin >> num;

    float a = num * 0.0254;

    float b = a / 0.7112;

    cout << num << " дюймы" << " = " << a << " м\n";

    cout << a << " м" << " = " << b << " аршин";

}

// 5. Перевести лот в карат и выразить в унциях.

void lw1_5() {

    cout << "Введите лоты: ";

    float num;

    cin >> num;

    float a = num * 63.986;

    float b = a / 144;

    cout << num << " лот" << " = " << a << " кар\n";

    cout << a << " кар" << " = " << b << " унция";

}

// 6. Перевести тонны в центнеры и выразить в граммах.

void lw1_6() {

    cout << "Введите тонны: ";

    float num;

    cin >> num;

    float a = num * 10;

    float b = a * 100000;

    cout << num << " т" << " = " << a << " ц\n";

    cout << a << " ц" << " = " << b << " г";

}

// 7. Перевести метры в секунду в мили в секунду и выразить в километрах в минуту.

void lw1_7() {

    cout << "Введите м/c: ";

    float num;

    cin >> num;

    float a = num / 1609.344;

    float b = a * 96.5606;

    cout << num << " м/c" << " = " << a << " миль/с\n";

    cout << a << " миль/с" << " = " << b << " к/мин";

}

// 8. Перевести километры в ярды и выразить в дюймах.

void lw1_8() {

    cout << "Введите километы: ";

    float num;

    cin >> num;

    float a = num * 1093.61;

    float b = a * 36;

    cout << num << " к" << " = " << a << " ярд/с\n";

    cout << a << " ярд" << " = " << b << " дюйм";

}

// 9. Перевести из дециметров в ладони и выразить в верстах.

void lw1_9() {

    cout << "Введите дециметры: ";

    float num;

    cin >> num;

    float a = num * 1.312;

    float b = a / 14000;

    cout << num << " дм" << " = " << a << " ладони/с\n";

    cout << a << " ладони" << " = " << b << " верст";

}

//10. Перевести из метров в пяди и аршины.

void lw1_10() {

    cout << "Введите метры: ";

    float num;

    cin >> num;

    float a = num / 0.1778;

    float b = a / 4;

    cout << num << " м" << " = " << a << " пяди/с\n";

    cout << a << " пяди" << " = " << b << " аршин";

}

// --------------------------- Лабораторная работа 2 --------------------------- //

//1. Написать программу, которая вычисляет, сколько раз введенное с клавиатуры
//число встречается в массиве.Массив и его длина вводятся пользователем.

void lw2_1() {
	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "Введите число n: ";

	int n;

	cin >> n;

	int count = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] == n) count++;
	}

	cout << count;
}

//2. Написать программу, которая вычисляет среднее арифметическое элементов
//массива без учета минимального и максимального элементов массива.Массив и
//его длина вводятся пользователем.

void lw2_2() {
	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int max = A[0];
	int min = A[0];

	for (int i = 0; i < m; i++) {

		if (A[i] > max) max = A[i];
		if (A[i] < min) min = A[i];

	}

	int sum = 0;

	for (int i = 0; i < m; i++) {

		if (A[i] == max or A[i] == min) continue;

		sum += A[i];

	}

	cout << "Среднее арифметическое элементов = " << float(sum) / (m - 2);
}

//3. Написать программу, которая выводит количество ненулевых элементов
//массива.Массив и его длина вводятся пользователем.

void lw2_3() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int count = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] != 0) count++;
	}

	cout << " " << count << "  ненулевых элементов массива";

}

// 4. Написать программу, которая вычисляет сумму всех положительных элементов
// массива.Массив и его длина вводятся пользователем.

void lw2_4() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int sum = 0;

	for (int i = 0; i < m; i++) {
		if (A[i] > 0) sum += A[i];
	}

	cout << "Ответ: " << sum;
}

//5. Написать программу, которая вычисляет произведение всех отрицательных
//элементов массива.Массив и его длина вводятся пользователем.

void lw2_5() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int a = 1;

	for (int i = 0; i < m; i++) {
		if (A[i] < 0) a = a * A[i];
	}

	cout << "Ответ: " << a;

}

//6. Написать программу, которая вычисляет разность максимального и
//минимального элементов массива.Массив и его длина вводятся пользователем.

void lw2_6() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int max = A[0];
	int min = A[0];

	for (int i = 0; i < m; i++) {
		if (A[i] < min) min = A[i];
		if (A[i] > max) max = A[i];
	}

	cout << "Ответ: " << max - min;

}

//7. Написать программу, которая вычисляет частное от деления первого элемента
//массива на последний.Массив и его длина вводятся пользователем.

void lw2_7() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "Ответ: " << float(A[0]) / A[m - 1];

}

/*
8. Написать программу, которая построчно выводит сумму первого и последнего,
второго и предпоследнего и т.д. элементов массива. Если количество элементов
нечетное, то в конце выводит центральный элемент массива. Массив и его длина
вводятся пользователем.
*/

void lw2_8() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	cout << "Ответ:\n";

	for (int i = 0; i < m / 2; i++) {
		cout << A[i] + A[m - i - 1] << "\n";
	}

	if (m % 2 != 0) cout << A[m / 2];

}

//9. Написать программу, которая выводит на экран только простые числа. Массив и
//его длина вводятся пользователем.

void lw2_9() {

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < m; i++) {
		int c = 0;
		for (int j = 2; j < 10; j++) {
			if (j == A[i]) continue;
			if (A[i] % j == 0) c++;
		}
		if (c == 0 and A[i] != 1) cout << A[i];
	}

}

// 10. Написать программу, которая вычисляет среднее арифметическое четных
// элементов массива.Массив и его длина вводятся пользователем.

void lw2_10()
{

	size_t m;

	cout << "Введите длину массива: ";
	cin >> m;

	int* A = new int[m];

	cout << "Введите элементы массива: ";

	for (int i = 0; i < m; i++) {
		cin >> A[i];
	}

	int count = 0;
	int sum = 0;

	for (int i = 0; i < m; i++) {
		if (A[i]%2==0) {
			sum += A[i];
			count++;
		}
	}

	cout << "Ответ: " << float(sum) / count;

}

// --------------------------------- Лабораторная работа 3 ----------------------------- //
// --------------------------------- ВАЖНО!!!!             ----------------------------- //
// Перед каждой программой необходимо добавить следующий код:
// SetConsoleCP(1251);
// SetConsoleOutputCP(1251);
// setlocale(LC_ALL, "Russian");
// иначе программа будет работать неправильно

// 1. Написать программу, которая во вводимом с клавиатуры тексте заменит все
//окончания слов «ть» на «ся» и выведет результат на экран.
void lw3_1() {

	string str;

	getline(cin, str);

	char b[7] = { ' ', ',', '.', '!', '?', ':', ';' };

	for (int i = 3; i < size(str); i++) {

		int count = 0;

		for (int j = 0; j < 7; j++) {

			if (b[j] == str[i]) {
				count++;
				break;
			}

		}

		if (count != 0 && str[i - 2] == 'т' && str[i - 1] == 'ь' && str[i - 3] != ' ') {

			str[i - 2] = 'с';
			str[i - 1] = 'я';

		}

	}

	cout << str;
}

//2. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//начинающиеся с гласной буквы, и выведет их на экран.
void lw3_2() {

	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { 'А','а','Я','я','О','о','Е','е','Ё','ё','У','у','Ю','ю','И','и','Э','э' };

	for (int i = 0; i <= m; i++) {
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][0]) {
				cout << sl[i];
				break;
			}
		}
	}

}

//3. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//заканчивающиеся согласной буквой, и выведет их на экран.
void lw3_3() {
	
	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { 'А','а','Я','я','О','о','Е','е','Ё','ё','У','у','Ю','ю','И','и','Э','э' };

	int n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][size(sl[i]) - 1]) {
				n++;
				break;
			}
		}
		if (n != 0) continue;
		cout << sl[i] << endl;
	}
}

//4. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//количество букв «м» в которых будет максимально, и выведет их на экран.
void lw3_4() {

	string str;

	string sl[1024];

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	int max = 0, id = -1, n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int j = 0; j < size(sl[i]); j++) {
			if (sl[i][j] == 'м' or sl[i][j] == 'М') {
				n++;
			}

			if (max < n) {
				max = n;
				id = i;
			}
		}
	}

	if (id != -1) cout << sl[id];

}

//5. Написать программу, которая во вводимом с клавиатуры тексте заменит буквы
//«ь» на «ъ» и выведет результат на экран.
void lw3_5() {

	string str;

	getline(cin, str);

	for (int i = 0; i < size(str); i++) {
		if (str[i] == 'ь') str[i] = 'ъ';
	}

	cout << str << endl;

}

//6. Написать программу, которая во вводимом с клавиатуры тексте сделает
//разбиение на предложения.Условие конца предложения - точка, восклицательный
//или вопросительный знаки и выведет результат на экран.
void lw3_6() {

	string str;

	getline(cin, str);

	int n = 0;

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
			for (n; n <= i; n++) {
				cout << str[n];
			}
			cout << endl;
			n++;
		}
	}

}

//7. Написать программу, которая во вводимом с клавиатуры тексте посчитает
//количество слов в предложениях и выведет результат на экран.
void lw3_7() {

	//A-Z = 65-90
	//a-z = 97-122
	//A-я = < 0

	string str;

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {

		int code = (int)str[i];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			continue;
		}

		code = (int)str[i - 1];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			m++;
		}
	}

	cout << m << " слов(-о) в тексте";

}

//8. Написать программу, которая во вводимом с клавиатуры тексте удалит все
//пробелы, знаки табуляции и выведет количество удаленных символов на экран.
void lw3_8() {

	string str;

	getline(cin, str);

	int n = 0;

	for (int i = 0; i < size(str); i++) {
		if ((int)str[i] == 9 || (int)str[i] == 32) {
			n++;
			continue;
		}
		cout << str[i];

	}

	cout << endl << n << " пробелов и знаков табуляции было удалино";

}

//9. Написать программу, которая во вводимом с клавиатуры тексте выберет слова с
//нечетным количеством букв и выведет результат на экран.
void lw3_9() {
	string str;

	getline(cin, str);

	int m = 0;
	string sl;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			sl += str[i];
			m++;
			if (i == size(str) - 1 && m % 2 != 0) cout << sl << endl;
		}
		else if ((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) {
			if (m % 2 != 0) {
				cout << sl << endl;
			}
			m = 0;
			sl = "";
		}
	}
}

//10. Написать программу, которая во вводимом с клавиатуры тексте заменит первую
//букву на последнюю во всех словах текста и выведет результат на экран.
void lw3_10() {

	string str;

	getline(cin, str);

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) &&
			!((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0)) m = i;
		else if (((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) &&
			!((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0)) str[m] = str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) && i == size(str) - 1) str[m] = str[h + 1];

	}

	cout << str;

}

// --------------------------------- Лабораторная работа 4 ----------------------------------------- //
// --------------------------------- ВАЖНО!!!!!!!          ----------------------------------------- //
// Все данне считываются с файла TextFile1.txt в тойже папке сто и этот код (ConsoleApplication2.cpp) 
// Результат записывается в файл res.txt
// Если эти файлы не созданны программа не будет работать
// Перед каждой программой необходимо добавить следующий код:
// SetConsoleCP(1251);
// SetConsoleOutputCP(1251);
// setlocale(LC_ALL, "Russian");
// иначе программа будет работать неправильно
// 1. Написать программу, которая во вводимом с клавиатуры тексте заменит все
//окончания слов «ть» на «ся» и выведет результат на экран.
void lw4_1() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	char b[7] = { ' ', ',', '.', '!', '?', ':', ';' };

	for (int i = 3; i < size(str); i++) {

		int count = 0;

		for (int j = 0; j < 7; j++) {

			if (b[j] == str[i]) {
				count++;
				break;
			}

		}

		if (count != 0 && str[i - 2] == 'т' && str[i - 1] == 'ь' && str[i - 3] != ' ') {

			str[i - 2] = 'с';
			str[i - 1] = 'я';

		}
		else if (count == 0 && i == size(str) - 1) {
			str[i - 1] = 'с';
			str[i] = 'я';
		}

	}

	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//2. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//начинающиеся с гласной буквы, и выведет их на экран.
void lw4_2() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0) m++;
		}
	}

	char a[18] = { 'А','а','Я','я','О','о','Е','е','Ё','ё','У','у','Ю','ю','И','и','Э','э' };

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i <= m; i++) {
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][0]) {
				fout << sl[i] << endl;
				break;
			}
		}
	}

	fin.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//3. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//заканчивающиеся согласной буквой, и выведет их на экран.
void lw4_3() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0 && i != size(str) - 1) m++;
		}
	}

	char a[18] = { 'А','а','Я','я','О','о','Е','е','Ё','ё','У','у','Ю','ю','И','и','Э','э' };

	int n;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int b = 0; b < 18; b++) {
			if (a[b] == sl[i][size(sl[i]) - 1]) {
				n++;
				break;
			}
		}
		if (n != 0) continue;
		fout << sl[i] << endl;
	}

	fout.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//4. Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
//количество букв «м» в которых будет максимально, и выведет их на экран.
void lw4_4() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	string sl[1024];

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		if (((int)str[i]) < 0) {
			sl[m] += str[i];
		}
		else {
			if (((int)str[i - 1]) < 0 && i != size(str) - 1) m++;
		}
	}

	int max = 0, id = -1, n;

	for (int i = 0; i <= m; i++) {
		n = 0;
		for (int j = 0; j < size(sl[i]); j++) {
			if (sl[i][j] == 'м' or sl[i][j] == 'М') {
				n++;
			}

			if (max < n) {
				max = n;
				id = i;
			}
		}
	}

	if (id != -1) {
	
		ofstream fout("res.txt");

		fout << sl[id];
		fin.close();

	}

	cout << "Проверте файл res.txt в папке с проектом.";

}

//5. Написать программу, которая во вводимом с клавиатуры тексте заменит буквы
//«ь» на «ъ» и выведет результат на экран.
void lw4_5() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	for (int i = 0; i < size(str); i++) {
		if (str[i] == 'ь') str[i] = 'ъ';
	}

	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "Проверте файл res.txt в папке с проектом.";


}

//6. Написать программу, которая во вводимом с клавиатуры тексте сделает
//разбиение на предложения.Условие конца предложения - точка, восклицательный
//или вопросительный знаки и выведет результат на экран.
void lw4_6() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int n = 0;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
			for (n; n <= i; n++) {
				fout << str[n];
			}
			fout << endl;
			n++;
		}
	}

	fout.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//7. Написать программу, которая во вводимом с клавиатуры тексте посчитает
//количество слов в предложениях и выведет результат на экран.
void lw4_7() {

	//A-Z = 65-90
	//a-z = 97-122
	//A-я = < 0

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;

	for (int i = 0; i < size(str); i++) {

		int code = (int)str[i];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			continue;
		}

		code = (int)str[i - 1];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			m++;
		}
	}
	ofstream fout("res.txt");
	fout << m << " слов(-о) в тексте";
	fout.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//8. Написать программу, которая во вводимом с клавиатуры тексте удалит все
//пробелы, знаки табуляции и выведет количество удаленных символов на экран.
void lw4_8() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int n = 0;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		if ((int)str[i] == 9 || (int)str[i] == 32) {
			n++;
			continue;
		}
		fout << str[i];

	}

	fout << endl << n << " пробелов и знаков табуляции было удалино";

	cout << "Проверте файл res.txt в папке с проектом.";

}

//9. Написать программу, которая во вводимом с клавиатуры тексте выберет слова с
//нечетным количеством букв и выведет результат на экран.
void lw4_9() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;
	string sl;

	ofstream fout("res.txt", ios::app);

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) {
			sl += str[i];
			m++;
			if (i == size(str) - 1 && m % 2 != 0) cout << sl << endl;
		}
		else if ((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) {
			if (m % 2 != 0) {
				fout << sl << endl;
			}
			m = 0;
			sl = "";
		}
	}
	
	fout.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

//10. Написать программу, которая во вводимом с клавиатуры тексте заменит первую
//букву на последнюю во всех словах текста и выведет результат на экран.
void lw4_10() {

	ifstream fin("TextFile1.txt");

	string str;

	getline(fin, str);
	fin.close();

	int m = 0;

	for (int i = 0; i < size(str); i++) {
		int h = i - 1;
		if (h < 0) h = 0;
		int code = (int)str[i];
		int code0 = (int)str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) &&
			!((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0)) m = i;
		else if (((code0 >= 65 && code0 <= 90) || (code0 >= 97 && code0 <= 122) || code0 < 0) &&
			!((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0)) str[m] = str[h];

		if (((code >= 65 && code <= 90) || (code >= 97 && code <= 122) || code < 0) && i == size(str) - 1) str[m] = str[h + 1];

	}



	ofstream fout("res.txt");

	fout << str;
	fin.close();

	cout << "Проверте файл res.txt в папке с проектом.";

}

// ------------------------------------ Лабораторная работа 5 ------------------------------------ //
// ------------------------------------ ВАЖНО !!!!!!!!!!!!!!! ------------------------------------ //
// Все данный считываются и записываются в файл ../db.txt
// Чтобы программа работала необходимо создать файл  db.txt в корне проекта

//«Футбольная команда»: название, город, количество сыгранных игр, количество
//очков(проигрыши, выигрыши, ничьи), количество игроков, фамилия тренера.

// Структура для футбольной команды
struct FootballTeam
{
	string name, city, trainer;
	int numberOfGamesPlayed, losses, winnings, draws, numberOfPlayers;
};

// Возвращает кол-во записей в файле ../db.txt
int getCount() {
	
	ifstream file("../db.txt");

	if (file.is_open()) {
		string str;

		int count = 0;

		while (getline(file, str)) {
			count++;
		}

		file.close();

		return count;
	}

	return 0;

}

// Возвращает массив структур всех команд
FootballTeam* getAllData() {
	
	int count = getCount();

	FootballTeam *ft = new FootballTeam[count];

	ifstream file("../db.txt");

	if (file.is_open()) {
		
		string str;

		int i = 0;

		while (getline(file, str)) {

			istringstream istr(str);

			istr >> ft[i].name >> ft[i].city >> ft[i].trainer >> ft[i].numberOfGamesPlayed >> ft[i].losses >> ft[i].winnings >> ft[i].draws >> ft[i].numberOfPlayers;

			i++;
		}

		file.close();

		return ft;
	}

	return 0;

}

// Ввыводит все структуры команд
void selectAll() {

	int count = getCount();

	FootballTeam* ft = getAllData();

	int i = 0;

	for (int i = 0; i < count; i++) {
		cout << "--- " << i+1 << " ---" << endl
			<< "Название: " << ft[i].name << endl
			<< "Город: " << ft[i].city << endl
			<< "Количество сыгранных игр: " << ft[i].numberOfGamesPlayed << endl
			<< "Проигрыши: " << ft[i].losses << endl
			<< "Выигрыши: " << ft[i].winnings << endl
			<< "Ничьи: " << ft[i].draws << endl
			<< "Количество игроков: " << ft[i].numberOfPlayers << endl
			<< "Фамилия тренера: " << ft[i].trainer << endl << endl;
	}

}

// Добовляет новую структуру. Возвращает true в случае успеха, иначе false
bool create() {
	
	ofstream file("../db.txt", ios::app);

	if (!file.is_open()) return false;

	FootballTeam ft;

	cout << "Введите название: ";
	cin >> ft.name;
	cout << "Введиет город: ";
	cin >> ft.city;
	cout << "Введиет количество сыгранных игр: ";
	cin >> ft.numberOfGamesPlayed;
	cout << "Проигрыши: ";
	cin >> ft.losses;
	cout << "Выигрыши: ";
	cin >> ft.winnings;
	cout << "Ничьи: ";
	cin >> ft.draws;
	cout << "Введиете количество игроков: ";
	cin >> ft.numberOfPlayers;
	cout << "Фамилия тренера: ";
	cin >> ft.trainer;

	file << "\n" << ft.name << "\t"
		<< ft.city << "\t"
		<< ft.trainer << "\t"
		<< ft.numberOfGamesPlayed << "\t"
		<< ft.losses << "\t"
		<< ft.winnings << "\t"
		<< ft.draws << "\t"
		<< ft.numberOfPlayers;

	return true;

}

// Находит и выводит команду с данными введеными с консоли
void search() {

	cout << "Введите данные для поиска. Если нужно пропустить поле введите в качестве значения -1." << endl;

	FootballTeam ft;

	FootballTeam* fts = getAllData();
	int count = getCount();

	cout << "Название: ";
	cin >> ft.name;
	cout << "Город: ";
	cin >> ft.city;
	cout << "Количество сыгранных игр: ";
	cin >> ft.numberOfGamesPlayed;
	cout << "Проигрыши: ";
	cin >> ft.losses;
	cout << "Выигрыши: ";
	cin >> ft.winnings;
	cout << "Ничьи: ";
	cin >> ft.draws;
	cout << "Количество игроков: ";
	cin >> ft.numberOfPlayers;
	cout << "Фамилия тренера: ";
	cin >> ft.trainer;
	if (ft.name == "-1" && ft.city == "-1" && ft.draws == -1 && ft.losses == -1 && ft.numberOfGamesPlayed == -1
		&& ft.numberOfPlayers == -1 && ft.trainer == "-1" && ft.winnings == -1) return ;
	for (int i = 0; i < count; i++) {
		if ((ft.name == "-1" || ft.name == fts[i].name) && (ft.city == "-1" || ft.city == fts[i].city)
			&& (ft.numberOfGamesPlayed == -1 || ft.numberOfGamesPlayed == fts[i].numberOfGamesPlayed)
			&& (ft.numberOfPlayers == -1 || ft.numberOfPlayers == fts[i].numberOfPlayers)
			&& (ft.losses == -1 || ft.losses == fts[i].losses) && (ft.draws == -1 || ft.draws == fts[i].draws)
			&& (ft.winnings == -1 || ft.winnings == fts[i].winnings) && (ft.trainer == "-1" || ft.trainer == fts[i].trainer)) {
			
			cout << "Название: " << fts[i].name << endl
				<< "Город: " << fts[i].city << endl
				<< "Количество сыгранных игр: " << fts[i].numberOfGamesPlayed << endl
				<< "Проигрыши: " << fts[i].losses << endl
				<< "Выигрыши: " << fts[i].winnings << endl
				<< "Ничьи: " << fts[i].draws << endl
				<< "Количество игроков: " << fts[i].numberOfPlayers << endl
				<< "Фамилия тренера: " << fts[i].trainer << endl << endl;
		}
	}

}

// Возвращает true если строка a должна стоять перед строкой b при сортировке по алфовиту 
bool maxStr(string a, string b) {

	for (int i = 0; i < size(a); i++) {
		if ((int)a[i] == (int)b[i]) continue;
		if ((int)a[i] < 0) return (int)a[i] < (int)b[i];
		return !((int)a[i] > (int)b[i]);
	}

	return false;

}

// Сортирует массив структур по указанной строке
int sort() {

	cout << "Выберите строку для сортировки: " << endl
		<< "\t(1) Название\n\t(2) Город\n\t(3) Количество сыгранных игр\n\t(4) Проигрыши\n\t(5) Выигрыши\n\t(6) Ничьи\n\t(7) Количество игроков\n\t(8) Фамилия тренера" << endl;
	
	int d = 0;
	int count = getCount();
	FootballTeam* fts = getAllData();
	FootballTeam ft;
	cin >> d;

	if (d == 0) return 0;

	if (d == 1) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (maxStr(fts[i].name, fts[j].name)) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 2) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (maxStr(fts[i].city, fts[j].city)) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 3) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (fts[i].numberOfGamesPlayed > fts[j].numberOfGamesPlayed) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 4) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (fts[i].losses > fts[j].losses) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 5) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (fts[i].winnings > fts[j].winnings) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 6) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (fts[i].draws > fts[j].draws) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 7) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (fts[i].numberOfPlayers > fts[j].numberOfPlayers) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	if (d == 8) {
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < count; j++) {
				if (maxStr(fts[i].trainer, fts[j].trainer)) {
					ft = fts[j];
					fts[j] = fts[i];
					fts[i] = ft;
				}
			}
		}
	}

	for (int i = 0; i < count; i++) {
		cout << "--- " << i + 1 << " ---" << endl
			<< "Название: " << fts[i].name << endl
			<< "Город: " << fts[i].city << endl
			<< "Количество сыгранных игр: " << fts[i].numberOfGamesPlayed << endl
			<< "Проигрыши: " << fts[i].losses << endl
			<< "Выигрыши: " << fts[i].winnings << endl
			<< "Ничьи: " << fts[i].draws << endl
			<< "Количество игроков: " << fts[i].numberOfPlayers << endl
			<< "Фамилия тренера: " << fts[i].trainer << endl << endl;
	}

}

// Вывод меню
void menu() {
	cout << "Выберите действие: " << endl
		<< "(1) Добавить структуру" << endl
		<< "(2) Поиск" << endl
		<< "(3) Вывести все структуры" << endl
		<< "(4) Упорядочить\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	int i = 0;

	while (i != -1) {
		
		switch (i)
		{
		case 0:
			menu();
			cin >> i;
			break;
		case 1:
			create();
			cout << endl << "(0) Назад в меню (3) Вывести все структуры (-1) Закрыть программу\n";
			cin >> i;
			break;
		case 2:
			search();
			cout << endl << "(0) Назад в меню (-1) Закрыть программу\n";
			cin >> i;
			break;
		case 3:
			selectAll();
			cout << endl << "(0) Назад в меню (4) Упорядочить (-1) Закрыть программу\n";
			cin >> i;
			break;
		case 4:
			sort();
			cout << endl << "(0) Назад в меню (-1) Закрыть программу\n";
			cin >> i;
			break;
		}

		cout << endl << endl;

	}

}

