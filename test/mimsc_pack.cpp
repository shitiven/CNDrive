/*---------------------------------------------------------------------------
// Filename:        mimsc_pack.cpp
// Date:            2012-11-22 15:04:48
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by zhiguan
//---------------------------------------------------------------------------*/
#include "mimsc_pack.h"

void CImReqOfflinemsg::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_operation;
        (*this) << FT_STRING;
        (*this) << m_reqData;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqOfflinemsg::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_operation;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_reqData;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspOfflinemsg::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_operations;
        (*this) << FT_STRING;
        (*this) << m_rspData;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspOfflinemsg::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_operations;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_rspData;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImHelthCheck::PackData(string& strData)
{
}

PACKRETCODE CImHelthCheck::UnpackData(const string& strData)
{
    return PACK_RIGHT;
}

void CImReqCheckversion::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_version;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqCheckversion::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspCheckversion::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_remark;
        (*this) << FT_STRING;
        (*this) << m_pubkey;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspCheckversion::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_pubkey;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqGetToken::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_clientusedata;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetToken::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clientusedata;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspGetToken::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_token;
        (*this) << FT_STRING;
        (*this) << m_clientusedata;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetToken::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_token;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clientusedata;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqMls::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_msgtype;
        (*this) << FT_STRING;
        (*this) << m_msg;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqMls::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgtype;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msg;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspMls::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_msgtype;
        (*this) << FT_STRING;
        (*this) << m_msg;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspMls::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgtype;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msg;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SClientHello&  sClientHello )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sClientHello.m_protocolVersion;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SClientHello&  sClientHello )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sClientHello.m_protocolVersion;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SInputstatus&  sInputstatus )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sInputstatus.m_inputStatus;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SInputstatus&  sInputstatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sInputstatus.m_inputStatus;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SServerHello&  sServerHello )
{
        uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sServerHello.m_protocolVersion;
    cPackData << FT_STRING;
    cPackData << sServerHello.m_pubKey;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SServerHello&  sServerHello )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerHello.m_protocolVersion;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerHello.m_pubKey;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SClientKeyExchange&  sClientKeyExchange )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sClientKeyExchange.m_preMasterKey;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SClientKeyExchange&  sClientKeyExchange )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sClientKeyExchange.m_preMasterKey;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SServerKeyExchange&  sServerKeyExchange )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sServerKeyExchange.m_masterKey;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SServerKeyExchange&  sServerKeyExchange )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sServerKeyExchange.m_masterKey;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqLogin::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)11;
        (*this) << FT_UINT8;
        (*this) << m_tokenFlag;
        (*this) << FT_STRING;
        (*this) << m_password;
        (*this) << FT_STRING;
        (*this) << m_version;
        (*this) << FT_UINT32;
        (*this) << m_language;
        (*this) << FT_STRING;
        (*this) << m_authcode;
        (*this) << FT_STRING;
        (*this) << m_deviceid;
        (*this) << FT_UINT8;
        (*this) << m_devtype;
        (*this) << FT_STRING;
        (*this) << m_devver;
        (*this) << FT_DOUBLE;
        (*this) << m_longitude;
        (*this) << FT_DOUBLE;
        (*this) << m_latitude;
        (*this) << FT_STRING;
        (*this) << m_authcodeurl;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqLogin::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 8) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_tokenFlag;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_password;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_version;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_language;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_authcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_deviceid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_devtype;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_devver;
        try
        {
            if(num < 9) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_DOUBLE) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_longitude;
            if(num < 10) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_DOUBLE) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_latitude;
            if(num < 11) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_authcodeurl;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspLogin::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)15;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT32;
        (*this) << m_clientIp;
        (*this) << FT_UINT32;
        (*this) << m_serverTime;
        (*this) << FT_STRING;
        (*this) << m_workKey;
        (*this) << FT_STRING;
        (*this) << m_pwtoken;
        (*this) << FT_STRING;
        (*this) << m_remark;
        (*this) << FT_STRING;
        (*this) << m_webmd5pw;
        (*this) << FT_UINT32;
        (*this) << m_lastClientip;
        (*this) << FT_STRING;
        (*this) << m_bindid;
        (*this) << FT_STRING;
        (*this) << m_newVersion;
        (*this) << FT_STRING;
        (*this) << m_newVersionUrl;
        (*this) << FT_STRING;
        (*this) << m_versionInfo;
        (*this) << FT_STRING;
        (*this) << m_userId;
        (*this) << FT_STRING;
        (*this) << m_nickName;
        (*this) << FT_STRING;
        (*this) << m_authcodeurl;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspLogin::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 14) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_clientIp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_serverTime;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_workKey;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_pwtoken;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_webmd5pw;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_lastClientip;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_bindid;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_newVersion;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_newVersionUrl;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_versionInfo;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_userId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
        try
        {
            if(num < 15) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_authcodeurl;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqLogoff::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_UINT32;
        (*this) << m_iscancle;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqLogoff::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        try
        {
            if(num < 2) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_iscancle;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspLogoff::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_remark;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspLogoff::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImNtfForcedisconnect::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)4;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_remark;
        (*this) << FT_STRING;
        (*this) << m_ip;
        (*this) << FT_STRING;
        (*this) << m_uuid;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImNtfForcedisconnect::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_remark;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_ip;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uuid;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqSendimmessage::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)6;
        (*this) << FT_STRING;
        (*this) << m_targetId;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_UINT8;
        (*this) << m_msgType;
        (*this) << FT_INT64;
        (*this) << m_msgId;
        (*this) << FT_STRING;
        (*this) << m_nickName;
        (*this) << FT_STRING;
        (*this) << m_message;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqSendimmessage::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 6) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_targetId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgType;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspSendimmessage::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_INT64;
        (*this) << m_msgId;
        (*this) << FT_STRING;
        (*this) << m_uuid;
        (*this) << FT_UINT32;
        (*this) << m_sendTime;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspSendimmessage::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uuid;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendTime;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const STypeStatus&  sTypeStatus )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sTypeStatus.m_type;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, STypeStatus&  sTypeStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sTypeStatus.m_type;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SMsgStatus&  sMsgStatus )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sMsgStatus.m_status;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SMsgStatus&  sMsgStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgStatus.m_status;
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SMsgItem&  sMsgItem )
{
        uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sMsgItem.m_subType;
    cPackData << FT_STRING;
    cPackData << sMsgItem.m_data;
    cPackData << FT_STRING;
    cPackData << sMsgItem.m_url;
    cPackData << FT_UINT32;
    cPackData << sMsgItem.m_fileSize;
    cPackData << FT_UINT32;
    cPackData << sMsgItem.m_playTime;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SMsgItem&  sMsgItem )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgItem.m_subType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgItem.m_data;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgItem.m_url;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgItem.m_fileSize;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sMsgItem.m_playTime;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SMessageBody&  sMessageBody )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_VECTOR;
    cPackData << FT_STRUCT;
    {
        uint32_t nLen = sMessageBody.m_messageList.size();
        cPackData << nLen;
        VECTOR< SMsgItem >::const_iterator itr;
        for(itr = sMessageBody.m_messageList.begin(); itr != sMessageBody.m_messageList.end(); ++itr)
        {
            cPackData << (*itr);
        }
    }

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SMessageBody&  sMessageBody )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_VECTOR) throw PACK_TYPEMATCH_ERROR;
    {
        uint32_t nSize;
        cPackData >> nSize;
        if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
        sMessageBody.m_messageList.reserve(nSize);
        for(uint32_t i = 0; i < nSize; i++)
        {
            SMsgItem tmpVal;
            cPackData >> tmpVal;
            sMessageBody.m_messageList.push_back(tmpVal);
        }
    }
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImNtfImmessage::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)7;
        (*this) << FT_STRING;
        (*this) << m_sendId;
        (*this) << FT_UINT32;
        (*this) << m_sendTime;
        (*this) << FT_UINT8;
        (*this) << m_msgType;
        (*this) << FT_INT64;
        (*this) << m_msgId;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_STRING;
        (*this) << m_nickName;
        (*this) << FT_STRING;
        (*this) << m_uuid;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImNtfImmessage::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 6) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendTime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgType;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
        try
        {
            if(num < 7) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_uuid;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImNtfOperationtip::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)4;
        (*this) << FT_STRING;
        (*this) << m_sendId;
        (*this) << FT_UINT32;
        (*this) << m_sendTime;
        (*this) << FT_UINT8;
        (*this) << m_msgType;
        (*this) << FT_STRING;
        (*this) << m_message;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImNtfOperationtip::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 4) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_sendTime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_msgType;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SNotifyOffmsgItem&  sNotifyOffmsgItem )
{
        uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sNotifyOffmsgItem.m_count;
    cPackData << FT_UINT32;
    cPackData << sNotifyOffmsgItem.m_size;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SNotifyOffmsgItem&  sNotifyOffmsgItem )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyOffmsgItem.m_count;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyOffmsgItem.m_size;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SNotifyContactOperate&  sNotifyContactOperate )
{
        uint8_t nFieldNum = 4;
    cPackData << nFieldNum;
    cPackData << FT_UINT8;
    cPackData << sNotifyContactOperate.m_optype;
    cPackData << FT_STRING;
    cPackData << sNotifyContactOperate.m_peerId;
    cPackData << FT_STRING;
    cPackData << sNotifyContactOperate.m_peerName;
    cPackData << FT_STRING;
    cPackData << sNotifyContactOperate.m_message;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SNotifyContactOperate&  sNotifyContactOperate )
{
    uint8_t num;
    cPackData >> num;
    if(num < 4) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyContactOperate.m_optype;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyContactOperate.m_peerId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyContactOperate.m_peerName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyContactOperate.m_message;
    for(int i = 4; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqDelofflinemsg::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_lastTime;
        (*this) << FT_UINT32;
        (*this) << m_count;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqDelofflinemsg::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_lastTime;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspDelofflinemsg::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspDelofflinemsg::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SContactAddNotify&  sContactAddNotify )
{
        uint8_t nFieldNum = 2;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sContactAddNotify.m_action;
    cPackData << FT_STRING;
    cPackData << sContactAddNotify.m_message;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SContactAddNotify&  sContactAddNotify )
{
    uint8_t num;
    cPackData >> num;
    if(num < 2) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactAddNotify.m_action;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactAddNotify.m_message;
    for(int i = 2; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SChgContactInfo&  sChgContactInfo )
{
        uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_INT64;
    cPackData << sChgContactInfo.m_mask;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_contactId;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_nickName;
    cPackData << FT_STRING;
    cPackData << sChgContactInfo.m_importance;
    cPackData << FT_INT64;
    cPackData << sChgContactInfo.m_groupId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SChgContactInfo&  sChgContactInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_mask;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_importance;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sChgContactInfo.m_groupId;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SContactInfo&  sContactInfo )
{
        uint8_t nFieldNum = 5;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_contactId;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_nickName;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_md5Phone;
    cPackData << FT_STRING;
    cPackData << sContactInfo.m_importance;
    cPackData << FT_INT64;
    cPackData << sContactInfo.m_groupId;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SContactInfo&  sContactInfo )
{
    uint8_t num;
    cPackData >> num;
    if(num < 5) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_md5Phone;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_importance;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sContactInfo.m_groupId;
    for(int i = 5; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImReqGetcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_UINT32;
        (*this) << m_count;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspGetcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqGetUnionContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_UINT32;
        (*this) << m_count;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetUnionContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspGetUnionContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetUnionContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqChgcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SChgContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqChgcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SChgContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspChgcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SChgContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspChgcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SChgContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqDelcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqDelcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspDelcontact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspDelcontact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SUserStatus&  sUserStatus )
{
        uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sUserStatus.m_userId;
    cPackData << FT_UINT8;
    cPackData << sUserStatus.m_basicStatus;
    cPackData << FT_UINT8;
    cPackData << sUserStatus.m_predefStatus;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserStatus&  sUserStatus )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_userId;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_basicStatus;
    cPackData >> field;
    if(field.m_baseType != FT_UINT8) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserStatus.m_predefStatus;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImNtfStatus::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_userStatusList.size();
            (*this) << nLen;
            VECTOR< SUserStatus >::const_iterator itr;
            for(itr = m_userStatusList.cbegin(); itr != m_userStatusList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImNtfStatus::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_userStatusList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserStatus tmpVal;
                (*this) >> tmpVal;
                m_userStatusList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqSubscribeInfo::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_targetList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_targetList.cbegin(); itr != m_targetList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqSubscribeInfo::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_targetList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_targetList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspSubscribeInfo::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_statusList.size();
            (*this) << nLen;
            VECTOR< SUserStatus >::const_iterator itr;
            for(itr = m_statusList.cbegin(); itr != m_statusList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspSubscribeInfo::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_statusList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserStatus tmpVal;
                (*this) >> tmpVal;
                m_statusList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqAddcontactNew::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)4;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRING;
        (*this) << m_message;
        (*this) << FT_UINT32;
        (*this) << m_supportFlag;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqAddcontactNew::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
        try
        {
            if(num < 4) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_supportFlag;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspAddcontactNew::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)7;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_type;
        (*this) << FT_STRUCT;
        (*this) << m_contact;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_companyname;
        (*this) << FT_STRING;
        (*this) << m_question;
        (*this) << FT_STRING;
        (*this) << m_answer;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspAddcontactNew::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 5) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
        (*this) >> field;
        if(field.m_baseType != FT_STRUCT) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contact;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_companyname;
        try
        {
            if(num < 6) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_question;
            if(num < 7) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_answer;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqAddcntackNew::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_STRING;
        (*this) << m_contactId;
        (*this) << FT_INT64;
        (*this) << m_groupId;
        (*this) << FT_STRING;
        (*this) << m_nickName;
        (*this) << FT_STRING;
        (*this) << m_message;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqAddcntackNew::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 5) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_nickName;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_message;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspAddcntackNew::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)5;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_UINT8;
        (*this) << m_opcode;
        (*this) << FT_INT64;
        (*this) << m_groupId;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
        (*this) << FT_STRING;
        (*this) << m_contactId;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspAddcntackNew::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 5) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_opcode;
        (*this) >> field;
        if(field.m_baseType != FT_INT64) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_groupId;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_contactId;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqUserudbprofile::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_STRING;
        (*this) << m_uid;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqUserudbprofile::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspUserudbprofile::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_uid;
        (*this) << FT_MAP;
        (*this) << FT_STRING;
        (*this) << FT_STRING;
        {
            uint8_t nSize = m_profilelist.size();
            (*this) << nSize;
            map< string,string >::const_iterator itr;
            for(itr = m_profilelist.begin(); itr != m_profilelist.end(); ++itr)
            {
                (*this) << itr->first;
                (*this) << itr->second;
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspUserudbprofile::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_uid;
        (*this) >> field;
        if(field.m_baseType != FT_MAP) return PACK_TYPEMATCH_ERROR;
        {
            uint8_t nSize;
            (*this) >> nSize;
            for(uint32_t i = 0; i < nSize; i++)
            {
                string key;
                string value;
                (*this) >> key;
                (*this) >> value;
                m_profilelist[key] = value;
                }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqGetTbwwContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_INT32;
        (*this) << m_timestamp;
        (*this) << FT_UINT32;
        (*this) << m_count;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetTbwwContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_INT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_count;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspGetTbwwContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SContactInfo >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetTbwwContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SContactInfo tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqSearchLatentContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_action;
        (*this) << FT_DOUBLE;
        (*this) << m_longitude;
        (*this) << FT_DOUBLE;
        (*this) << m_latitude;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqSearchLatentContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_action;
        try
        {
            if(num < 2) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_DOUBLE) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_longitude;
            if(num < 3) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_DOUBLE) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_latitude;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SLatentContact&  sLatentContact )
{
        uint8_t nFieldNum = 8;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_contactId;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_nickName;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_md5Phone;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_reason;
    cPackData << FT_INT32;
    cPackData << sLatentContact.m_distance;
    cPackData << FT_INT32;
    cPackData << sLatentContact.m_gender;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_avatarurl;
    cPackData << FT_STRING;
    cPackData << sLatentContact.m_signature;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SLatentContact&  sLatentContact )
{
    uint8_t num;
    cPackData >> num;
    if(num < 8) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_md5Phone;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_reason;
    cPackData >> field;
    if(field.m_baseType != FT_INT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_distance;
    cPackData >> field;
    if(field.m_baseType != FT_INT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_gender;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_avatarurl;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sLatentContact.m_signature;
    for(int i = 8; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SFriendRecommendItem&  sFriendRecommendItem )
{
        uint8_t nFieldNum = 7;
    cPackData << nFieldNum;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_contactId;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_nickName;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_phoneMd5;
    cPackData << FT_UINT32;
    cPackData << sFriendRecommendItem.m_relationType;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_reason;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_recommendIndex;
    cPackData << FT_STRING;
    cPackData << sFriendRecommendItem.m_avatar;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SFriendRecommendItem&  sFriendRecommendItem )
{
    uint8_t num;
    cPackData >> num;
    if(num < 7) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_contactId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_nickName;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_phoneMd5;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_relationType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_reason;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_recommendIndex;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sFriendRecommendItem.m_avatar;
    for(int i = 7; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

CPackData& operator<< ( CPackData& cPackData, const SFriendRecommendList&  sFriendRecommendList )
{
        uint8_t nFieldNum = 1;
    cPackData << nFieldNum;
    cPackData << FT_VECTOR;
    cPackData << FT_STRUCT;
    {
        uint32_t nLen = sFriendRecommendList.m_items.size();
        cPackData << nLen;
        VECTOR< SFriendRecommendItem >::const_iterator itr;
        for(itr = sFriendRecommendList.m_items.begin(); itr != sFriendRecommendList.m_items.end(); ++itr)
        {
            cPackData << (*itr);
        }
    }

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SFriendRecommendList&  sFriendRecommendList )
{
    uint8_t num;
    cPackData >> num;
    if(num < 1) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_VECTOR) throw PACK_TYPEMATCH_ERROR;
    {
        uint32_t nSize;
        cPackData >> nSize;
        if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
        sFriendRecommendList.m_items.reserve(nSize);
        for(uint32_t i = 0; i < nSize; i++)
        {
            SFriendRecommendItem tmpVal;
            cPackData >> tmpVal;
            sFriendRecommendList.m_items.push_back(tmpVal);
        }
    }
    for(int i = 1; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspSearchLatentContact::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< SLatentContact >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspSearchLatentContact::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SLatentContact tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqCheckAuthcode::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_STRING;
        (*this) << m_checkImgUrl;
        (*this) << FT_STRING;
        (*this) << m_authCode;
        (*this) << FT_UINT8;
        (*this) << m_mode;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqCheckAuthcode::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_checkImgUrl;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_authCode;
        try
        {
            if(num < 3) return PACK_RIGHT;
            (*this) >> field;
            if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
            (*this) >> m_mode;
        }
        catch(PACKRETCODE)
        {
            return PACK_RIGHT;
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspCheckAuthcode::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT8;
        (*this) << m_retcode;
        (*this) << FT_STRING;
        (*this) << m_checkImgUrl;
        (*this) << FT_STRING;
        (*this) << m_authCode;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspCheckAuthcode::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_checkImgUrl;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_authCode;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SNotifyPlugin&  sNotifyPlugin )
{
        uint8_t nFieldNum = 10;
    cPackData << nFieldNum;
    cPackData << FT_UINT32;
    cPackData << sNotifyPlugin.m_pluginid;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_itemid;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_uid;
    cPackData << FT_UINT32;
    cPackData << sNotifyPlugin.m_notifyTime;
    cPackData << FT_UINT32;
    cPackData << sNotifyPlugin.m_expireTime;
    cPackData << FT_UINT32;
    cPackData << sNotifyPlugin.m_notifyType;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_title;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_imageurl;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_msgbody;
    cPackData << FT_STRING;
    cPackData << sNotifyPlugin.m_detailurl;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SNotifyPlugin&  sNotifyPlugin )
{
    uint8_t num;
    cPackData >> num;
    if(num < 10) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_pluginid;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_itemid;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_uid;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_notifyTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_expireTime;
    cPackData >> field;
    if(field.m_baseType != FT_UINT32) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_notifyType;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_title;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_imageurl;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_msgbody;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sNotifyPlugin.m_detailurl;
    for(int i = 10; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImNtfNeedAuthcode::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_STRING;
        (*this) << m_checkImgUrl;
        (*this) << FT_STRING;
        (*this) << m_origPacket;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImNtfNeedAuthcode::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_checkImgUrl;
        (*this) >> field;
        if(field.m_baseType != FT_STRING) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_origPacket;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqGetWwGroup::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)1;
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetWwGroup::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 1) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

CPackData& operator<< ( CPackData& cPackData, const SUserGroup&  sUserGroup )
{
        uint8_t nFieldNum = 3;
    cPackData << nFieldNum;
    cPackData << FT_INT64;
    cPackData << sUserGroup.m_groupId;
    cPackData << FT_INT64;
    cPackData << sUserGroup.m_parentId;
    cPackData << FT_STRING;
    cPackData << sUserGroup.m_groupName;

    return cPackData;

}

CPackData& operator>> ( CPackData& cPackData, SUserGroup&  sUserGroup )
{
    uint8_t num;
    cPackData >> num;
    if(num < 3) throw PACK_LENGTH_ERROR;
    CFieldType field;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_groupId;
    cPackData >> field;
    if(field.m_baseType != FT_INT64) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_parentId;
    cPackData >> field;
    if(field.m_baseType != FT_STRING) throw PACK_TYPEMATCH_ERROR;
    cPackData >> sUserGroup.m_groupName;
    for(int i = 3; i < num; i++)
        cPackData.PeekField();
    return cPackData;
}

void CImRspGetWwGroup::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)3;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRUCT;
        {
            uint32_t nLen = m_groupList.size();
            (*this) << nLen;
            VECTOR< SUserGroup >::const_iterator itr;
            for(itr = m_groupList.cbegin(); itr != m_groupList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_timestamp;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetWwGroup::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 3) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_groupList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                SUserGroup tmpVal;
                (*this) >> tmpVal;
                m_groupList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_timestamp;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqChgstatus::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT8;
        (*this) << m_basicStatus;
        (*this) << FT_UINT8;
        (*this) << m_predefStatus;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqChgstatus::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_basicStatus;
        (*this) >> field;
        if(field.m_baseType != FT_UINT8) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_predefStatus;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImReqGetContactsFlag::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
        (*this) << FT_UINT32;
        (*this) << m_type;
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImReqGetContactsFlag::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_type;
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

void CImRspGetContactsFlag::PackData(string& strData)
{
    try
    {
        ResetOutBuff(strData);
        strData.reserve(Size() + 7);
        (*this) << (uint8_t)2;
        (*this) << FT_UINT32;
        (*this) << m_retcode;
        (*this) << FT_VECTOR;
        (*this) << FT_STRING;
        {
            uint32_t nLen = m_contactList.size();
            (*this) << nLen;
            VECTOR< string >::const_iterator itr;
            for(itr = m_contactList.cbegin(); itr != m_contactList.cend(); ++itr)
            {
                (*this) << (*itr);
            }
        }
    }
    catch(std::exception&)
    {
        strData = "";
    }
}

PACKRETCODE CImRspGetContactsFlag::UnpackData(const string& strData)
{
    try
    {
        ResetInBuff(strData);
        uint8_t num;
        (*this) >> num;
        if(num < 2) return PACK_LENGTH_ERROR;
         CFieldType field;
        (*this) >> field;
        if(field.m_baseType != FT_UINT32) return PACK_TYPEMATCH_ERROR;
        (*this) >> m_retcode;
        (*this) >> field;
        if(field.m_baseType != FT_VECTOR) return PACK_TYPEMATCH_ERROR;
        {
            uint32_t nSize;
            (*this) >> nSize;
            if(nSize > MAX_RECORD_SIZE) throw PACK_LENGTH_ERROR;
            m_contactList.reserve(nSize);
            for(uint32_t i = 0; i < nSize; i++)
            {
                string tmpVal;
                (*this) >> tmpVal;
                m_contactList.push_back(tmpVal);
            }
        }
    }
    catch(PACKRETCODE ret)
    {
        return ret;
    }
    catch(std::exception&)
    {
        return PACK_SYSTEM_ERROR;
    }
    return PACK_RIGHT;
}

