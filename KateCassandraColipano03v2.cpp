#include <iostream>

using namespace std;

int main()
{

	int age, time;
	char user, m2;
	float money;
	
	cout << "Program that you can attend to." << endl;
	cout << "Enter your age: ";
	cin >> age;
	
	if ( age <= 13 ){
		cout << "Are you going to watch the movie with your parents [1: Yes, 2: No]: ";
		cin >> user;
	}
	if (user == '1'){
			cout << "You can watch the rated G, PG movies.";
			}
			else if ( user == '2') {
			cout << "You can watch the rated G movies.";
			}
	else if ( age == 13 && age < 16 ){
		cout << "Are you going to watch the movie with your parents [1: Yes, 2: No]: " << endl;
	}
			if (m2 == 1){
				cout <<"You can watch the rated G, PG, R movies.";
			}
			else if (m2 == 2 ){
				cout << "You can watch the rated G, PG movies.";
			}
	else if (age > 16) {
		cout  << "You can watch the rated G, PG, R movies. " << endl;
	}
	cout << "Night or Morning? [1=Night, 2=Morning.]";
	cin >> time;
	if( time == '1'){
		cout << "Evening:$10.50 ";
		}
		 cout << "Enter Amount of Money: ";
		 cin >> money;
		 
			if ( money < 10.50) {
				cout << "Not enough money." ;
			}
			
		else if (time == '2'){
		cout << "Matinee:$7.50";
		}
			cout << "Enter Amount of Money: ";
			cin >> money;
				 if ( money < 10.50) {
				cout << "Not enough money." ;
				}
	return 0;
} 