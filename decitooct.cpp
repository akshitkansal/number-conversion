#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void decitooct();
void octtodeci();
int main()
{
	system("cls");
	cout<<"\t\tCONVERSION\n\n";
	int ch;
	char c;
	cout<<"Choose one of the following:\n1. Octal to decimal.\n2. Decimal to octal.\n3. Exit\n\nEnter your choice: ";
	cin>>ch;
	fflush (stdin);
	
	switch (ch)
		{
			case 1: octtodeci();
					break;
					
			case 2: decitooct();
					break;
					
			case 3: exit(0);
					break;
					
			default: cout<<"\nEnter the valid option.";
		}
	
	cout<<"\n\nDo you want to continue? Y/N\nEnter your choice: ";
	cin>>c;
	fflush (stdin);
	if ((c=='y')||(c=='Y'))
		{
			main();
		}
	else 
		{
			exit (0);
		}
}
void decitooct()
{
	system("cls");
	int deci,oct=0,rem,rem1,oct1=0;
	cout<<"\t\tDECIMAL TO OCTAL\n\n";
	cout<<"Enter the decimal no.: ";
	cin>>deci;
	while (deci!=0)
		{
			rem=deci%8;
			oct=(oct*10)+rem;
			deci=deci/8;
		}
	while (oct!=0)
		{
			rem1=oct%10;
			oct1=oct1*10+rem1;
			oct=oct/10;
		}
	cout<<"Octal no. is: "<<oct1;
}
void octtodeci()
{
	system("cls");
	int deci=0,oct,rem,i=0;
	cout<<"\t\tOCTAL TO DECIMAL\n\n";
	cout<<"Enter the octal no.: ";
	cin>>oct;
	while (oct!=0)
		{
			rem=oct%10;
			deci=deci+(rem*pow(8,i));
			i=i+1;
			oct=oct/10;
		}
	cout<<"Decimal no. is: "<<deci;
}
