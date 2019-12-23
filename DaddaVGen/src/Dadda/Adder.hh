// Copyright (C) 2017 Henrique Ogawa, Lucas Gaia
// Copyright (C) 2017 João Pedro de Omena Simas
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

#ifndef ADDER_HH
#define ADDER_HH

class Adder {
 protected:
  std::shared_ptr<Signal> a;
  std::shared_ptr<Signal> b;
  std::shared_ptr<Signal> S;
  std::shared_ptr<Signal> cOut;

 public:
  Adder(std::shared_ptr<Signal> a, std::shared_ptr<Signal> b, std::shared_ptr<Signal> S, std::shared_ptr<Signal> cOut) :
    a(a), b(b), S(S), cOut(cOut){}

  virtual std::string toString() = 0;

};

#endif