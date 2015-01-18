#include "ControlProcessor.h"
#include <QDebug>
using namespace cv;


ControlProcessor::ControlProcessor():
    filterProcessor(new FilterProcessor())
  , frameCount(0)
{

}

Mat ControlProcessor::process(const Mat &input){
    frameCount=frameCount+1;
    unprocessedFrame = input;
    processedFrame=filterProcessor->process(unprocessedFrame);
    qDebug() << "hueLowerThreshold: " << frameCount;
    return processedFrame;
    
   }



