// Copyright (c) 2012-2015, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "Common/StringTools.h"

namespace CryptoNote
{
  typedef std::string blobdata;

  inline bool hexToBlob(const std::string& hexStr, blobdata& blob) {
    std::vector<uint8_t> data;
    if (Common::fromHex(hexStr, data)) {
      blob = Common::asString(data);
      return true;
    }
    return false;
  }

  inline std::string blobToHex(const blobdata& blob) {
    return Common::toHex(blob.data(), blob.size());
  }

}
