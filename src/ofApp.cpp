#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60);

	camera.setVerbose(false);
	camera.setup(ofGetWidth(), ofGetHeight());
    
	fbo.allocate(ofGetWidth(), ofGetHeight());
	cout << ofGetWidth() << " : " << ofGetHeight();
}


//--------------------------------------------------------------
void ofApp::update()
{
	ofSetWindowTitle(ofToString(ofGetFrameRate()));
	camera.update();
	fbo.begin();
	camera.draw(0,0);
	ofColor(255);
	ofDrawCircle(mouseX, mouseY, 30);
	fbo.end();

	blurEffect.update(&fbo);
}

//--------------------------------------------------------------
void ofApp::draw()
{
	blurEffect.draw();
}



