#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>

#include "Pokemon.hpp"
#include "Trainer.hpp"

using namespace std;

class League {
private:
  // TODO: Add member variables here

public:

  // TODO: Add constructor here to initialize members
  



  // TODO: Add member functions here



  

  ~League() {
    // TODO: put code here to clean up by deleting all Trainer objects
    
  }
  
};

int main(int argc, char *argv[]) {

  // TODO: Add code to read command line args and open file streams here
  if (argc != 3) {
    cout << "Usage: battle.exe PLAYER_FILE GYM_LEADERS_FILE" << endl;
    return 1;
  }

  std::string player_in_name = argv[1];
  std::string gym_leaders_in_name = argv[2];

  std::ifstream player_in(player_in_name);
  if ( !player_in.is_open() ) {
    cout << "Unable to open " << player_in_name << endl;
    return 1;
  }
  std::ifstream gym_in(gym_leaders_in_name);
  if ( !gym_in.is_open() ) {
    cout << "Unable to open " << gym_leaders_in_name << endl;
    return 1;
  }
  


  // TODO: Create a League object, call function to run the simulation
  

  
}