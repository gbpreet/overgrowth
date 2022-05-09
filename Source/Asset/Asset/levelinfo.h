//-----------------------------------------------------------------------------
//           Name: levelinfo.cpp
//      Developer: Wolfire Games LLC
//    Description:
//        License: Read below
//-----------------------------------------------------------------------------
//
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

#include <Asset/assetbase.h>
#include <Asset/assetinfobase.h>

#include <XML/Parsers/levelxmlparser.h>

#include <vector>

class LevelInfoAsset : public Asset {
   private:
    LevelXMLParser levelparser;
    std::string path;

   public:
    LevelInfoAsset(AssetManager* owner, uint32_t asset_id);
    static AssetType GetType() { return LEVEL_INFO_ASSET; }
    static const char* GetTypeName() { return "LEVEL_INFO_ASSET"; }
    const char* GetLoadErrorString() { return ""; }
    const char* GetLoadErrorStringExtended() { return ""; }
    static bool AssetWarning() { return false; }

    int Load(const std::string& path, uint32_t load_flags);
    void ReportLoad() override;
    AssetLoaderBase* NewLoader() override;
    void Unload();

    const std::string GetLevelName();
    const std::string& GetLoadingScreenImage();
};

typedef AssetRef<LevelInfoAsset> LevelInfoAssetRef;
