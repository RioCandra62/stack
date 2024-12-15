#include <iostream>
using namespace std;
#include "stack.h"
int main() {
	cout << "Belajar Stack" << endl;

	Stack S;
	infotype m;

	createStack(S);
	cout << "Push dua data" << endl;
	m.nama = "Bila";
	m.umur = 12;
	m.NIM = 1234456;
	Push(S, m);

    m.nama = "ufp";
	m.umur = 5;
	m.NIM = 1234999;
	Push(S, m);

	m.nama = "Rio";
	m.umur = 10;
	m.NIM = 1234458;
	Push(S, m);



	showStack(S);
	cout << "URUT data ASC" << endl;
	urutStackASC(S);
	showStack(S);
    cout << "URUT data DESC" << endl;
	urutStackDESC(S);
	showStack(S);
}
