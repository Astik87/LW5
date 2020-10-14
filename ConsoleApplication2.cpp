// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

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

