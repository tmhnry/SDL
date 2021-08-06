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
	
	double diff = 0.015;
	
	int counter = 0;
	
	int radius = 200;
	
	int centerx = 400;
	
	int centery = 300;
	
	while ( true )
	{
		int elapsed = SDL_GetTicks();
		
		// to slow down the oscillation rate of sin() we can multiply the argument by a very small number ( e.g. sin( arg * 0.001 ) )
		
		// int green = ( 1 + sin ( elapsed * M_PI ) ) * 128;
		
		// int green = ( 1 + sin ( elapsed * 0.001 ) ) * 128;
		
		// if ( green > max ) max = green;
		
		// cout << green << endl;
		
		for ( int y = 0; y < Screen::SCREEN_HEIGHT; y++ )
		{
			for ( int x = 0; x < Screen::SCREEN_WIDTH; x++ )
			{
				screen.setPixel ( x, y, 255, 255, 255 );
				if ( x == counter )
					screen.setPixel ( x, y, 0, 0, 0 );
					
				double xnorm = 0.0;
				double ynorm = 0.0;
				
				double diffx = x - centerx;
				double diffy = y - centery;
				
				xnorm = diffx * diffx / ( radius * radius );
				ynorm = diffy * diffy / ( radius * radius );
				
				if ( xnorm + ynorm < 1 && 1-diff < xnorm + ynorm )
					screen.setPixel ( x, y, 0, 0, 0 );
			}
		}
		
		if ( counter + 1 >= Screen::SCREEN_WIDTH )
			counter = 0;
		else
			counter ++;
			
		screen.update();
		
		if ( screen.processEvents() == false )
			break;
	}
	
	screen.close();
	
	// cout << "Max: " << max << endl;
	
	return 0;
}
