#pragma once
class Deep
{
private:
	int* data;
public:
	void setDataValue(int d) { *data = d; }
	int getDataValue() { return *data; }

	Deep(int d);
	Deep(const Deep& source);

	~Deep();
};