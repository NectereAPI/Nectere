#pragma once

#define NECTERE_EVENT_TEMPLATE -1
//0 - 99 Error codes
#define NECTERE_EVENT_UNKNOWN_ERROR 0
#define NECTERE_EVENT_MISFORMATTED 1
//100 - 199 Client response
#define NECTERE_EVENT_USER_CONNECTED 100
#define NECTERE_EVENT_AUTH 101
//200 - 299 Canal codes
#define NECTERE_EVENT_MSG_CANAL 200
#define NECTERE_EVENT_LIST_CANAL 201
#define NECTERE_EVENT_JOIN_CANAL 202
#define NECTERE_EVENT_LEAVE_CANAL 203
#define NECTERE_EVENT_CREATE_CANAL 204
#define NECTERE_EVENT_DELETE_CANAL 205
#define NECTERE_EVENT_CANAL_DELETED 299
//600 - 699: Client instruction
#define NECTERE_EVENT_APP_LIST 600
#define NECTERE_EVENT_CMD_LIST 601
#define NECTERE_EVENT_APP_RELOAD 602
#define NECTERE_EVENT_APP_UNLOAD 603
#define NECTERE_EVENT_PING 642
#define NECTERE_EVENT_STOP 666