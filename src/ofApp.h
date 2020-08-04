#pragma once

#include "ofMain.h"
#include "BlurEffect.hpp"

class ofApp : public ofBaseApp{
	public:

    void setup();
    void update();
    void draw();
   
	ofFbo fbo;
    ofVideoGrabber camera;
	BlurEffect blurEffect;
};
