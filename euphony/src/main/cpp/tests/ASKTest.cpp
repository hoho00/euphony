#include <gtest/gtest.h>
#include <Definitions.h>
#include <FSK.h>
#include <FFTProcessor.h>
#include <tuple>
#include <Base16Exception.h>

using namespace Euphony;

typedef std::tuple<string, int, int> TestParamType;

class ASKTestFeature :