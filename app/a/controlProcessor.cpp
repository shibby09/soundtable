#include "controlProcessor.h"
#include <QDebug>
using namespace cv;


ControlProcessor::ControlProcessor():
    filterProcessor(new FilterProcessor())
  , detectProcessor(new DetectProcessor())
  , frameCount(0)
{

}

Mat ControlProcessor::process(const Mat &input){
    frameCount=frameCount+1;

    unprocessedFrame = input;
    processedFrame=filterProcessor->process(unprocessedFrame);
    detectProcessor->analyse(processedFrame);


    return processedFrame;
    
   }



