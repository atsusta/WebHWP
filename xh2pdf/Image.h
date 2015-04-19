#pragma once

#include "Object.h"

#include <string>

// �ʿ� ���� �� ����
class Image : public Object
{

public:
	void setSubtype(string subtype);
	void setLength(int length);
	void setName(int name);
	void setImageMask(bool imageMask);
	void setBitsPerComponent(int bitsPerComponent);
	void setWidth(int width);
	void setHeight(int height);
	
	void referenceObjectNo(int objectNo);
	string generateCode();

private:
	string subtype;
	int length;
	string name;
	bool imageMask;
	int bitsPerComponent;
	int width;
	int height;

};
