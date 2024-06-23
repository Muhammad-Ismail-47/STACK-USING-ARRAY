# include <iostream>
using namespace std;

const int MAXSIZE = 100;

class Stack {
	char arr[MAXSIZE] = {'\0'}; 
	int top;
public:
	Stack() :top(-1) {}  // DEFAULT CONSTRUCTOR TO INITALIZE TOP

	bool isEmpty() const { return top == -1; }  // DETERMINES WEATHER THE SATCK IS EMPTY OR NOT
	bool isFull() const { return top == MAXSIZE - 1; } // DETERMINES WEATHER THE SATCK IS FULL OR NOT

	void push(char data) {  // PUSH OPERATION 
		if (isFull()) {  // IF STACK IS FULL
			cout << "ERROR! STACK IS ALREADY FULL." << endl;
			return;
		}	
		top++;  // INCREMENTS TOP
		arr[top] = data;  // ADDS DATA IN STACK
	}
	char pop() {  // POP OPERATION
		if (isEmpty()) {  // IF STACK IS EMPTY
			cout << "ERROR! STACK IS ALREADY EMPTY" << endl;
			return '\0';
		}
		char temp = arr[top];  // STORES THE POPED VALUE TEMPORARLY 
		top--;  // DECREMENTS TOP
		return temp;  // RETURN THE POPED VALUE
	}
};

int main() {
	Stack s1;

	s1.push('L');
	s1.push('I');
	s1.push('A');
	s1.push('M');
	s1.push('S');
	s1.push('I');

	while (!s1.isEmpty()) {
		cout << s1.pop();
	}
	return 0;
}