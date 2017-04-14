#include "StudentPreProcessing.h"
#include "ImageFactory.h"

IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * img = ImageFactory::newIntensityImage(); // Get Image too fill
	img->set(image.getWidth(), image.getHeight());	// Set GrayScale image size
	int max = image.getWidth() * image.getHeight();	// Calculate position of last pixel
	for (int i = 0; i < max; i++) { // Loop through all pixels
		img->setPixel(i, (image.getPixel(i).r + image.getPixel(i).g + image.getPixel(i).b)/3); // Set pixel intensity by getting the avarage of the color channels
	}
	return img; // Return the GrayScale image
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}