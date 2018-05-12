/*
 *    OpenRDK : OpenSource Robot Development Kit
 *    Copyright (C) 2007, 2008  Daniele Calisi, Andrea Censi (<first_name>.<last_name>@dis.uniroma1.it)
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <string>

#include <sys/types.h>
#include <stdint.h>
#include <rdkcore/textutils/textutils.h>

/**
 * @file
 *
 * AC: sicuro sicuro di includere tutto nel namespace RDK2?
 * Se sono dichiarazioni globali perch� non le mettiamo
 * direttamente in rdk2/globals.h  invece che nascoste
 * in serialization/utils.h?
 */
namespace RDK2 {
	using namespace std;
	
	// DC: ovviamente non � detto
	typedef float float32_t;
	typedef double float64_t;
	using RDK2::TextUtils::cstr;
}