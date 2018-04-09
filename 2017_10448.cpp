#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> store;

bool compare(int a, int b) {
	return a > b;
};

void readFrom() {
	int num;
	while (cin >> num) {
		store.push_back(num);
	};
}

void order() {
	sort(store.begin(), store.end(), compare);
	cout << "ordered array" << endl;
}

void printOut() {
	for (auto i = store.begin(); i < store.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}

void main() {
	readFrom();
	order();
	printOut();
}

