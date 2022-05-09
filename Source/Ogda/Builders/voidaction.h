//-----------------------------------------------------------------------------
//           Name: voidaction.h
//      Developer: Wolfire Games LLC
//    Description:
//        License: Read below
//-----------------------------------------------------------------------------
//
//   Copyright 2022 Wolfire Games LLC
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//
//-----------------------------------------------------------------------------
#pragma once

#include "actionbase.h"
#include <iostream>

class Item;
class JobHandler;

class VoidAction : public ActionBase {
   public:
    ManifestResult Run(const JobHandler& jh, const Item& y) override;
    inline const char* GetName() const override { return "void"; }
    inline const char* GetVersion() const override { return "2"; }
    inline bool RunEvenOnIdenticalSource() const override { return true; }
    inline bool StoreResultInDatabase() const override { return false; }
};
