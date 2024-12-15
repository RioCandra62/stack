#include "stack.h"
using namespace std;


void createStack(Stack &S) {
	Top(S) = -1;
}

bool isEmpty(Stack S) {
	if (Top(S) != -1) {
		return false;
	}
	else {
		return true;
	}
}
bool isFull(Stack S) {
	if (Top(S) == NMAX) {
		return true;
	}
	else {
		return false;
	}
}

void Push(Stack &S, infotype x) {
	if (!isFull(S)) {
		Top(S)++;
		info(S)[Top(S)] = x;
	}
}
infotype Pop(Stack &S) {
	infotype x;
	if (!isEmpty(S)) {
		x = info(S)[Top(S)];
		Top(S)--;
		return x;
	}
}

void urutStackASC(Stack &S) {
    Stack temp;
    infotype x;
    createStack(temp);  // Create a temporary stack

    // Sort the stack elements based on 'umur' using a similar logic to insertion sort
    while (!isEmpty(S)) {
        x = Pop(S);  // Pop an element from the original stack

        // While temp is not empty and the top element of temp has a larger 'umur'
        // than the current element 'x', pop from temp and push to S to maintain order
        while (!isEmpty(temp) && info(temp)[Top(temp)].umur < x.umur) {
            Push(S, Pop(temp));  // Move elements back to S
        }

        // Push 'x' to the correct position in temp
        Push(temp, x);
    }

    // After sorting, copy the sorted stack back into S
    // Move elements from temp back to S
    while (!isEmpty(temp)) {
        Push(S, Pop(temp));
    }
}
void urutStackDESC(Stack &S) {
    Stack temp;
    infotype x;
    createStack(temp);  // Create a temporary stack

    // Sort the stack elements based on 'umur' using a similar logic to insertion sort
    while (!isEmpty(S)) {
        x = Pop(S);  // Pop an element from the original stack

        // While temp is not empty and the top element of temp has a larger 'umur'
        // than the current element 'x', pop from temp and push to S to maintain order
        while (!isEmpty(temp) && info(temp)[Top(temp)].umur > x.umur) {
            Push(S, Pop(temp));  // Move elements back to S
        }

        // Push 'x' to the correct position in temp
        Push(temp, x);
    }

    // After sorting, copy the sorted stack back into S
    // Move elements from temp back to S
    while (!isEmpty(temp)) {
        Push(S, Pop(temp));
    }
}
void showStack(Stack S) {
	if (!isEmpty(S)) {
		for (int i = 0; i <= Top(S); i++) {
			cout << info(S)[i].nama << " ";
			cout << info(S)[i].umur << " ";
			cout << info(S)[i].NIM << " " << endl;
		}
	}
	else {
		cout << "Stack is empty !" << endl;
	}
}
