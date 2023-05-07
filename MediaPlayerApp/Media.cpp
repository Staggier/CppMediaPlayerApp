#include "Media.h";

using namespace MediaPlayerApp;
using namespace std;

Media::Media(string name, string length, string imageUrl) {
	this->name = name;
	this->length = length;
	this->imageUrl = imageUrl;
};

string Media::getName() {
	return this->name;
}

void Media::setName(string name) {
	this->name = name;
}

string Media::getLength() {
	return this->length;
}

void Media::setLength(string length) {
	this->length = length;
}

string Media::getImageUrl() {
	return this->imageUrl;
}

void Media::setImageUrl(string imageUrl) {
	this->imageUrl = imageUrl;
}
