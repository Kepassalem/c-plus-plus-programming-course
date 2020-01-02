#pragma once
class Move
{
private:
	int* data;

public:
	void setDataValue(int d) { *data = d; }
	int getData() { return *data; }

	Move(int d);
	Move(const Move& source);
	Move(Move&& source) noexcept;
	~Move();
};
