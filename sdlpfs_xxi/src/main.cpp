#include <iostream>
#include <math.h>
#include "Screen.h"
using namespace std;
using namespace titor;
int main()
{
	Screen screen;
	if ( screen.init() == false )
		cout << "Error initializing SDL." << endl;
		
	int max = 0;
	
	while ( true )
	{
		int elapsed = SDL_GetTicks();
		
		// to slow down the oscillation rate of sin() we can multiply the argument by a very small number ( e.g. sin( arg * 0.001 ) )
		
		// int green = ( 1 + sin ( elapsed * M_PI ) ) * 128;
		
		// int green = ( 1 + sin ( elapsed * 0.001 ) ) * 128;
		
		// if ( green > max ) max = green;
		
		// cout << green << endl;
		
		unsigned char green = ( unsigned char ) ( ( 1+sin ( elapsed * 0.01 ) ) * 128 );
		
		unsigned char red = ( unsigned char ) ( ( 1+sin ( elapsed * 0.05 ) ) * 128 );
		
		unsigned char blue = ( unsigned char ) ( ( 1+sin ( elapsed * 0.09 ) ) * 128 );
		
		cout << ( int ) green << endl;
		
		for ( int y = 0; y < Screen::SCREEN_HEIGHT; y++ )
		{
			for ( int x = 0; x < Screen::SCREEN_WIDTH; x++ )
				screen.setPixel ( x, y, red, green, blue );
		}
		
		screen.update();
		
		if ( screen.processEvents() == false )
			break;
	}
	
	screen.close();
	
	// cout << "Max: " << max << endl;
	
	return 0;
}
