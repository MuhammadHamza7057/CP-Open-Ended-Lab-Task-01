#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Name_of_Book;
	char Borrow;
	int Borrow_Days, Borrow_Date, Return_Date;
	int Total_days = 0;
	int Fine;
	int Total_Days = 1;
	bool exit = true;
	cout << "Enter the name of Books you want to get it : ";
	cin >> Name_of_Book;
	cout << Name_of_Book << " book is Avaliable. \n";
	cout << "Do you want to Barrow press(Y/y) ? ";
	cin >> Borrow;
	if (Borrow == 'Y' || Borrow == 'y')
	{
		cout << "Okay! You must return the book within 5 days. \n Either you will be Fine $1 per Day  \n ";
		cout << "Enter your Borrow_Date : ";
		cin >> Borrow_Date;
		cout << "Enter the Return date of the current Month Date : ";
		cin >> Return_Date;
		Total_Days = Return_Date - Borrow_Date;
		if (Total_Days > 5)
		{
			Fine = Total_Days - 5;
			cout << "You Should pay the fine : " << Fine;
			cout << endl;
		}
		else
		{
			cout << "Okay ! Book is Recived No Fine Thanks \n";
		}
	}
	else
	{
		cout << "You don't want to Barrow a book! \n";
	}

	system("pause");
	return 0;
}
