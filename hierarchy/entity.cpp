#include "entity.h"
#include <cstring>
entity::entity()
{

}

entity::~entity()
{

}

bool entity::addId()
{
	char temp[ID];
	using namespace std;
	cout<<"Please enter a new User Identification number: ";
	cin.get(temp, ID, '\n');
	cin.ignore(100, '\n');

	int length = strlen(temp);

	while(length < 9 || length > 9)
	{
		cout<<"User Identification number must be 9 digits long."<<endl;
		cout<<"Please enter a new User Identification number: ";
		cin.get(temp, ID, '\n');
		cin.ignore(100, '\n');

		length = strlen(temp);
		
	}

	return memId.add(temp);

			
}