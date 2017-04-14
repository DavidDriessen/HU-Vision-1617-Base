#include "RGBImageStudent.h"

// Make an empty image
RGBImageStudent::RGBImageStudent() : RGBImage() {
	img = new RGB[1];
	max = 0;
}

// Clone image
RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	set(other.getWidth(), other.getHeight());
}

// Make an new image with size
RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	set(width, height);
}

// Remove image from memory
RGBImageStudent::~RGBImageStudent() {
	delete[] img;
}

// Set image size and assign memory
void RGBImageStudent::set(const int width, const int height) {
	if (img != nullptr) {
		delete[] img;
	}
	img = new RGB[width * height];
	max = width * height - 1;
}

// Set image
void RGBImageStudent::set(const RGBImageStudent &other) {
	set(other.getWidth(), other.getHeight());
}

// Set pixel value by coordinates
void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	setPixel(x + getWidth() * y, pixel);
}

// Set pixel value by index
void RGBImageStudent::setPixel(int i, RGB pixel) {
	if (i > max) {
		return;
	}
	img[i] = pixel;
}

// Get pixel value by coordinates
RGB RGBImageStudent::getPixel(int x, int y) const {
	return getPixel(x + getWidth() * y);
}

// Get pixel value by index
RGB RGBImageStudent::getPixel(int i) const {
	if (i > max) {
		return -1;
	}
	return img[i];
}