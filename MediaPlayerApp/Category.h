#pragma once

#include "Media.h"
#include <string>
#include <vector>

namespace MediaPlayerApp {

	// class for categorizing Media, each Category will have a name, image and media associated to it.
	class Category {
		private:
			std::string name;
			std::string imageUrl;
			std::vector<Media> media;

		public:
			void setName(std::string name);
			std::string getName();
			void setImageUrl(std::string imageUrl);
			std::string getImageUrl();
			void setMedia(std::vector<Media> media);
			std::vector<Media> getMedia();
			Category(std::string name, std::string imageUrl, std::vector<Media> media = std::vector<Media>());
	};
}
