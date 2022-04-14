#include <iostream>
#include <stdlib.h>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "VanJamSPE.h"

using namespace std;
using namespace cv;

struct FaceData
{
	Mat frame;
	vector<Rect> faces;
};

class DisplayFacesOp : public GenericOperator {
public:
	void processData(Data data) {
		double scale = 3.0;

		FaceData fd = any_cast<FaceData>(data.data);
		Mat frame = fd.frame;
		vector<Rect> faces = fd.faces;

		//draw face rectangles
		for (Rect area : faces) {

			Scalar drawColor = Scalar(0, 255, 0);

			rectangle(frame, Point(cvRound(area.x * scale), cvRound(area.y * scale)),
				Point(cvRound((area.x + area.width - 1) * scale), cvRound((area.y + area.height - 1) * scale)),
				drawColor);
		}

		//display frame
		imshow("Webcam Frame", frame);

		//exit on key press
		//if (waitKey(30) >= 0) {
		//    break;
	   // }

		std::cout << std::any_cast<int>(data.data) << std::endl;
	}
};


class VideoCaptureOp : public InputOperator {
public:
	void generateData() {
		//used to scale down image(modify if images are too large) 
		double scale = 3.0;

		//classifier that performs facedetection
		CascadeClassifier faceCascade;

		//pre-trained model used for detecting frontal face
		faceCascade.load("C:\\Program Files\\opencv\\build\\etc\\haarcascades\\haarcascade_frontalface_default.xml");

		//open video capture
		VideoCapture cap(0);
		if (!cap.isOpened()) {
			return;
		}
		
		//loop that grabs frames from webcam
		while (1) {
			//capture video frame into a matrix
			Mat frame;
			cap >> frame;

			//convert image to gray scale
			Mat grayScale;
			cvtColor(frame, grayScale, COLOR_BGR2GRAY);
			resize(grayScale, grayScale, Size(grayScale.size().width / scale, grayScale.size().height / scale));

			//detect faces
			vector<Rect> faces;
			faceCascade.detectMultiScale(grayScale, faces, 1.1, 3, 0, Size(30, 30));

			FaceData fd;
			fd.frame = frame;
			fd.faces = faces;
			emit(Data((fd));
		}
	}
};

int main()
{
	//draw face rectangles
	for (Rect area : faces) {

		Scalar drawColor = Scalar(0, 255, 0);

		rectangle(frame, Point(cvRound(area.x * scale), cvRound(area.y * scale)),
			Point(cvRound((area.x + area.width - 1) * scale), cvRound((area.y + area.height - 1) * scale)),
			drawColor);
	}

	//display frame
	imshow("Webcam Frame", frame);

	//exit on key press
	if (waitKey(30) >= 0) {
		break;
	}
}
}
