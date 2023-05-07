#pragma once

#include <string>

namespace MediaPlayerApp {

	// Media class; Contains the name, video length and image associated to the media.
	class Media {
		private:
			std::string name;
			std::string length;
			std::string imageUrl;

		public:
			void setName(std::string name);
			std::string getName();
			void setLength(std::string length);
			std::string getLength();
			void setImageUrl(std::string imageUrl);
			std::string getImageUrl();
			Media(std::string name, std::string length, std::string imageUrl);
	};
}
