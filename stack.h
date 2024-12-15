#pragma once

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

#define Top(S) S.Top
#define info(P) P.info

using namespace std;

struct mahasiswa {
	string nama;
	int umur;
	int NIM;
};

const int NMAX = 10;
typedef mahasiswa infotype;

struct Stack {
	infotype info[NMAX];
	int Top;
};


void createStack(Stack& S);

bool isEmpty(Stack S);
bool isFull(Stack S);

void Push(Stack &S, infotype x);
infotype Pop(Stack &S);

void showStack(Stack S);
void urutStackASC(Stack &S);
void urutStackDESC(Stack &S);
#endif // STACK_H_INCLUDED


