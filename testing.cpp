#include <iostream>
using namespace std;

void printmap();
int updatemap();

//char blank = '~';
//char hit = 'X';
//char miss = 'O';
int first;
int second;
bool lose = false;
char numbers[10][10];
char plots[10][10];


int main(){
	printmap();
	while (lose==false){
	cout << "Enter Coordinates to attack. " << endl;
	cout << "(Two digits (0-9), separated by a space.)"<< endl;
	cin >> first >> second;
	updatemap();
	}
	return 0;
}

void printmap(){
	cout << endl << "       0 1 2 3 4 5 6 7 8 9" << endl;
	cout        <<  "       ____________________" << endl;
	
	for(int x=0; x<10; x++){
		for( int y=0; y<10; y++){
			numbers[x][y] = '~';
		}
	}

	for(int x=0; x<10; x++){
		cout << "    " << x << " | ";
		for( int y=0; y<10; y++){
			cout << numbers[x][y] << " ";
		}
		cout << endl;
	}
		for(int x=0; x<10; x++){
		for( int y=0; y<10; y++){
		plots[x][y] = '~';
		}
		}
}

int updatemap(){
	cout << endl << "       0 1 2 3 4 5 6 7 8 9" << endl;
	cout        <<  "       ____________________" << endl;

	for(int x=0; x<10; x++){
		for( int y=0; y<10; y++){
			if ((numbers[first]==numbers[x])&&(numbers[second]==numbers[y])){
				if ((numbers[first]==plots[1])&&(numbers[second]==plots[2]))
				{(plots[x][y] = 'X');}
				else{
				(plots[x][y] = 'O');}
			}
		}
	}
	for(int x=0; x<10; x++){
		cout << "    " << x << " | ";
		for( int y=0; y<10; y++){
			cout << plots[x][y] << " ";
		}
	cout << endl;
	}
	
		return 0;
	}

