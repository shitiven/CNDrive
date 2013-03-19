/*---------------------------------------------------------------------------
// Filename:        mimsc_cmd.h
// Date:            2012-11-22 15:04:48
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by zhiguan
//---------------------------------------------------------------------------*/
#ifndef __MIMSC_CMD_H__
#define __MIMSC_CMD_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"

using namespace std;

enum MIMSC_REQUEST
{
    IM_HELTH_CHECK              = 0x1000001,
    IM_REQ_CHECKVERSION         = 0x1000002,
    IM_REQ_LOGIN                = 0x1000003,
    IM_REQ_MLS                  = 0x1000004,
    IM_REQ_POSTLOGIN            = 0x1000005,
    IM_REQ_GET_TOKEN            = 0x1000006,
    IM_REQ_LOGOFF               = 0x1000007,
    IM_REQ_GETGROUP             = 0x1000008,
    IM_REQ_CHGSTATUS            = 0x100001c,
    IM_REQ_OFFLINEMSG           = 0x100001d,
    IM_REQ_ADDCONTACT_NEW       = 0x1000050,
    IM_REQ_ADDCNTACK_NEW        = 0x1000051,
    IM_REQ_GETCONTACT           = 0x100000d,
    IM_REQ_GET_TBWW_CONTACT     = 0x100000e,
    IM_REQ_CHGCONTACT           = 0x100000f,
    IM_REQ_DELCONTACT           = 0x1000010,
    IM_REQ_DELOFFLINEMSG        = 0x100001f,
    IM_REQ_GET_WW_GROUP         = 0x1000020,
    IM_REQ_SENDIMMESSAGE        = 0x1000021,
    IM_REQ_SENDMULTIUSERMSG     = 0x1000022,
    IM_REQ_USERUDBPROFILE       = 0x1000035,
    IM_REQ_SUBSCRIBE_INFO       = 0x1000027,
    IM_REQ_SEARCH_LATENT_CONTACT= 0x1000061,
    IM_REQ_CHECK_AUTHCODE       = 0x1000040,
    IM_REQ_GET_UNION_CONTACT    = 0x1000052,
    IM_REQ_GET_CONTACTS_FLAG    = 0x1000053,

};

enum MIMSC_RESPONSE
{
    IM_RSP_CHECKVERSION         = 0x1010002,
    IM_RSP_LOGIN                = 0x1010003,
    IM_RSP_MLS                  = 0x1010004,
    IM_RSP_GET_TOKEN            = 0x1010006,
    IM_RSP_LOGOFF               = 0x1010007,
    IM_RSP_GETGROUP             = 0x1010008,
    IM_RSP_ADDCONTACT_NEW       = 0x1010050,
    IM_RSP_ADDCNTACK_NEW        = 0x1010051,
    IM_RSP_GETCONTACT           = 0x101000d,
    IM_RSP_GET_TBWW_CONTACT     = 0x101000e,
    IM_RSP_CHGCONTACT           = 0x101000f,
    IM_RSP_DELCONTACT           = 0x1010010,
    IM_RSP_DELOFFLINEMSG        = 0x101001f,
    IM_RSP_GET_WW_GROUP         = 0x1010020,
    IM_RSP_SENDIMMESSAGE        = 0x1010021,
    IM_RSP_SUBSCRIBE_INFO       = 0x1010027,
    IM_RSP_USERUDBPROFILE       = 0x1010035,
    IM_RSP_SEARCH_LATENT_CONTACT= 0x1010061,
    IM_RSP_CHECK_AUTHCODE       = 0x1010040,
    IM_RSP_OFFLINEMSG           = 0x101001d,
    IM_RSP_GET_UNION_CONTACT    = 0x1010052,
    IM_RSP_GET_CONTACTS_FLAG    = 0x1010053,

};

enum MIMSC_NOTIFY
{
    IM_NTF_LOGIN_AGAIN          = 0x1020004,
    IM_NTF_FORCEDISCONNECT      = 0x1020005,
    IM_NTF_STATUS               = 0x102000f,
    IM_NTF_IMMESSAGE            = 0x1020010,
    IM_NTF_OPERATIONTIP         = 0x102002b,
    IM_NTF_UPDATE_USREXTINFO    = 0x102002c,
    IM_NTF_REFRESH_CONTACT      = 0x1020030,
    IM_NTF_NEED_AUTHCODE        = 0x1020040,
    IM_TEST                     = 0,

};

#endif
