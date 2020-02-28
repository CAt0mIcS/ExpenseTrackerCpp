#ifndef JSON_H
#define JSON_H

#include "rapidjson/reader.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/error/en.h"
#include "rapidjson/document.h"

#include <qmessagebox.h>
#include "Declarations.h"

using namespace rapidjson;

class JSON : Document
{
public:
	const char* path;

	Document d;

	//StringBuffer buffer;
	//Writer<StringBuffer> writer(buffer);
	//d.Accept(writer);

	JSON(const char* path);

	~JSON();


	void read();

private:
	QMessageBox* msg;

};


#endif