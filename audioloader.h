#pragma once

#include <string>
#include <memory>
#include "audio.h"

using namespace av;

namespace audioloader {
	std::unique_ptr<audio> load(std::string file);
}