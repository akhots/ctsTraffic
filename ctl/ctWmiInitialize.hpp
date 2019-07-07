/*

Copyright (c) Microsoft Corporation
All rights reserved.

Licensed under the Apache License, Version 2.0 (the ""License""); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

THIS CODE IS PROVIDED ON AN  *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.

See the Apache Version 2.0 License for specific language governing permissions and limitations under the License.

*/

#pragma once

///
/// Compilation units must link against the following library when including ctWmi* headers:
/// - wbemuuid.lib
///

/// load all ctWmi headers in to Initialize
#include "ctWmiService.hpp"
#include "ctWmiClassObject.hpp"
#include "ctWmiInstance.hpp"
#include "ctWmiEnumerate.hpp"
#include "ctWmiVariant.hpp"
