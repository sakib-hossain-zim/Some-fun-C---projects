#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;  


int input_Number;
std::string  quitGame;
int valChosen;



int main(void){
	char *chosen = new char[100];
	srand(time(NULL));

	input_Number = rand() %  + 1;
    
    cout<<"Guess a number between 1 to 100"<<endl ;

    cin >> chosen;

    valChosen = atoi(chosen);

    while(valChosen != input_Number){

    	cout<<"WRONG GUESS, put another number or choose QUIT to exit"<<endl;
    	cin>>chosen;
    	quitGame = chosen;
    	
    	

     if ( quitGame == "QUIT") {
    	cout<<"GAME OVER"<<endl;
    	exit(EXIT_SUCCESS);
    	
    }
}

       if(valChosen==input_Number){
       	cout<<"WONDERFUL GUESS"<<endl ;
       }







}