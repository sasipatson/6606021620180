#include <iostream>
#include <string>

using namespace std;
int main()
{
	
	string Name ;
	int Salary ;
	int Sale ;
	float Commission ;
    cout << " Enter Name :";
	cin >> Name ;
	cout << " Enter Salary :";
	cin >> Salary ;
	cout << " Enter Sale :";
	cin >> Sale ;
	cout << " Enter Commission :";
	cin >> Commission ;
	cout << "\n Your Name = " << Name <<endl ;
    cout << " Total Revennue :" << Salary + (Sale * (Commission / 100)) <<endl;

    system("pause");
  return 0;


} 
