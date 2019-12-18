#pragma once
class Optimizer
{
public:
	Optimizer();
	~Optimizer();
	void zero_grad();
	void step();
};

