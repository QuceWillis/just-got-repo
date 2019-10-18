/*
 Sticks program
 integers would be thought of as digital numbers and each line would count as one stick
 ex. 1 would be 2 sticks, 2 would be 5 sticks, 7 would be 3 sticks etc
 Program will display highest and lowest integer you can achieve with x amount of sticks
 */

#include <iostream>
using namespace std;

int main()
{
int num_sticks, high_sticks, low_sticks; 	//used to hold the initial number to be divided from
bool isTrue = true;	//for the entire program to run if its true;

do	//loop for entire project to run if 0 is not entered
{
bool check = true;	//if true loop will continue past 10ths place
bool check2 = false;	//stops if the largest loop can no longer increase
int low, high;		//for the low numbers to print out exact 

	do
	{
	cout << "Enter an integer from 2 to 100 (Enter 0 to quit): ";
	cin >> num_sticks;
	high_sticks = num_sticks;
	low_sticks = num_sticks;

	if((num_sticks < 2) || (num_sticks > 100))
	{
		cout << "Integer is not between 2 and 100" << endl;
	}

	} while(((num_sticks < 2) || (num_sticks > 100)) && (num_sticks != 0));		//loop to get a proper int from user

	if (num_sticks == 0)
	{
		cout << "End of Code" << endl;
		isTrue = false;
	}	//ends code

	if (num_sticks == 2)
	{
		low = 1;
		high = 1;
	}

	if (num_sticks == 3)
	{
		low = 7;
		high = 7;
	}

	if (num_sticks == 4)
	{
		low = 4;
		high = 11;
	}

	if (num_sticks == 5)
	{
		low = 2;
		high = 71;
	}

	if (num_sticks == 6)
	{
		low = 6;
		high = 111;
	}

	if (num_sticks == 7)
	{
		low = 8;
		high = 711;
	}

	if (num_sticks == 8)
	{
		low = 10;
		high = 1111;
	}

	if (num_sticks == 9)
	{
		low = 18;
		high = 7111;
	}

	if (num_sticks == 10)
	{
		low = 22;
		high = 11111;
	}

	if ((num_sticks < 11) && (num_sticks > 1))
	{
		cout << "Lowest number: " << low << "    " << "Highest number: " <<  high << endl;
	}	//prints out the exact amount


/* if you divide by 7 and modulus = 3 through 5 the first number will be 2
 if you divide by 7 and modulus = 1 though 2 the first number will be 1
 if you divide by 7 and modulus = 6 the first number will be a 6
 if you divide by 7 and modulus = 0 the first number will be an 8
 if you divide by 7 and modulus = 1 the second number will be 0
 if you divide by 7 and modulus = 2 the second number will be 8
 if you divide by 7 and modulus = 3 the second number will be 0
 if you divide by 7 and modulus = 4 the second number will be 0
 if you divide by 7 and modulus = 5 the second number will be 8
 if you divide by 7 and modulus = 6 the second number will be 8
 if you divide by 7 and modulus = 0 the second number will be 8
 starting at 15
 if modulus = 1 last number & third number will be 8
 if modulus = 2 last number & third number will be 8
 if modulus = 3 third number will be 0
 if modulus = 4 through 0 third number will be 8	*/


	if (high_sticks > 10)
	{
		check2 = true;
	}	//allows highest num loop to run

	while ((num_sticks > 10) && (check == true))		//loop for the larger numbers while less than 15
	{
			
		bool first_num = true;		//is it the first number
		bool sec_num = true;		//is it the second number
		bool third_num = true;		//is it the third number

		cout << "Smallest number: ";

		if (first_num == true)	
		{	
			if ((num_sticks % 7 == 3) || (num_sticks % 7 == 4) || (num_sticks % 7 == 5))
			{
				cout << "2";
				first_num = false;
			}

			if ((num_sticks % 7 == 1) || (num_sticks % 7 == 2))
			{
				cout << "1";
				first_num = false;
			}

			if (num_sticks % 7 == 6)
			{
				cout << "6";
				first_num = false;
			}

			if (num_sticks % 7 == 0)
			{
				cout << "8";
				first_num = false;
			}
		}		//decides which number will be printed first

		if (sec_num == true)
		{
			if ((num_sticks % 7 == 1) || (num_sticks % 7 == 3) || (num_sticks % 7 == 4))
			{
				cout << "0";
				sec_num = false;
			}

			if ((num_sticks % 7 == 2) || (num_sticks % 7 == 5) || (num_sticks % 7 == 6) || (num_sticks % 7 == 0))
			{
				cout << "8";
				sec_num = false;
			}
		}		//decides which number will be printed second

		if (num_sticks < 15 )
		{
			cout << "      ";
			check = false;
		}		//continues to the loop for numbers larger than the 10ths place


		while (low_sticks > 14 && third_num == true)
		{
			
			if (low_sticks % 7 == 3)
			{
				cout << "0";
				low_sticks = low_sticks - 7;
				third_num = false;
				if (low_sticks == 10)
				{
					check = false;
				}
			}
			else
				third_num = false;

		}		//prints out 0 for the third number

		while ((check != false) && (low_sticks > 14))
		{
				if ((low_sticks % 7 == 1)  || (low_sticks % 7 == 2) || (low_sticks % 7 == 3) || (low_sticks % 7 == 4) || (low_sticks % 7 == 5) || (low_sticks % 7 == 6) || (low_sticks % 7 == 0))
				{
					cout << "8";
					low_sticks = low_sticks - 7;
				}

		}		//prints out 8 for third number and on


		check = false;		//ends the lowest loop



		cout << "     ";	//seperates the lowest amount from the highest amount
	}

	while ((high_sticks > 3) && (check2 == true))		//for the highest number loop
	{

		bool num_first = true;		//first number for the highest number loop

		cout << "Largest number: ";

		if (num_first == true)
		{
			if (high_sticks % 2 == 0)
			{
				cout << "1";
				num_first = false;
			}

			if (high_sticks % 2 == 1)
			{
				cout << "7";
				num_first = false;
			} 


		}		//prints out 1 or 7 for the first number

		while (high_sticks > 3)
		{
			cout << "1";
			high_sticks = high_sticks - 2;
		}		//prints out 1 for the next numbers

		cout << endl;
		check2 = false;			

	
	
	}

	cout << endl;

}while(isTrue == true);		//end of program
	return 0;
}
