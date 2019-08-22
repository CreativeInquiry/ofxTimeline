/**
 * Curves demo
 * ofxTimeline
 *
 * Shows how to use ofxTimeline to create a simple curves and color change
 */

#include "ofApp.h"

//========================================================================
int main( ){

	ofGLWindowSettings settings;
    settings.setGLVersion(4, 1);
    settings.setSize(1920, 1200);
	ofCreateWindow(settings);

	ofRunApp(new ofApp());

}
