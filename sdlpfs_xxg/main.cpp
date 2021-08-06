#include <iostream>
#include <iomanip>
using namespace std;


int main(){

	// 0xFF123456
	
	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;

	unsigned int color = 0;

	color += alpha;
	
	// same as color = color << 8;
	color <<= 8;
	
	color += red;
	
	color <<= 8;

	color += green;

	color <<= 8;

	color += blue;

	cout << color << endl;

	cout << setw(8) << setfill('0') << hex << color << endl;

	// from caveofprogramming:
	cout << setfill('0') << setw(8) << hex << color << endl;

	return 0;
}
