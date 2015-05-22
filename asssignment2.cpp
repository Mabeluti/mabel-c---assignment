/*
 *  Question2.cpp
 *
 *  Name:           [ mabel nkem]
 *  reg no: pds/2013/0401
 *  Department:     [ mathematics]
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 */
 
 #include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x, y;
	
	cout << "Enter the two integers. \n";
	cin >> x >> y;
	
	if (x % y == 0)
	cout << "First is a multiple of the second. \n";
	else
	cout << "First is not a multiple of the second. \n";
	
	return 0;
	system("PAUSE");
	
	return 'EXIT_SUCCESS';
}
