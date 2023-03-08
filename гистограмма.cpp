#include <bits/stdc++.h>
using namespace std;

int main() {
	int p = 1;
	string a, s;
	map<char, int>m;
	while (true) {      // Считываем заранее неизвестное количество строк
		getline(cin, a);
		if (a.empty())
			break;
		s += a;
	}
	sort(begin(s), end(s));
	s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end()); // Убираем пробелы


	//Делаем словарь символов
	for (int i = 0; i < s.size(); i++) {
		if (m.count(s[i])) {
			m[s[i]] = m[s[i]] + 1;
			p = max(m[s[i]], p);
		}
		else {
			m[s[i]] = 1;
		}
	}
	//Делаем словарь символов


	// Удаляем одинаковые элементы
	auto last = s.end();
	for (auto first = s.begin(); first != last; ++first)
	{
		last = std::remove(std::next(first), last, *first);
	}
	s.erase(last, s.end());
	// Удаляем одинаковые элементы

	
	for (auto& elem : m) {
		if (elem.second == 1) {
			cout << "#";
		}                      // часть с выводом не решил, анриал 
		                       // нужно построчно печатать + к этому использовать p
		else {
			cout << "#";
		}
	}
	cout << s;
}
