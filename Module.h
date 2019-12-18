#pragma once
#include <map>
#include <vector>
#include "Layer.h"

using namespace std;
class Module
{
public:
	Module();
	~Module();
};

class Sequential :Module
{
public:
	std::vector<Layer> layers;
	void forward();
	void backward();
};