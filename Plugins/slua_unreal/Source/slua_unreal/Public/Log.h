// Tencent is pleased to support the open source community by making sluaunreal available.

// Copyright (C) 2018 THL A29 Limited, a Tencent company. All rights reserved.
// Licensed under the BSD 3-Clause License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at

// https://opensource.org/licenses/BSD-3-Clause

// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#pragma once
#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Slua, Log, All);

namespace NS_SLUA {
    namespace Log {

        void SLUA_UNREAL_API Error(const char* fmt,...);
        void SLUA_UNREAL_API Log(const char* fmt,...);
        void SLUA_UNREAL_API Verbose(const char* fmt, ...);
        
        void SLUA_UNREAL_API Error(const wchar_t* fmt,...);
        void SLUA_UNREAL_API Log(const wchar_t* fmt,...);
        void SLUA_UNREAL_API Verbose(const wchar_t* fmt, ...);
    }
}