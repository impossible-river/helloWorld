#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> funkcja(const vector<int>& liczby) {
	vector<int> wynik;
	map<int, int> ile;
	for (int x : liczby)
		ile[x]++;
	for (const pair<int, int>& element : ile)
		for (int i = 0; i < element.second; i++)
			wynik.push_back(element.first);
	return wynik;
}
void coutVector(const vector<int>& liczby)
{
	for (int element : liczby)
		cout << element << ", "; 
	cout << endl;
}
int main()
{
	vector <vector <int>> kody = {
		{ 7,9,84,50,10,38,67,97},
		{ 10,34,28,10,48,2, 67}
	};
	for (vector<int> haha : kody)
		coutVector(haha);

	vector <int> dane = { 7,97,84,54,10,38,67,97 };
	vector<int> wynik = funkcja({ 10,34,28,10,48,28 });
	coutVector(dane);
}

