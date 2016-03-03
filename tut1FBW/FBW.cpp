#include <iostream>
#include <cmath>
using namespace std;

// apply the use of classes and methods to the first tut 
class FizzBuzzWolf
{
private:
	// not accessible by the user
	int number;
	int flag;
public:
	// accessible to methods 
	void setNumValues(void);
	void funct1();
	void funct2();
};


// default contructor 
void FizzBuzzWolf::setNumValues(){
	number = 1;
	flag = 0;
}

void FizzBuzzWolf::funct1(){
	// numbers must be less than and equal to 20
	while (number <= 20){

		if (number % 3 == 0){
			// intro of flag to avoid repetitive code
			flag++;
		}


		if (number % 5 == 0){
			flag = flag + 2;
		}

		else{
			cout << number << endl;
		}

		if (flag == 1){
			cout << number << " is divisible by 3\t" << "Fizz" << endl;
		}

		if (flag == 2){
			cout << number << " is divisible by 5\t" << "Buzz" << endl;
		}

		if (flag == 3){
			cout << number << " is divisible by 3 and 5\t" << "FizzBuzz" << endl;
		}

		// move to the next number in the loop
		number++;
		flag = 0;


	}
};

/*

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


}
*/

int main()
{
	FizzBuzzWolf myfuzzOBj;
	myfuzzOBj.setNumValues();
	myfuzzOBj.funct1();
	


}