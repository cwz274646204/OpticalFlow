#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "OpticalFlow.h"

#define _USE_LIVE_VIDEO		// uncomment this to use a live camera
								// otherwise, we'll use a movie file

#define CAM_WIDTH				320
#define CAM_HEIGHT				240
#define PROCESSING_WIDTH		320
#define PROCESSING_HEIGHT		240

class testApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);

        #ifdef _USE_LIVE_VIDEO
		  ofVideoGrabber 		vidGrabber;
		#else
		  ofVideoPlayer 		vidPlayer;
		#endif

        ofxCvColorImage		colorImg;

        ofxCvGrayscaleImage 	grayImage;
		OpticalFlow	*			opticalFlow;
	
		ofColor	colors[MAX_FEATURES];
		
};

#endif
