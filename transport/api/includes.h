/* C-REST-Engine
*
* Copyright (c) 2017 VMware, Inc. All Rights Reserved. 
*
* This product is licensed to you under the Apache 2.0 license (the "License").
* You may not use this product except in compliance with the Apache 2.0 License.  
*
* This product may include a number of subcomponents with separate copyright 
* notices and license terms. Your use of these subcomponents is subject to the 
* terms and conditions of the subcomponent's license, as noted in the LICENSE file. 
*
*/

#ifndef _WIN32
#include <config.h>
#include <stdint.h>
#else
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#include <windows.h>
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int8 uint8_t;
#include <stdio.h>
#include <assert.h>
#include <stddef.h>
#include <Ws2tcpip.h>
#endif


#include <vmrestdefines.h>
#include <vmsock.h>
#include <vmrestcommon.h>

#ifdef _WIN32
#include <vmwinsock.h>
#else
#include <vmsockposix.h>
#include <arpa/inet.h>
#endif



#include "defines.h"
