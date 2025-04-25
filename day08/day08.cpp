/*A function is a self - contained block that performs particular task

main()

{

	func1();

	func();
}

3 parts of a function:
1. Declaration / prototyping of function

int a = 10;
ret_datatype functionName(args types);

ex:

int addIntegers(int, int);
float divIntegers(int, int);
char*capsString(char*);
string capsString(string);

we would be defining/declaring in header files



2. Definition of function
where you have the body of the func defined

ex:
int addIntegers(int v1, int v2)
{
	int retValue=0;
	retValue = v1 + v2;
	return retValue;
}


1. fuc w no i/p arguments and no return type

dec:
void display(void);

void display(void)
{
	cout << "press", << endl;
	cout<<"1. addition" << endl;
	if (1)
		return;
	cout<<"2. subtraction" << endl;
	cout<<"3. multiplication" << endl;
	return;// i will return from here to thr called function
}


2.func w i / p arg and no return type


void sum(int, int);

void sum(int v1, int v2)
{
	cout<<v1<<"+"<<v2<<(v1+v2)<<endl;
}


3.fun w i / p arg and return type



int addIntegers(int v1, int v2);

int addIntegers(int v1, int v2)
{
	int retValue = 0;
	retValue = v1 + v2;
	return retValue;
}




func are classified into 
3. Calling of function


main()
{
	f1()

}
f1()
{
	f2();

}



main()
{
	int value=addIntegers(10, 20);
}
*/


//func w no i/p args and no return type
/*
#include <iostream>

using namespace std;

void display(void);

int main()
{
	int ch;
	display();
	cin >> ch;

	switch (ch)
	{
		default:
			cout << "invalid choice" << endl;
			break;
		case 1:
			cout << "addition" << endl;
			break;	
			case 2:	
				cout << "subtraction" << endl;	
				break;
				case 3:
					cout << "exit" << endl;
					break;

	}

	return 0;
}

void display()
{
	cout << "press" << endl;
	cout << "1. addition" << endl;
	cout << "2. subtraction" << endl;
	cout << "3. exit" << endl;
	cout << "choice =";
	return; // i will return from here to the called function
}

//func w i / p arg and no return type

#include <iostream>
using namespace std;

void display(void);
void display(void);


int main()
{
	int ch;
	display();
	cin >> ch;

	switch (ch)
	{
	default:
		cout << "invalid choice" << endl;
		break;
	case 1:
		cout << "addition" << endl;
		break;
	case 2:
		cout << "subtraction" << endl;
		break;
	case 3:
		cout << "exit" << endl;
		break;

	}

	return 0;
}

void display()
{
	cout << "press" << endl;
	cout << "1. addition" << endl;
	cout << "2. subtraction" << endl;
	cout << "3. exit" << endl;
	cout << "choice =";
	return; // i will return from here to the called function
}

fun w no i/p args and return type

#include <iostream>
using namespace std;

void display(void);
int displayRet(void);	

void sumIntegers(int, int);
*/	



//find the nth number made up of prime digits only, given number N=10, output=33

//Q. Check whether a given number can be expressed as the sum of two prime number

//i / p
//Enter a positive integer : 34
//Output
//34 = 3 + 31
//34 = 5 + 29
//34 = 11 + 23
//34 = 17 + 17
//NoofWays = 4

/*
#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1)
		return false;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {
	int N;
	cout << "Enter a positive integer: ";
	cin >> N;

	int count = 0;

	for (int i = 2; i <= N / 2; i++) {
		int j = N - i;
		if (isPrime(i) && isPrime(j)) {
			cout << N << " = " << i << " + " << j << endl;
			count++;
		}
	}

	cout << "No of Ways = " << count << endl;

	return 0;
}
*/


#include <iostream>

using namespace std;

int factorial(int n) {


	if (n == 1)
	{
		return 1;

	}
	else
	{
		return n * factorial(n - 1);

	}
}
int main()
{
	int num;
	cin >> num;
	int result = factorial(num);
	cout << "Enter a number: ";
	
	cout << "Factorial of " << num << " is " << result << endl;
	return 0;

}





`
		





















