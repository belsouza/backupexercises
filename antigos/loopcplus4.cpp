#include <iostream>
#include <vector>
#include <string>

int main() {
  
  
  //std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"}; - não executa e nem compila. dá erro
  std::vector<std::string> grocery;    
  std::vector<double> delivery_order;
  
  grocery.push_back("Hot Pepper Jam");
  grocery.push_back("Dragon Fruit");
  grocery.push_back("Brussel Sprouts");
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99); 
  
   // Calculate the total using a for loop:
  
  double total = 0.0;
  
	for (int i = 0 ; i < delivery_order.size(); i++)
	{
    	total = total + delivery_order[i];    
	}
	std::cout << total << "\n";  
	std::cout << grocery.size() << "\n";  
  
}
