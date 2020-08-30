#include <iostream>
#include <vector>

/*
Go to Toolbar -> Settings -> Compiler
In the "Selected compiler" drop-down menu, make sure "GNU GCC Compiler" is selected
Below that, select the "compiler settings" tab and then the "compiler flags" tab underneath
In the list below, make sure the box for 
"Have g++ follow the C++11 ISO C++ language standard [-std=c++11]" is checked
Click OK to save
*/

int main()
{
  std::vector<int> num = {2, 4, 3, 6, 1, 9};
  double sum = 0.0;
  double prod = 1.0;
  
      
  for(int i = 0; i <= num.size(); i++)
  {
    if(num[i] % 2 == 0)
    {
      prod = prod * num[i];
    }
    else
    {
      sum = sum + num[i];
    }
    
  }
  
  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is " << prod << "\n";
}
