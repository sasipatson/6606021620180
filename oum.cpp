#include <iostream>
using namespace std;
void Calcircle();
int main()
{	char Ch;

	do{
		cout <<"Program Calculate of Circle."<<endl;
		cout <<"************************************"<<endl;
		cout <<"1.Circle"<<endl;
		cout <<"2. Rectangle"<<endl;
		cout <<"3.Exit :";
		cout <<"Choose Menu :";
		cin >>Ch;
		if(Ch == '1')Calcircle();
			else if(Ch == '2')cout <<"Rectangle"<<endl;
				else if(Ch == '3')cout <<"Exit"<<endl;
					else cout <<"Wrong Menu"<<endl;
	}while(Ch != '3');
	system("pause");
	return(0);
}
void Calcircle()
{
	float radius,area,circumference;
	cout <<"Input radius :";
	cin >>radius;
	area = 3.14f*radius*radius;
	circumference = 2*3.14f*radius;;
	cout <<endl;
	cout <<"Area of circle :"<<area<<endl;
	cout <<"circumference of circle :"<<circumference<<endl;
	cout <<"Diameter of circle :"<<(2*radius)<<endl;
}
void Rectangle()
{
	int wi,lo,area;
	cout <<"Input Width :";
	cin >>wi;
	cout <<"Input long :";
	cin >>lo;
	area = wi*lo;
	cout <<"Area of Rectangle :"<<area<<endl;
	cout <<endl;
}