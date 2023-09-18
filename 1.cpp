#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int manin()
{
	int score[4],total=0,max=0,min;
	string name[4];
	for (int i = 0; i < 4;i++)
	{	cout <<"Name ["<<i<<"] : ";
		cin >>name[i];
		cout <<"Score ["<<i<<"] : ";
		cin >>score[i];
	}
	min = score[0];
	cout <<"------------------------"<<endl;
	cout <<"Name\t\tScore"<<endl;
	cout <<"------------------------"<<endl;
	for (int i = 0; i < 4; i++)
	{	cout<<name[i]<<"\t\t"<<score[i]<<endl;
		total = total+score[i];
		if(score[i] > max)
			max = score[i];
		else if(score[i] < min)
			min = score[i];
	}
	cout <<"------------------------"<<endl;
	cout <<"Max Score = "<<max<<endl;
	cout <<"Min Score = "<<min<<endl;
	cout <<"Total = "<<total<<endl;
	cout <<"Average = "<<(float)total/4<<endl;

system ("pause");
return 0;
}