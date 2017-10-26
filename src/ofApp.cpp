#include "ofApp.h"

float controlX = -1;
float controlY = -1;
float counter = 0;
const float margin = 100;
const int lineCount = 100;
const float spread = 10;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(220);
    ofSetColor(50);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    controlX = sin(counter/60)*100;
    controlY = 0;
    counter++;
    float sinPos = sin(counter/30);
    ofPolyline line;
    for(int i=0 ; i<lineCount ; i++) {
        ofPushMatrix();
        ofRotate(counter/20);
        line.curveTo(sinPos * i * spread, (-ofGetHeight()/2)+margin);
        line.curveTo(-sinPos * i * spread, (-ofGetHeight()/2)+margin);
        line.curveTo(controlX, controlY);
        line.curveTo(sinPos * i * spread, ofGetHeight()/2-margin);
        line.curveTo(-sinPos * i * spread, ofGetHeight()/2-margin);
        line.draw();
        line.clear();
        ofPushMatrix();
    }
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' ') {
        ofSaveScreen(ofToString(ofGetFrameNum())+".png");
    }
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
