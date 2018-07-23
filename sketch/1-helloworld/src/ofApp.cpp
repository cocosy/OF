#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    logo.load("tu.jpg") ;
}

//--------------------------------------------------------------
void ofApp::update(){
    windowWidth = ofGetWidth() ;
    windowHeight = ofGetHeight() ;
    logoWidth = windowWidth / 2 ;
    logoHeight = windowHeight / 2;
    xCoord = windowWidth / 2 - logoWidth / 2 ;
    yCoord = windowHeight / 2 - logoHeight / 2 ;
}

//--------------------------------------------------------------
void ofApp::draw(){
    logo.draw(xCoord, yCoord, logoWidth, logoHeight) ;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
