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

DWORD
VmSockPosixOpenServer(
    PVMREST_HANDLE                   pRESTHandle,
    USHORT                           usPort,
    int                              iListenQueueSize,
    VM_SOCK_CREATE_FLAGS             dwFlags,
    PVM_SOCKET*                      ppSocket,
    char*                            sslCert,
    char*                            sslKey
    );

DWORD
VmSockPosixCreateEventQueue(
    PVMREST_HANDLE                   pRESTHandle,
    int                              iEventQueueSize,
    PVM_SOCK_EVENT_QUEUE*            ppQueue
    );

DWORD
VmSockPosixEventQueueAdd(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCK_EVENT_QUEUE             pQueue,
    PVM_SOCKET                       pSocket
    );

DWORD
VmSockPosixWaitForEvent(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCK_EVENT_QUEUE             pQueue,
    int                              iTimeoutMS,
    PVM_SOCKET*                      ppSocket,
    PVM_SOCK_EVENT_TYPE              pEventType
    );

DWORD
VmSockPosixCloseEventQueue(
    PVMREST_HANDLE                  pRESTHandle,
    PVM_SOCK_EVENT_QUEUE            pQueue,
    uint32_t                        waitSecond
    );

DWORD
VmSockPosixSetNonBlocking(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket
    );

DWORD
VmSockPosixRead(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket,
    char**                           ppszBuffer,
    uint32_t*                        nBufLen
    );

DWORD
VmSockPosixWrite(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket,
    char*                            pszBuffer,
    uint32_t                         nBufLen
    );

VOID
VmSockPosixReleaseSocket(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket
    );

DWORD
VmSockPosixCloseSocket(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket
    );

DWORD
VmSockPosixGetRequestHandle(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket,
    PREST_REQUEST*                   ppRequest
    );

DWORD
VmSockPosixSetRequestHandle(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket,
    PREST_REQUEST                    pRequest,
    uint32_t                         nProcessed,
    PVM_SOCK_EVENT_QUEUE             pQueue
    );

DWORD
VmSockPosixGetPeerInfo(
    PVMREST_HANDLE                   pRESTHandle,
    PVM_SOCKET                       pSocket,
    char*                            pIpAddress,
    uint32_t                         nLen,
    int*                             pPortNo
    );

uint32_t
VmRESTGetSockPackagePosix(
     PVM_SOCK_PACKAGE*               ppSockPackagePosix
     );

VOID
VmRESTFreeSockPackagePosix(
    PVM_SOCK_PACKAGE                 pSockPackagePosix
    );

uint32_t
VmRESTSSLThreadLockInit(
    void
    );

void
VmRESTSSLThreadLockShutdown(
    void
    );

uint32_t
VmRESTSecureSocket(
    PVMREST_HANDLE                   pRESTHandle,
    char*                            certificate,
    char*                            key
    );

