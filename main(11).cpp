#include <iostream>

using namespace std;

//a = list()
//no append, fixed sizeo
//index, remove, replace

double arr[10], addition, average; //empty array
double arr2[10] = {-95, 0.2, 8, 4, -3, 6, 35, -420, 11, 99}; //array

int main() 
{
  for (int i = 0; i < 10; i++)
  {
  	//cout << arr2[i] << ", ";
  	addition += arr2[i];
  }
  
  average = addition / 10;
  
  cout << average << endl;
	
	
	
	
	
  for (int i = 0; i < 10; i++)
  {
  	arr[i] = arr2[i] / 3;	
  }	
  
  for (int i = 0; i < 10; i++)
  {
  	cout << arr[i] << ", ";
  }
  
  return 0;
}