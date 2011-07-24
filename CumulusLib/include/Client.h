/* 
	Copyright 2010 OpenRTMFP
 
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License received along this program for more
	details (or else see http://www.gnu.org/licenses/).

	This file is a part of Cumulus.
*/

#pragma once

#include "Cumulus.h"
#include "Entity.h"
#include "Poco/URI.h"
#include <map>

namespace Cumulus {


class Client : public Entity {
public:
	Client() {}
	virtual ~Client() {}

	const Poco::URI								swfUrl;
	const Poco::URI								pageUrl;

	std::vector<Poco::UInt8>					data;

	// Query URL content
	const std::string							path;
	const std::map<std::string,std::string>		parameters;
};


} // namespace Cumulus
