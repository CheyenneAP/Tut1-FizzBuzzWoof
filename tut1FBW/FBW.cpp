#include <iostream>
#include <conio.h>
using namespace std;

void fizzbuzz(int x){
	if (x % 3 == 0){
		cout << "Fizz" << endl;

	}
	if (x % 5 == 0){
		cout << "Buzz" << endl;

	}
	if (x % 7 == 0){
		cout << "Woof" << endl;

	}
	if (x % 3 == 0 && x % 5 == 0){
		cout << "FizzBuzz" << endl;

	}
	if (x % 5 == 0 && x % 7 == 0){
		cout << "BuzzWoof" << endl;
	}
	if (x % 3 == 0 && x % 7 == 0){
		cout << "FizzWoof" << endl;
	}

	if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0){
		cout << "FizzBuzzWoof" << endl;
	}
	else{
		cout << "not divisible by 3 ,5 and 7" << endl;
	}
}



int main(){
	int num = 1;
	while (num <= 50)
	{
		fizzbuzz(num);
		num++;
	}

	// main class above

}