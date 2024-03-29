/* Copyright 2023 Adam Green (https://github.com/adamgreen/)

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
// Configuration settings for mri_swd firmware.
#ifndef CONFIG_H_
#define CONFIG_H_

// UNDONE: Move other configurations parameters such as GDB packet size, etc.


// GDB socket port number.
#define GDB_SOCKET_PORT_NUMBER 4242


// SWD pin connections.
#define SWCLK_PIN 0
#define SWDIO_PIN 1


// Set each of these to 1 or 0 to enable or disable error/debug logging for each of the modules.
// swd.cpp logging
#define LOGGING_SWD_ERROR_ENABLED 1
#define LOGGING_SWD_DEBUG_ENABLED 1

// main.cpp logging
#define LOGGING_MAIN_ERROR_ENABLED 1
#define LOGGING_MAIN_DEBUG_ENABLED 1

// platform.cpp logging
#define LOGGING_PLATFORM_ERROR_ENABLED 1
#define LOGGING_PLATFORM_DEBUG_ENABLED 1

// platform.cpp logging
#define LOGGING_GDB_SOCKET_ERROR_ENABLED 1
#define LOGGING_GDB_SOCKET_DEBUG_ENABLED 0

#endif // CONFIG_H_
