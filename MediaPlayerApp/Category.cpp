#include "category.h"

using namespace MediaPlayerApp;
using namespace std;

Category::Category(string name, string imageUrl, vector<Media> media) {
	this->name = name;
	this->imageUrl = imageUrl;
	this->media = media;
}

string Category::getName() {
	return this->name;
}

void Category::setName(string name) {
	this->name = name;
}

string Category::getImageUrl() {
	return this->imageUrl;
}

void Category::setImageUrl(string imageUrl) {
	this->imageUrl = imageUrl;
}

vector<Media> Category::getMedia() {
	return this->media;
}

void Category::setMedia(vector<Media> media) {
	this->media = media;
}
