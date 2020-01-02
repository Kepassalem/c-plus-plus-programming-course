#pragma once
class Shallow
{
private:
	int* data;
public:
	void setDataValue(int d) { *data = d; }
	int getDataValue() { return *data; }

	Shallow(int d);
	Shallow(const Shallow& source);

	~Shallow();
};
