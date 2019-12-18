#pragma once
#include <map>
#include <string>

using namespace std;

class Layer
{
public:
	map<string, double> params, grads;
	Layer();
	~Layer();
};

class Linear:Layer
{
public:
	void forward();
	void backward();
};

class Relu :Layer
{
public:
	void forward();
	void backward();
};