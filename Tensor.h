#pragma once
class Tensor
{
public:
	Tensor();
	~Tensor();
	void dot_product();
	void cross_product();
	void mul();
	void add();
	void minus();
	void div();
	double item();
	void reshape();
	void permute();

};