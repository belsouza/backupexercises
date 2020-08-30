#include <iostream>

/*

*/


// Define name_x_times() below:
void name_x_times(std::string name, int x)
{
   while(x > 0)
   {
     std::cout << name << "\n";
     x--;
   }
}

double get_tip(double price, double tip, bool total_included) {

  if (total_included) {

    return price * tip + price;

  } else {

    return price * tip;

  }

}

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number) {
  
  std::cout << "Dial " << emergency_number << "\n";
  
}

int main() {
	
	std::string my_name = "Add your name here!";
	
  	int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  
  
 	 // Original emergency services number 
 	 std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
	  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
	  get_emergency_number( new_emergency_number );
  
 	 name_x_times(my_name,5);
  
}
