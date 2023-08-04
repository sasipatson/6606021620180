#include <iostream>
using namespace std;
int main()
{
	int age , height ,weight ;
	char  sex ;
	float BMI ;
	cout << "Enter age : " ;
	cin >> age ;
	cout << "Enter weight : " ;
	cin >> weight ;
	cout << "Enter height : " ;
	cin >> height ;
	cout << "Enter sex : " ;
	cin >> sex ;
	BMI = weight / (height/100 * height) ;
	cout << "BMI = " << BMI <<endl;
	if(BMI <=18.5) cout << "underweight\n" ;
	else if(BMI <= 25) cout <<"normal\n" ;
	else if(BMI <=35) cout <<"overweight\n" ;
	else if(BMI <=40) cout <<"obesity\n" ;

return (0);
}

	