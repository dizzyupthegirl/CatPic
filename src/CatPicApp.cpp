#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CatPicApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
private:
	  float red;
	  float green;
	  float blue;
	  
};

void CatPicApp::setup()
{
	red=0.0f;
	green=.5f;
	blue=.3f;

}

void CatPicApp::mouseDown( MouseEvent event )
{
}

void CatPicApp::update()
{
	
	red=red+0.01f;
	if(red>1.0f)
		red=0.0f;
	green=green+.03f;
	if(green>1.0f)
		green=.5f;
	blue=blue+.09f;
	if(blue>1.0f)
		blue=.3f;

}

void CatPicApp::draw()
{
	// changes the window according to the random floats assigned to each color
	gl::clear( Color( red, green, blue) ); 
}

CINDER_APP_BASIC( CatPicApp, RendererGl )