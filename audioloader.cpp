#include "audioloader.h"

using namespace av;

namespace audioloader {
	std::unique_ptr<audio> load(std::string file) {
		return std::unique_ptr<audio>(new audio());
	}
}