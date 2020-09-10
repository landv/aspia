//
// Aspia Project
// Copyright (C) 2020 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef BASE__SESSION_ID_H
#define BASE__SESSION_ID_H

#include "build/build_config.h"

#if defined(OS_LINUX)
#include <unistd.h>
#endif

namespace base {

#if defined(OS_WIN)

using SessionId = unsigned long;
const SessionId kInvalidSessionId = 0xFFFFFFFF;
const SessionId kServiceSessionId = 0;

SessionId activeConsoleSessionId();

#elif defined(OS_LINUX)

using SessionId = pid_t;
const SessionId kInvalidSessionId = -1;

#else // defined(OS_*)

#error Not implemented

#endif

} // namespace base

#endif // BASE__SESSION_ID_H
