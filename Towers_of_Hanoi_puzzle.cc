// Towers of Hanoi -------------------------

#include <cstdlib> // for atoi
#include <iostream>

using namespace std;
// prototype 
void moveDisks(int n, const char* FROM, const char* VIA, const char* TO);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " number_of_disks" << std::endl;
    return -1;
  }
  int n = atoi(argv[1]);
  moveDisks(n, "peg A", "peg B", "peg C");
  return 0;
}
// put your moveDisks() function here 

void moveDisks(int n, const char* A, const char* B, const char* C){

	if(n==1){
		cout<<"Move disk from "<< A << " to " << C << "\n";
		
	}else{
		moveDisks(n-1,A,C,B);
		cout<< "Move disk from " << A << " to " << C << "\n" ;
		moveDisks(n-1,B,A,C);

	}

	
	}



