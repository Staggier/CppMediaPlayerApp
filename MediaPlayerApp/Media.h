#pragma once

#include <string>

namespace MediaPlayerApp {

	// Media class; Contains the name, video length and image associated to the media.
	class Media {
		private:
			std::string name;

		public:
			void setName(std::string name);
			std::string getName();
			Media(std::string name);
	};
}
