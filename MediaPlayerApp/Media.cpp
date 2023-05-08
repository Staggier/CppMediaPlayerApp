#include "Media.h";

using namespace MediaPlayerApp;
using namespace std;

Media::Media(string name) {
	this->name = name;
};

string Media::getName() {
	return this->name;
}

void Media::setName(string name) {
	this->name = name;
}

