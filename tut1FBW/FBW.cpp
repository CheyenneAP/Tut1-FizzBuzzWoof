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



void FizzBuzzWolf::funct2(){

	while (number <= 50){

		if (number % 3 == 0){
			flag = flag + 1;
		}
		if (number % 5 == 0){
			flag = flag + 2;
		}

		if (number % 7 == 0){
			flag = flag + 4;
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

		if (flag == 4){
			cout << number << " is divisible by 7\t" << "Wolf" << endl;
		}
		if (flag == 7){
			cout << number << " is divisible by 3,5 and 7" << "FizzBuzzWolf" << endl;
		}
		if (flag == 5){
			cout << number << " is divisible by 3 and 7\t" << "FizzWolf" << endl;
		}
		if (flag == 6){
			cout << number << " is divisible by 5 and 7\t" << "BuzzWolf" << endl;
		}
		else{

			cout << number << endl;
		}

		number++;
		flag = 0;


	}
};




int main()
{
	FizzBuzzWolf myfuzzOBj;
	myfuzzOBj.setNumValues();
	myfuzzOBj.funct1();
	


}