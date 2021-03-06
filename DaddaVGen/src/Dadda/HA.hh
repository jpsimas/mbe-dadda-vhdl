// Copyright (C) 2019 João Pedro de Omena Simas
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HA_HH
#define HA_HH

#include "Adder.hh"

class HA : public Adder {
public: 
  HA (std::shared_ptr<Signal> a, std::shared_ptr<Signal> b, std::shared_ptr<Signal> S, std::shared_ptr<Signal> cOut) : Adder(a, b, S, cOut){}

  std::string toString(){
    return "(" + a->toString() + ", " + b->toString() + ", " + S->toString() + ", " + cOut->toString() + ")";
  }

};

#endif
