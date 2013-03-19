/*---------------------------------------------------------------------------
// Filename:        mimsc_pack.h
// Date:            2012-11-22 15:04:48
// Author:          autogen 
// Note:            this is a auto-generated file, DON'T MODIFY IT!
//                  created by zhiguan
//---------------------------------------------------------------------------*/
#ifndef __MIMSC_PACK_H__
#define __MIMSC_PACK_H__

#include <string>
#include <vector>
#include <map>
#include "packdata.h"
#include "mconst_macro.h"
#include "mimsc_cmd.h"
#include "mimsc_enum.h"

using namespace std;

#ifndef STATUSDEF_LENGTH
#define STATUSDEF_LENGTH 64
#endif 

class CImReqOfflinemsg : public CPackData
{
public:
    CImReqOfflinemsg()
    {
    }

    ~CImReqOfflinemsg() { }
    CImReqOfflinemsg(const string&  strOperation, const string&  strReqData)
    {
        m_operation = strOperation;
        m_reqData = strReqData;
    }
    CImReqOfflinemsg&  operator=( const CImReqOfflinemsg&  cImReqOfflinemsg )
    {
        m_operation = cImReqOfflinemsg.m_operation;
        m_reqData = cImReqOfflinemsg.m_reqData;
        return *this;
    }

    const string&  GetOperation () const { return m_operation; }
    bool SetOperation ( const string&  strOperation )
    {
        m_operation = strOperation;
        return true;
    }
    const string&  GetReqData () const { return m_reqData; }
    bool SetReqData ( const string&  strReqData )
    {
        m_reqData = strReqData;
        return true;
    }
private:
    string m_operation;
    string m_reqData;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqOfflinemsg::Size() const
{
    uint32_t nSize = 11;
    nSize += m_operation.length();
    nSize += m_reqData.length();
    return nSize;
}

class CImRspOfflinemsg : public CPackData
{
public:
    CImRspOfflinemsg()
    {
    }

    ~CImRspOfflinemsg() { }
    CImRspOfflinemsg(const uint32_t&  dwRetcode, const string&  strOperations, const string&  strRspData)
    {
        m_retcode = dwRetcode;
        m_operations = strOperations;
        m_rspData = strRspData;
    }
    CImRspOfflinemsg&  operator=( const CImRspOfflinemsg&  cImRspOfflinemsg )
    {
        m_retcode = cImRspOfflinemsg.m_retcode;
        m_operations = cImRspOfflinemsg.m_operations;
        m_rspData = cImRspOfflinemsg.m_rspData;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const string&  GetOperations () const { return m_operations; }
    bool SetOperations ( const string&  strOperations )
    {
        m_operations = strOperations;
        return true;
    }
    const string&  GetRspData () const { return m_rspData; }
    bool SetRspData ( const string&  strRspData )
    {
        m_rspData = strRspData;
        return true;
    }
private:
    uint32_t m_retcode;
    string m_operations;
    string m_rspData;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspOfflinemsg::Size() const
{
    uint32_t nSize = 16;
    nSize += m_operations.length();
    nSize += m_rspData.length();
    return nSize;
}

class CImHelthCheck : public CPackData
{
public:
    ~CImHelthCheck() { }
public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImHelthCheck::Size() const
{
    return 1;
}
class CImReqCheckversion : public CPackData
{
public:
    CImReqCheckversion()
    {
    }

    ~CImReqCheckversion() { }
    CImReqCheckversion(const string&  strVersion)
    {
        m_version = strVersion;
    }
    CImReqCheckversion&  operator=( const CImReqCheckversion&  cImReqCheckversion )
    {
        m_version = cImReqCheckversion.m_version;
        return *this;
    }

    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        if(strVersion.size() > 128) return false;
        m_version = strVersion;
        return true;
    }
private:
    string m_version;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqCheckversion::Size() const
{
    uint32_t nSize = 6;
    nSize += m_version.length();
    return nSize;
}

class CImRspCheckversion : public CPackData
{
public:
    CImRspCheckversion()
    {
    }

    ~CImRspCheckversion() { }
    CImRspCheckversion(const uint32_t&  dwRetcode, const string&  strRemark, const string &  strPubkey)
    {
        m_retcode = dwRetcode;
        m_remark = strRemark;
        m_pubkey = strPubkey;
    }
    CImRspCheckversion&  operator=( const CImRspCheckversion&  cImRspCheckversion )
    {
        m_retcode = cImRspCheckversion.m_retcode;
        m_remark = cImRspCheckversion.m_remark;
        m_pubkey = cImRspCheckversion.m_pubkey;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 256) return false;
        m_remark = strRemark;
        return true;
    }
    const string &  GetPubkey () const { return m_pubkey; }
    bool SetPubkey ( const string &  strPubkey )
    {
        m_pubkey = strPubkey;
        return true;
    }
private:
    uint32_t m_retcode;
    string m_remark;
    string  m_pubkey;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspCheckversion::Size() const
{
    uint32_t nSize = 16;
    nSize += m_remark.length();
    nSize += m_pubkey.length();
    return nSize;
}

class CImReqGetToken : public CPackData
{
public:
    CImReqGetToken()
    {
    }

    ~CImReqGetToken() { }
    CImReqGetToken(const uint8_t&  chType, const string&  strClientusedata)
    {
        m_type = chType;
        m_clientusedata = strClientusedata;
    }
    CImReqGetToken&  operator=( const CImReqGetToken&  cImReqGetToken )
    {
        m_type = cImReqGetToken.m_type;
        m_clientusedata = cImReqGetToken.m_clientusedata;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetClientusedata () const { return m_clientusedata; }
    bool SetClientusedata ( const string&  strClientusedata )
    {
        m_clientusedata = strClientusedata;
        return true;
    }
private:
    uint8_t m_type;
    string m_clientusedata;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetToken::Size() const
{
    uint32_t nSize = 8;
    nSize += m_clientusedata.length();
    return nSize;
}

class CImRspGetToken : public CPackData
{
public:
    CImRspGetToken()
    {
    }

    ~CImRspGetToken() { }
    CImRspGetToken(const uint32_t&  dwRetcode, const uint8_t&  chType, const string&  strToken, const string&  strClientusedata)
    {
        m_retcode = dwRetcode;
        m_type = chType;
        m_token = strToken;
        m_clientusedata = strClientusedata;
    }
    CImRspGetToken&  operator=( const CImRspGetToken&  cImRspGetToken )
    {
        m_retcode = cImRspGetToken.m_retcode;
        m_type = cImRspGetToken.m_type;
        m_token = cImRspGetToken.m_token;
        m_clientusedata = cImRspGetToken.m_clientusedata;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetToken () const { return m_token; }
    bool SetToken ( const string&  strToken )
    {
        m_token = strToken;
        return true;
    }
    const string&  GetClientusedata () const { return m_clientusedata; }
    bool SetClientusedata ( const string&  strClientusedata )
    {
        m_clientusedata = strClientusedata;
        return true;
    }
private:
    uint32_t m_retcode;
    uint8_t m_type;
    string m_token;
    string m_clientusedata;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetToken::Size() const
{
    uint32_t nSize = 18;
    nSize += m_token.length();
    nSize += m_clientusedata.length();
    return nSize;
}

class CImReqMls : public CPackData
{
public:
    CImReqMls()
    {
    }

    ~CImReqMls() { }
    CImReqMls(const uint32_t&  dwMsgtype, const string &  strMsg)
    {
        m_msgtype = dwMsgtype;
        m_msg = strMsg;
    }
    CImReqMls&  operator=( const CImReqMls&  cImReqMls )
    {
        m_msgtype = cImReqMls.m_msgtype;
        m_msg = cImReqMls.m_msg;
        return *this;
    }

    const uint32_t&  GetMsgtype () const { return m_msgtype; }
    bool SetMsgtype ( const uint32_t&  dwMsgtype )
    {
        m_msgtype = dwMsgtype;
        return true;
    }
    const string &  GetMsg () const { return m_msg; }
    bool SetMsg ( const string &  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    uint32_t m_msgtype;
    string  m_msg;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqMls::Size() const
{
    uint32_t nSize = 11;
    nSize += m_msg.length();
    return nSize;
}

class CImRspMls : public CPackData
{
public:
    CImRspMls()
    {
    }

    ~CImRspMls() { }
    CImRspMls(const uint32_t&  dwRetcode, const uint32_t&  dwMsgtype, const string &  strMsg)
    {
        m_retcode = dwRetcode;
        m_msgtype = dwMsgtype;
        m_msg = strMsg;
    }
    CImRspMls&  operator=( const CImRspMls&  cImRspMls )
    {
        m_retcode = cImRspMls.m_retcode;
        m_msgtype = cImRspMls.m_msgtype;
        m_msg = cImRspMls.m_msg;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint32_t&  GetMsgtype () const { return m_msgtype; }
    bool SetMsgtype ( const uint32_t&  dwMsgtype )
    {
        m_msgtype = dwMsgtype;
        return true;
    }
    const string &  GetMsg () const { return m_msg; }
    bool SetMsg ( const string &  strMsg )
    {
        m_msg = strMsg;
        return true;
    }
private:
    uint32_t m_retcode;
    uint32_t m_msgtype;
    string  m_msg;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspMls::Size() const
{
    uint32_t nSize = 16;
    nSize += m_msg.length();
    return nSize;
}

struct SClientHello
{
public:
    SClientHello()
    {
    }

    ~SClientHello() { }
    SClientHello(const string&  strProtocolVersion)
    {
        m_protocolVersion = strProtocolVersion;
    }
    SClientHello&  operator=( const SClientHello&  sClientHello )
    {
        m_protocolVersion = sClientHello.m_protocolVersion;
        return *this;
    }

    string m_protocolVersion;

public:
    uint32_t Size() const;
};

inline uint32_t SClientHello::Size() const
{
    uint32_t nSize = 6;
    nSize += m_protocolVersion.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SClientHello&  sClientHello );
CPackData& operator>> ( CPackData& cPackData, SClientHello&  sClientHello );

struct SInputstatus
{
public:
    SInputstatus()
    {
    }

    ~SInputstatus() { }
    SInputstatus(const uint8_t&  chInputStatus)
    {
        m_inputStatus = chInputStatus;
    }
    SInputstatus&  operator=( const SInputstatus&  sInputstatus )
    {
        m_inputStatus = sInputstatus.m_inputStatus;
        return *this;
    }

    uint8_t m_inputStatus;

public:
    uint32_t Size() const;
};

inline uint32_t SInputstatus::Size() const
{
    return 3;
}
CPackData& operator<< ( CPackData& cPackData, const SInputstatus&  sInputstatus );
CPackData& operator>> ( CPackData& cPackData, SInputstatus&  sInputstatus );

struct SServerHello
{
public:
    SServerHello()
    {
    }

    ~SServerHello() { }
    SServerHello(const string&  strProtocolVersion, const string &  strPubKey)
    {
        m_protocolVersion = strProtocolVersion;
        m_pubKey = strPubKey;
    }
    SServerHello&  operator=( const SServerHello&  sServerHello )
    {
        m_protocolVersion = sServerHello.m_protocolVersion;
        m_pubKey = sServerHello.m_pubKey;
        return *this;
    }

    string m_protocolVersion;
    string  m_pubKey;

public:
    uint32_t Size() const;
};

inline uint32_t SServerHello::Size() const
{
    uint32_t nSize = 11;
    nSize += m_protocolVersion.length();
    nSize += m_pubKey.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SServerHello&  sServerHello );
CPackData& operator>> ( CPackData& cPackData, SServerHello&  sServerHello );

struct SClientKeyExchange
{
public:
    SClientKeyExchange()
    {
    }

    ~SClientKeyExchange() { }
    SClientKeyExchange(const string &  strPreMasterKey)
    {
        m_preMasterKey = strPreMasterKey;
    }
    SClientKeyExchange&  operator=( const SClientKeyExchange&  sClientKeyExchange )
    {
        m_preMasterKey = sClientKeyExchange.m_preMasterKey;
        return *this;
    }

    string  m_preMasterKey;

public:
    uint32_t Size() const;
};

inline uint32_t SClientKeyExchange::Size() const
{
    uint32_t nSize = 6;
    nSize += m_preMasterKey.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SClientKeyExchange&  sClientKeyExchange );
CPackData& operator>> ( CPackData& cPackData, SClientKeyExchange&  sClientKeyExchange );

struct SServerKeyExchange
{
public:
    SServerKeyExchange()
    {
    }

    ~SServerKeyExchange() { }
    SServerKeyExchange(const string &  strMasterKey)
    {
        m_masterKey = strMasterKey;
    }
    SServerKeyExchange&  operator=( const SServerKeyExchange&  sServerKeyExchange )
    {
        m_masterKey = sServerKeyExchange.m_masterKey;
        return *this;
    }

    string  m_masterKey;

public:
    uint32_t Size() const;
};

inline uint32_t SServerKeyExchange::Size() const
{
    uint32_t nSize = 6;
    nSize += m_masterKey.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SServerKeyExchange&  sServerKeyExchange );
CPackData& operator>> ( CPackData& cPackData, SServerKeyExchange&  sServerKeyExchange );

class CImReqLogin : public CPackData
{
public:
    CImReqLogin() : m_longitude(0),
            m_latitude(0),
            m_authcodeurl("")
    {
    }

    ~CImReqLogin() { }
    CImReqLogin(const uint8_t&  chTokenFlag, const string&  strPassword, const string&  strVersion, const uint32_t&  dwLanguage, const string&  strAuthcode, const string&  strDeviceid, const uint8_t&  chDevtype, const string&  strDevver, const double&  dLongitude= 0, const double&  dLatitude= 0, const string&  strAuthcodeurl= "")
    {
        m_tokenFlag = chTokenFlag;
        m_password = strPassword;
        m_version = strVersion;
        m_language = dwLanguage;
        m_authcode = strAuthcode;
        m_deviceid = strDeviceid;
        m_devtype = chDevtype;
        m_devver = strDevver;
        m_longitude = dLongitude;
        m_latitude = dLatitude;
        m_authcodeurl = strAuthcodeurl;
    }
    CImReqLogin&  operator=( const CImReqLogin&  cImReqLogin )
    {
        m_tokenFlag = cImReqLogin.m_tokenFlag;
        m_password = cImReqLogin.m_password;
        m_version = cImReqLogin.m_version;
        m_language = cImReqLogin.m_language;
        m_authcode = cImReqLogin.m_authcode;
        m_deviceid = cImReqLogin.m_deviceid;
        m_devtype = cImReqLogin.m_devtype;
        m_devver = cImReqLogin.m_devver;
        m_longitude = cImReqLogin.m_longitude;
        m_latitude = cImReqLogin.m_latitude;
        m_authcodeurl = cImReqLogin.m_authcodeurl;
        return *this;
    }

    const uint8_t&  GetTokenFlag () const { return m_tokenFlag; }
    bool SetTokenFlag ( const uint8_t&  chTokenFlag )
    {
        m_tokenFlag = chTokenFlag;
        return true;
    }
    const string&  GetPassword () const { return m_password; }
    bool SetPassword ( const string&  strPassword )
    {
        if(strPassword.size() > 48) return false;
        m_password = strPassword;
        return true;
    }
    const string&  GetVersion () const { return m_version; }
    bool SetVersion ( const string&  strVersion )
    {
        if(strVersion.size() > 128) return false;
        m_version = strVersion;
        return true;
    }
    const uint32_t&  GetLanguage () const { return m_language; }
    bool SetLanguage ( const uint32_t&  dwLanguage )
    {
        m_language = dwLanguage;
        return true;
    }
    const string&  GetAuthcode () const { return m_authcode; }
    bool SetAuthcode ( const string&  strAuthcode )
    {
        m_authcode = strAuthcode;
        return true;
    }
    const string&  GetDeviceid () const { return m_deviceid; }
    bool SetDeviceid ( const string&  strDeviceid )
    {
        m_deviceid = strDeviceid;
        return true;
    }
    const uint8_t&  GetDevtype () const { return m_devtype; }
    bool SetDevtype ( const uint8_t&  chDevtype )
    {
        m_devtype = chDevtype;
        return true;
    }
    const string&  GetDevver () const { return m_devver; }
    bool SetDevver ( const string&  strDevver )
    {
        m_devver = strDevver;
        return true;
    }
    const double&  GetLongitude () const { return m_longitude; }
    bool SetLongitude ( const double&  dLongitude )
    {
        m_longitude = dLongitude;
        return true;
    }
    const double&  GetLatitude () const { return m_latitude; }
    bool SetLatitude ( const double&  dLatitude )
    {
        m_latitude = dLatitude;
        return true;
    }
    const string&  GetAuthcodeurl () const { return m_authcodeurl; }
    bool SetAuthcodeurl ( const string&  strAuthcodeurl )
    {
        m_authcodeurl = strAuthcodeurl;
        return true;
    }
private:
    uint8_t m_tokenFlag;
    string m_password;
    string m_version;
    uint32_t m_language;
    string m_authcode;
    string m_deviceid;
    uint8_t m_devtype;
    string m_devver;
    double m_longitude;
    double m_latitude;
    string m_authcodeurl;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqLogin::Size() const
{
    uint32_t nSize = 58;
    nSize += m_password.length();
    nSize += m_version.length();
    nSize += m_authcode.length();
    nSize += m_deviceid.length();
    nSize += m_devver.length();
    nSize += m_authcodeurl.length();
    return nSize;
}

class CImRspLogin : public CPackData
{
public:
    CImRspLogin() : m_authcodeurl("")
    {
    }

    ~CImRspLogin() { }
    CImRspLogin(const uint32_t&  dwRetcode, const uint32_t&  dwClientIp, const uint32_t&  dwServerTime, const string &  strWorkKey, const string&  strPwtoken, const string&  strRemark, const string&  strWebmd5pw, const uint32_t&  dwLastClientip, const string&  strBindid, const string&  strNewVersion, const string&  strNewVersionUrl, const string&  strVersionInfo, const string&  strUserId, const string&  strNickName, const string&  strAuthcodeurl= "")
    {
        m_retcode = dwRetcode;
        m_clientIp = dwClientIp;
        m_serverTime = dwServerTime;
        m_workKey = strWorkKey;
        m_pwtoken = strPwtoken;
        m_remark = strRemark;
        m_webmd5pw = strWebmd5pw;
        m_lastClientip = dwLastClientip;
        m_bindid = strBindid;
        m_newVersion = strNewVersion;
        m_newVersionUrl = strNewVersionUrl;
        m_versionInfo = strVersionInfo;
        m_userId = strUserId;
        m_nickName = strNickName;
        m_authcodeurl = strAuthcodeurl;
    }
    CImRspLogin&  operator=( const CImRspLogin&  cImRspLogin )
    {
        m_retcode = cImRspLogin.m_retcode;
        m_clientIp = cImRspLogin.m_clientIp;
        m_serverTime = cImRspLogin.m_serverTime;
        m_workKey = cImRspLogin.m_workKey;
        m_pwtoken = cImRspLogin.m_pwtoken;
        m_remark = cImRspLogin.m_remark;
        m_webmd5pw = cImRspLogin.m_webmd5pw;
        m_lastClientip = cImRspLogin.m_lastClientip;
        m_bindid = cImRspLogin.m_bindid;
        m_newVersion = cImRspLogin.m_newVersion;
        m_newVersionUrl = cImRspLogin.m_newVersionUrl;
        m_versionInfo = cImRspLogin.m_versionInfo;
        m_userId = cImRspLogin.m_userId;
        m_nickName = cImRspLogin.m_nickName;
        m_authcodeurl = cImRspLogin.m_authcodeurl;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint32_t&  GetClientIp () const { return m_clientIp; }
    bool SetClientIp ( const uint32_t&  dwClientIp )
    {
        m_clientIp = dwClientIp;
        return true;
    }
    const uint32_t&  GetServerTime () const { return m_serverTime; }
    bool SetServerTime ( const uint32_t&  dwServerTime )
    {
        m_serverTime = dwServerTime;
        return true;
    }
    const string &  GetWorkKey () const { return m_workKey; }
    bool SetWorkKey ( const string &  strWorkKey )
    {
        m_workKey = strWorkKey;
        return true;
    }
    const string&  GetPwtoken () const { return m_pwtoken; }
    bool SetPwtoken ( const string&  strPwtoken )
    {
        m_pwtoken = strPwtoken;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 2048) return false;
        m_remark = strRemark;
        return true;
    }
    const string&  GetWebmd5pw () const { return m_webmd5pw; }
    bool SetWebmd5pw ( const string&  strWebmd5pw )
    {
        m_webmd5pw = strWebmd5pw;
        return true;
    }
    const uint32_t&  GetLastClientip () const { return m_lastClientip; }
    bool SetLastClientip ( const uint32_t&  dwLastClientip )
    {
        m_lastClientip = dwLastClientip;
        return true;
    }
    const string&  GetBindid () const { return m_bindid; }
    bool SetBindid ( const string&  strBindid )
    {
        m_bindid = strBindid;
        return true;
    }
    const string&  GetNewVersion () const { return m_newVersion; }
    bool SetNewVersion ( const string&  strNewVersion )
    {
        m_newVersion = strNewVersion;
        return true;
    }
    const string&  GetNewVersionUrl () const { return m_newVersionUrl; }
    bool SetNewVersionUrl ( const string&  strNewVersionUrl )
    {
        m_newVersionUrl = strNewVersionUrl;
        return true;
    }
    const string&  GetVersionInfo () const { return m_versionInfo; }
    bool SetVersionInfo ( const string&  strVersionInfo )
    {
        m_versionInfo = strVersionInfo;
        return true;
    }
    const string&  GetUserId () const { return m_userId; }
    bool SetUserId ( const string&  strUserId )
    {
        m_userId = strUserId;
        return true;
    }
    const string&  GetNickName () const { return m_nickName; }
    bool SetNickName ( const string&  strNickName )
    {
        m_nickName = strNickName;
        return true;
    }
    const string&  GetAuthcodeurl () const { return m_authcodeurl; }
    bool SetAuthcodeurl ( const string&  strAuthcodeurl )
    {
        m_authcodeurl = strAuthcodeurl;
        return true;
    }
private:
    uint32_t m_retcode;
    uint32_t m_clientIp;
    uint32_t m_serverTime;
    string  m_workKey;
    string m_pwtoken;
    string m_remark;
    string m_webmd5pw;
    uint32_t m_lastClientip;
    string m_bindid;
    string m_newVersion;
    string m_newVersionUrl;
    string m_versionInfo;
    string m_userId;
    string m_nickName;
    string m_authcodeurl;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspLogin::Size() const
{
    uint32_t nSize = 76;
    nSize += m_workKey.length();
    nSize += m_pwtoken.length();
    nSize += m_remark.length();
    nSize += m_webmd5pw.length();
    nSize += m_bindid.length();
    nSize += m_newVersion.length();
    nSize += m_newVersionUrl.length();
    nSize += m_versionInfo.length();
    nSize += m_userId.length();
    nSize += m_nickName.length();
    nSize += m_authcodeurl.length();
    return nSize;
}

class CImReqLogoff : public CPackData
{
public:
    CImReqLogoff() : m_iscancle(0)
    {
    }

    ~CImReqLogoff() { }
    CImReqLogoff(const string&  strUid, const uint32_t&  dwIscancle= 0)
    {
        m_uid = strUid;
        m_iscancle = dwIscancle;
    }
    CImReqLogoff&  operator=( const CImReqLogoff&  cImReqLogoff )
    {
        m_uid = cImReqLogoff.m_uid;
        m_iscancle = cImReqLogoff.m_iscancle;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const uint32_t&  GetIscancle () const { return m_iscancle; }
    bool SetIscancle ( const uint32_t&  dwIscancle )
    {
        m_iscancle = dwIscancle;
        return true;
    }
private:
    string m_uid;
    uint32_t m_iscancle;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqLogoff::Size() const
{
    uint32_t nSize = 11;
    nSize += m_uid.length();
    return nSize;
}

class CImRspLogoff : public CPackData
{
public:
    CImRspLogoff()
    {
    }

    ~CImRspLogoff() { }
    CImRspLogoff(const uint32_t&  dwRetcode, const string&  strRemark)
    {
        m_retcode = dwRetcode;
        m_remark = strRemark;
    }
    CImRspLogoff&  operator=( const CImRspLogoff&  cImRspLogoff )
    {
        m_retcode = cImRspLogoff.m_retcode;
        m_remark = cImRspLogoff.m_remark;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 256) return false;
        m_remark = strRemark;
        return true;
    }
private:
    uint32_t m_retcode;
    string m_remark;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspLogoff::Size() const
{
    uint32_t nSize = 11;
    nSize += m_remark.length();
    return nSize;
}

class CImNtfForcedisconnect : public CPackData
{
public:
    CImNtfForcedisconnect()
    {
    }

    ~CImNtfForcedisconnect() { }
    CImNtfForcedisconnect(const uint8_t&  chType, const string&  strRemark, const string&  strIp, const string&  strUuid)
    {
        m_type = chType;
        m_remark = strRemark;
        m_ip = strIp;
        m_uuid = strUuid;
    }
    CImNtfForcedisconnect&  operator=( const CImNtfForcedisconnect&  cImNtfForcedisconnect )
    {
        m_type = cImNtfForcedisconnect.m_type;
        m_remark = cImNtfForcedisconnect.m_remark;
        m_ip = cImNtfForcedisconnect.m_ip;
        m_uuid = cImNtfForcedisconnect.m_uuid;
        return *this;
    }

    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetRemark () const { return m_remark; }
    bool SetRemark ( const string&  strRemark )
    {
        if(strRemark.size() > 256) return false;
        m_remark = strRemark;
        return true;
    }
    const string&  GetIp () const { return m_ip; }
    bool SetIp ( const string&  strIp )
    {
        m_ip = strIp;
        return true;
    }
    const string&  GetUuid () const { return m_uuid; }
    bool SetUuid ( const string&  strUuid )
    {
        m_uuid = strUuid;
        return true;
    }
private:
    uint8_t m_type;
    string m_remark;
    string m_ip;
    string m_uuid;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImNtfForcedisconnect::Size() const
{
    uint32_t nSize = 18;
    nSize += m_remark.length();
    nSize += m_ip.length();
    nSize += m_uuid.length();
    return nSize;
}

class CImReqSendimmessage : public CPackData
{
public:
    CImReqSendimmessage()
    {
    }

    ~CImReqSendimmessage() { }
    CImReqSendimmessage(const string&  strTargetId, const uint8_t&  chType, const uint8_t&  chMsgType, const int64_t&  llMsgId, const string&  strNickName, const string &  strMessage)
    {
        m_targetId = strTargetId;
        m_type = chType;
        m_msgType = chMsgType;
        m_msgId = llMsgId;
        m_nickName = strNickName;
        m_message = strMessage;
    }
    CImReqSendimmessage&  operator=( const CImReqSendimmessage&  cImReqSendimmessage )
    {
        m_targetId = cImReqSendimmessage.m_targetId;
        m_type = cImReqSendimmessage.m_type;
        m_msgType = cImReqSendimmessage.m_msgType;
        m_msgId = cImReqSendimmessage.m_msgId;
        m_nickName = cImReqSendimmessage.m_nickName;
        m_message = cImReqSendimmessage.m_message;
        return *this;
    }

    const string&  GetTargetId () const { return m_targetId; }
    bool SetTargetId ( const string&  strTargetId )
    {
        if(strTargetId.size() > 64) return false;
        m_targetId = strTargetId;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
    const int64_t&  GetMsgId () const { return m_msgId; }
    bool SetMsgId ( const int64_t&  llMsgId )
    {
        m_msgId = llMsgId;
        return true;
    }
    const string&  GetNickName () const { return m_nickName; }
    bool SetNickName ( const string&  strNickName )
    {
        m_nickName = strNickName;
        return true;
    }
    const string &  GetMessage () const { return m_message; }
    bool SetMessage ( const string &  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_targetId;
    uint8_t m_type;
    uint8_t m_msgType;
    int64_t m_msgId;
    string m_nickName;
    string  m_message;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqSendimmessage::Size() const
{
    uint32_t nSize = 29;
    nSize += m_targetId.length();
    nSize += m_nickName.length();
    nSize += m_message.length();
    return nSize;
}

class CImRspSendimmessage : public CPackData
{
public:
    CImRspSendimmessage()
    {
    }

    ~CImRspSendimmessage() { }
    CImRspSendimmessage(const int64_t&  llMsgId, const string&  strUuid, const uint32_t&  dwSendTime)
    {
        m_msgId = llMsgId;
        m_uuid = strUuid;
        m_sendTime = dwSendTime;
    }
    CImRspSendimmessage&  operator=( const CImRspSendimmessage&  cImRspSendimmessage )
    {
        m_msgId = cImRspSendimmessage.m_msgId;
        m_uuid = cImRspSendimmessage.m_uuid;
        m_sendTime = cImRspSendimmessage.m_sendTime;
        return *this;
    }

    const int64_t&  GetMsgId () const { return m_msgId; }
    bool SetMsgId ( const int64_t&  llMsgId )
    {
        m_msgId = llMsgId;
        return true;
    }
    const string&  GetUuid () const { return m_uuid; }
    bool SetUuid ( const string&  strUuid )
    {
        m_uuid = strUuid;
        return true;
    }
    const uint32_t&  GetSendTime () const { return m_sendTime; }
    bool SetSendTime ( const uint32_t&  dwSendTime )
    {
        m_sendTime = dwSendTime;
        return true;
    }
private:
    int64_t m_msgId;
    string m_uuid;
    uint32_t m_sendTime;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspSendimmessage::Size() const
{
    uint32_t nSize = 20;
    nSize += m_uuid.length();
    return nSize;
}

struct STypeStatus
{
public:
    STypeStatus()
    {
    }

    ~STypeStatus() { }
    STypeStatus(const uint8_t&  chType)
    {
        m_type = chType;
    }
    STypeStatus&  operator=( const STypeStatus&  sTypeStatus )
    {
        m_type = sTypeStatus.m_type;
        return *this;
    }

    uint8_t m_type;

public:
    uint32_t Size() const;
};

inline uint32_t STypeStatus::Size() const
{
    return 3;
}
CPackData& operator<< ( CPackData& cPackData, const STypeStatus&  sTypeStatus );
CPackData& operator>> ( CPackData& cPackData, STypeStatus&  sTypeStatus );

struct SMsgStatus
{
public:
    SMsgStatus()
    {
    }

    ~SMsgStatus() { }
    SMsgStatus(const uint32_t&  dwStatus)
    {
        m_status = dwStatus;
    }
    SMsgStatus&  operator=( const SMsgStatus&  sMsgStatus )
    {
        m_status = sMsgStatus.m_status;
        return *this;
    }

    uint32_t m_status;

public:
    uint32_t Size() const;
};

inline uint32_t SMsgStatus::Size() const
{
    return 6;
}
CPackData& operator<< ( CPackData& cPackData, const SMsgStatus&  sMsgStatus );
CPackData& operator>> ( CPackData& cPackData, SMsgStatus&  sMsgStatus );

struct SMsgItem
{
public:
    SMsgItem()
    {
    }

    ~SMsgItem() { }
    SMsgItem(const uint8_t&  chSubType, const string &  strData, const string&  strUrl, const uint32_t&  dwFileSize, const uint32_t&  dwPlayTime)
    {
        m_subType = chSubType;
        m_data = strData;
        m_url = strUrl;
        m_fileSize = dwFileSize;
        m_playTime = dwPlayTime;
    }
    SMsgItem&  operator=( const SMsgItem&  sMsgItem )
    {
        m_subType = sMsgItem.m_subType;
        m_data = sMsgItem.m_data;
        m_url = sMsgItem.m_url;
        m_fileSize = sMsgItem.m_fileSize;
        m_playTime = sMsgItem.m_playTime;
        return *this;
    }

    uint8_t m_subType;
    string  m_data;
    string m_url;
    uint32_t m_fileSize;
    uint32_t m_playTime;

public:
    uint32_t Size() const;
};

inline uint32_t SMsgItem::Size() const
{
    uint32_t nSize = 23;
    nSize += m_data.length();
    nSize += m_url.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SMsgItem&  sMsgItem );
CPackData& operator>> ( CPackData& cPackData, SMsgItem&  sMsgItem );

struct SMessageBody
{
public:
    SMessageBody()
    {
    }

    ~SMessageBody() { }
    SMessageBody(const VECTOR< SMsgItem >&  vecMessageList)
    {
        m_messageList = vecMessageList;
    }
    SMessageBody&  operator=( const SMessageBody&  sMessageBody )
    {
        m_messageList = sMessageBody.m_messageList;
        return *this;
    }

    VECTOR< SMsgItem > m_messageList;

public:
    uint32_t Size() const;
};

inline uint32_t SMessageBody::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_messageList.size(); i++)
    {
        nSize += m_messageList[i].Size();
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SMessageBody&  sMessageBody );
CPackData& operator>> ( CPackData& cPackData, SMessageBody&  sMessageBody );

class CImNtfImmessage : public CPackData
{
public:
    CImNtfImmessage() : m_uuid("")
    {
    }

    ~CImNtfImmessage() { }
    CImNtfImmessage(const string&  strSendId, const uint32_t&  dwSendTime, const uint8_t&  chMsgType, const int64_t&  llMsgId, const string &  strMessage, const string&  strNickName, const string&  strUuid= "")
    {
        m_sendId = strSendId;
        m_sendTime = dwSendTime;
        m_msgType = chMsgType;
        m_msgId = llMsgId;
        m_message = strMessage;
        m_nickName = strNickName;
        m_uuid = strUuid;
    }
    CImNtfImmessage&  operator=( const CImNtfImmessage&  cImNtfImmessage )
    {
        m_sendId = cImNtfImmessage.m_sendId;
        m_sendTime = cImNtfImmessage.m_sendTime;
        m_msgType = cImNtfImmessage.m_msgType;
        m_msgId = cImNtfImmessage.m_msgId;
        m_message = cImNtfImmessage.m_message;
        m_nickName = cImNtfImmessage.m_nickName;
        m_uuid = cImNtfImmessage.m_uuid;
        return *this;
    }

    const string&  GetSendId () const { return m_sendId; }
    bool SetSendId ( const string&  strSendId )
    {
        if(strSendId.size() > 64) return false;
        m_sendId = strSendId;
        return true;
    }
    const uint32_t&  GetSendTime () const { return m_sendTime; }
    bool SetSendTime ( const uint32_t&  dwSendTime )
    {
        m_sendTime = dwSendTime;
        return true;
    }
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
    const int64_t&  GetMsgId () const { return m_msgId; }
    bool SetMsgId ( const int64_t&  llMsgId )
    {
        m_msgId = llMsgId;
        return true;
    }
    const string &  GetMessage () const { return m_message; }
    bool SetMessage ( const string &  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const string&  GetNickName () const { return m_nickName; }
    bool SetNickName ( const string&  strNickName )
    {
        m_nickName = strNickName;
        return true;
    }
    const string&  GetUuid () const { return m_uuid; }
    bool SetUuid ( const string&  strUuid )
    {
        m_uuid = strUuid;
        return true;
    }
private:
    string m_sendId;
    uint32_t m_sendTime;
    uint8_t m_msgType;
    int64_t m_msgId;
    string  m_message;
    string m_nickName;
    string m_uuid;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImNtfImmessage::Size() const
{
    uint32_t nSize = 37;
    nSize += m_sendId.length();
    nSize += m_message.length();
    nSize += m_nickName.length();
    nSize += m_uuid.length();
    return nSize;
}

class CImNtfOperationtip : public CPackData
{
public:
    CImNtfOperationtip()
    {
    }

    ~CImNtfOperationtip() { }
    CImNtfOperationtip(const string&  strSendId, const uint32_t&  dwSendTime, const uint8_t&  chMsgType, const string &  strMessage)
    {
        m_sendId = strSendId;
        m_sendTime = dwSendTime;
        m_msgType = chMsgType;
        m_message = strMessage;
    }
    CImNtfOperationtip&  operator=( const CImNtfOperationtip&  cImNtfOperationtip )
    {
        m_sendId = cImNtfOperationtip.m_sendId;
        m_sendTime = cImNtfOperationtip.m_sendTime;
        m_msgType = cImNtfOperationtip.m_msgType;
        m_message = cImNtfOperationtip.m_message;
        return *this;
    }

    const string&  GetSendId () const { return m_sendId; }
    bool SetSendId ( const string&  strSendId )
    {
        if(strSendId.size() > 64) return false;
        m_sendId = strSendId;
        return true;
    }
    const uint32_t&  GetSendTime () const { return m_sendTime; }
    bool SetSendTime ( const uint32_t&  dwSendTime )
    {
        m_sendTime = dwSendTime;
        return true;
    }
    const uint8_t&  GetMsgType () const { return m_msgType; }
    bool SetMsgType ( const uint8_t&  chMsgType )
    {
        m_msgType = chMsgType;
        return true;
    }
    const string &  GetMessage () const { return m_message; }
    bool SetMessage ( const string &  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    string m_sendId;
    uint32_t m_sendTime;
    uint8_t m_msgType;
    string  m_message;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImNtfOperationtip::Size() const
{
    uint32_t nSize = 18;
    nSize += m_sendId.length();
    nSize += m_message.length();
    return nSize;
}

struct SNotifyOffmsgItem
{
public:
    SNotifyOffmsgItem()
    {
    }

    ~SNotifyOffmsgItem() { }
    SNotifyOffmsgItem(const uint32_t&  dwCount, const uint32_t&  dwSize)
    {
        m_count = dwCount;
        m_size = dwSize;
    }
    SNotifyOffmsgItem&  operator=( const SNotifyOffmsgItem&  sNotifyOffmsgItem )
    {
        m_count = sNotifyOffmsgItem.m_count;
        m_size = sNotifyOffmsgItem.m_size;
        return *this;
    }

    uint32_t m_count;
    uint32_t m_size;

public:
    uint32_t Size() const;
};

inline uint32_t SNotifyOffmsgItem::Size() const
{
    return 11;
}
CPackData& operator<< ( CPackData& cPackData, const SNotifyOffmsgItem&  sNotifyOffmsgItem );
CPackData& operator>> ( CPackData& cPackData, SNotifyOffmsgItem&  sNotifyOffmsgItem );

struct SNotifyContactOperate
{
public:
    SNotifyContactOperate()
    {
    }

    ~SNotifyContactOperate() { }
    SNotifyContactOperate(const uint8_t&  chOptype, const string&  strPeerId, const string&  strPeerName, const string&  strMessage)
    {
        m_optype = chOptype;
        m_peerId = strPeerId;
        m_peerName = strPeerName;
        m_message = strMessage;
    }
    SNotifyContactOperate&  operator=( const SNotifyContactOperate&  sNotifyContactOperate )
    {
        m_optype = sNotifyContactOperate.m_optype;
        m_peerId = sNotifyContactOperate.m_peerId;
        m_peerName = sNotifyContactOperate.m_peerName;
        m_message = sNotifyContactOperate.m_message;
        return *this;
    }

    uint8_t m_optype;
    string m_peerId;
    string m_peerName;
    string m_message;

public:
    uint32_t Size() const;
};

inline uint32_t SNotifyContactOperate::Size() const
{
    uint32_t nSize = 18;
    nSize += m_peerId.length();
    nSize += m_peerName.length();
    nSize += m_message.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SNotifyContactOperate&  sNotifyContactOperate );
CPackData& operator>> ( CPackData& cPackData, SNotifyContactOperate&  sNotifyContactOperate );

class CImReqDelofflinemsg : public CPackData
{
public:
    CImReqDelofflinemsg()
    {
    }

    ~CImReqDelofflinemsg() { }
    CImReqDelofflinemsg(const uint32_t&  dwLastTime, const uint32_t&  dwCount)
    {
        m_lastTime = dwLastTime;
        m_count = dwCount;
    }
    CImReqDelofflinemsg&  operator=( const CImReqDelofflinemsg&  cImReqDelofflinemsg )
    {
        m_lastTime = cImReqDelofflinemsg.m_lastTime;
        m_count = cImReqDelofflinemsg.m_count;
        return *this;
    }

    const uint32_t&  GetLastTime () const { return m_lastTime; }
    bool SetLastTime ( const uint32_t&  dwLastTime )
    {
        m_lastTime = dwLastTime;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
private:
    uint32_t m_lastTime;
    uint32_t m_count;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqDelofflinemsg::Size() const
{
    return 11;
}
class CImRspDelofflinemsg : public CPackData
{
public:
    CImRspDelofflinemsg()
    {
    }

    ~CImRspDelofflinemsg() { }
    CImRspDelofflinemsg(const uint32_t&  dwRetcode)
    {
        m_retcode = dwRetcode;
    }
    CImRspDelofflinemsg&  operator=( const CImRspDelofflinemsg&  cImRspDelofflinemsg )
    {
        m_retcode = cImRspDelofflinemsg.m_retcode;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
private:
    uint32_t m_retcode;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspDelofflinemsg::Size() const
{
    return 6;
}
struct SContactAddNotify
{
public:
    SContactAddNotify()
    {
    }

    ~SContactAddNotify() { }
    SContactAddNotify(const uint32_t&  dwAction, const string&  strMessage)
    {
        m_action = dwAction;
        m_message = strMessage;
    }
    SContactAddNotify&  operator=( const SContactAddNotify&  sContactAddNotify )
    {
        m_action = sContactAddNotify.m_action;
        m_message = sContactAddNotify.m_message;
        return *this;
    }

    uint32_t m_action;
    string m_message;

public:
    uint32_t Size() const;
};

inline uint32_t SContactAddNotify::Size() const
{
    uint32_t nSize = 11;
    nSize += m_message.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SContactAddNotify&  sContactAddNotify );
CPackData& operator>> ( CPackData& cPackData, SContactAddNotify&  sContactAddNotify );

struct SChgContactInfo
{
public:
    SChgContactInfo()
    {
    }

    ~SChgContactInfo() { }
    SChgContactInfo(const int64_t&  llMask, const string&  strContactId, const string&  strNickName, const string&  strImportance, const int64_t&  llGroupId)
    {
        m_mask = llMask;
        m_contactId = strContactId;
        m_nickName = strNickName;
        m_importance = strImportance;
        m_groupId = llGroupId;
    }
    SChgContactInfo&  operator=( const SChgContactInfo&  sChgContactInfo )
    {
        m_mask = sChgContactInfo.m_mask;
        m_contactId = sChgContactInfo.m_contactId;
        m_nickName = sChgContactInfo.m_nickName;
        m_importance = sChgContactInfo.m_importance;
        m_groupId = sChgContactInfo.m_groupId;
        return *this;
    }

    int64_t m_mask;
    string m_contactId;
    string m_nickName;
    string m_importance;
    int64_t m_groupId;

public:
    uint32_t Size() const;
};

inline uint32_t SChgContactInfo::Size() const
{
    uint32_t nSize = 34;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    nSize += m_importance.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SChgContactInfo&  sChgContactInfo );
CPackData& operator>> ( CPackData& cPackData, SChgContactInfo&  sChgContactInfo );

struct SContactInfo
{
public:
    SContactInfo()
    {
    }

    ~SContactInfo() { }
    SContactInfo(const string&  strContactId, const string&  strNickName, const string&  strMd5Phone, const string&  strImportance, const int64_t&  llGroupId)
    {
        m_contactId = strContactId;
        m_nickName = strNickName;
        m_md5Phone = strMd5Phone;
        m_importance = strImportance;
        m_groupId = llGroupId;
    }
    SContactInfo&  operator=( const SContactInfo&  sContactInfo )
    {
        m_contactId = sContactInfo.m_contactId;
        m_nickName = sContactInfo.m_nickName;
        m_md5Phone = sContactInfo.m_md5Phone;
        m_importance = sContactInfo.m_importance;
        m_groupId = sContactInfo.m_groupId;
        return *this;
    }

    string m_contactId;
    string m_nickName;
    string m_md5Phone;
    string m_importance;
    int64_t m_groupId;

public:
    uint32_t Size() const;
};

inline uint32_t SContactInfo::Size() const
{
    uint32_t nSize = 30;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    nSize += m_md5Phone.length();
    nSize += m_importance.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SContactInfo&  sContactInfo );
CPackData& operator>> ( CPackData& cPackData, SContactInfo&  sContactInfo );

class CImReqGetcontact : public CPackData
{
public:
    CImReqGetcontact()
    {
    }

    ~CImReqGetcontact() { }
    CImReqGetcontact(const uint32_t&  dwTimestamp, const uint32_t&  dwCount)
    {
        m_timestamp = dwTimestamp;
        m_count = dwCount;
    }
    CImReqGetcontact&  operator=( const CImReqGetcontact&  cImReqGetcontact )
    {
        m_timestamp = cImReqGetcontact.m_timestamp;
        m_count = cImReqGetcontact.m_count;
        return *this;
    }

    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
private:
    uint32_t m_timestamp;
    uint32_t m_count;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetcontact::Size() const
{
    return 11;
}
class CImRspGetcontact : public CPackData
{
public:
    CImRspGetcontact()
    {
    }

    ~CImRspGetcontact() { }
    CImRspGetcontact(const uint32_t&  dwRetcode, const VECTOR< SContactInfo >&  vecContactList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
        m_timestamp = dwTimestamp;
    }
    CImRspGetcontact&  operator=( const CImRspGetcontact&  cImRspGetcontact )
    {
        m_retcode = cImRspGetcontact.m_retcode;
        m_contactList = cImRspGetcontact.m_contactList;
        m_timestamp = cImRspGetcontact.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SContactInfo >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SContactInfo >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SContactInfo > m_contactList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetcontact::Size() const
{
    uint32_t nSize = 17;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImReqGetUnionContact : public CPackData
{
public:
    CImReqGetUnionContact()
    {
    }

    ~CImReqGetUnionContact() { }
    CImReqGetUnionContact(const uint32_t&  dwTimestamp, const uint32_t&  dwCount)
    {
        m_timestamp = dwTimestamp;
        m_count = dwCount;
    }
    CImReqGetUnionContact&  operator=( const CImReqGetUnionContact&  cImReqGetUnionContact )
    {
        m_timestamp = cImReqGetUnionContact.m_timestamp;
        m_count = cImReqGetUnionContact.m_count;
        return *this;
    }

    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
private:
    uint32_t m_timestamp;
    uint32_t m_count;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetUnionContact::Size() const
{
    return 11;
}
class CImRspGetUnionContact : public CPackData
{
public:
    CImRspGetUnionContact()
    {
    }

    ~CImRspGetUnionContact() { }
    CImRspGetUnionContact(const uint32_t&  dwRetcode, const VECTOR< SContactInfo >&  vecContactList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
        m_timestamp = dwTimestamp;
    }
    CImRspGetUnionContact&  operator=( const CImRspGetUnionContact&  cImRspGetUnionContact )
    {
        m_retcode = cImRspGetUnionContact.m_retcode;
        m_contactList = cImRspGetUnionContact.m_contactList;
        m_timestamp = cImRspGetUnionContact.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SContactInfo >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SContactInfo >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SContactInfo > m_contactList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetUnionContact::Size() const
{
    uint32_t nSize = 17;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImReqChgcontact : public CPackData
{
public:
    CImReqChgcontact()
    {
    }

    ~CImReqChgcontact() { }
    CImReqChgcontact(const VECTOR< SChgContactInfo >&  vecContactList)
    {
        m_contactList = vecContactList;
    }
    CImReqChgcontact&  operator=( const CImReqChgcontact&  cImReqChgcontact )
    {
        m_contactList = cImReqChgcontact.m_contactList;
        return *this;
    }

    const VECTOR< SChgContactInfo >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SChgContactInfo >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
private:
    VECTOR< SChgContactInfo > m_contactList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqChgcontact::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImRspChgcontact : public CPackData
{
public:
    CImRspChgcontact()
    {
    }

    ~CImRspChgcontact() { }
    CImRspChgcontact(const uint32_t&  dwRetcode, const VECTOR< SChgContactInfo >&  vecContactList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
        m_timestamp = dwTimestamp;
    }
    CImRspChgcontact&  operator=( const CImRspChgcontact&  cImRspChgcontact )
    {
        m_retcode = cImRspChgcontact.m_retcode;
        m_contactList = cImRspChgcontact.m_contactList;
        m_timestamp = cImRspChgcontact.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SChgContactInfo >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SChgContactInfo >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SChgContactInfo > m_contactList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspChgcontact::Size() const
{
    uint32_t nSize = 17;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImReqDelcontact : public CPackData
{
public:
    CImReqDelcontact()
    {
    }

    ~CImReqDelcontact() { }
    CImReqDelcontact(const VECTOR< string >&  vecContactList)
    {
        m_contactList = vecContactList;
    }
    CImReqDelcontact&  operator=( const CImReqDelcontact&  cImReqDelcontact )
    {
        m_contactList = cImReqDelcontact.m_contactList;
        return *this;
    }

    const VECTOR< string >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< string >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
private:
    VECTOR< string > m_contactList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqDelcontact::Size() const
{
    uint32_t nSize = 7;
    nSize += m_contactList.size() * 4;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].length();
    }
    return nSize;
}

class CImRspDelcontact : public CPackData
{
public:
    CImRspDelcontact()
    {
    }

    ~CImRspDelcontact() { }
    CImRspDelcontact(const uint32_t&  dwRetcode, const VECTOR< string >&  vecContactList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
        m_timestamp = dwTimestamp;
    }
    CImRspDelcontact&  operator=( const CImRspDelcontact&  cImRspDelcontact )
    {
        m_retcode = cImRspDelcontact.m_retcode;
        m_contactList = cImRspDelcontact.m_contactList;
        m_timestamp = cImRspDelcontact.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< string >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< string >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< string > m_contactList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspDelcontact::Size() const
{
    uint32_t nSize = 17;
    nSize += m_contactList.size() * 4;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].length();
    }
    return nSize;
}

struct SUserStatus
{
public:
    SUserStatus()
    {
    }

    ~SUserStatus() { }
    SUserStatus(const string&  strUserId, const uint8_t&  chBasicStatus, const uint8_t&  chPredefStatus)
    {
        m_userId = strUserId;
        m_basicStatus = chBasicStatus;
        m_predefStatus = chPredefStatus;
    }
    SUserStatus&  operator=( const SUserStatus&  sUserStatus )
    {
        m_userId = sUserStatus.m_userId;
        m_basicStatus = sUserStatus.m_basicStatus;
        m_predefStatus = sUserStatus.m_predefStatus;
        return *this;
    }

    string m_userId;
    uint8_t m_basicStatus;
    uint8_t m_predefStatus;

public:
    uint32_t Size() const;
};

inline uint32_t SUserStatus::Size() const
{
    uint32_t nSize = 10;
    nSize += m_userId.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SUserStatus&  sUserStatus );
CPackData& operator>> ( CPackData& cPackData, SUserStatus&  sUserStatus );

class CImNtfStatus : public CPackData
{
public:
    CImNtfStatus()
    {
    }

    ~CImNtfStatus() { }
    CImNtfStatus(const VECTOR< SUserStatus >&  vecUserStatusList)
    {
        m_userStatusList = vecUserStatusList;
    }
    CImNtfStatus&  operator=( const CImNtfStatus&  cImNtfStatus )
    {
        m_userStatusList = cImNtfStatus.m_userStatusList;
        return *this;
    }

    const VECTOR< SUserStatus >&  GetUserStatusList () const { return m_userStatusList; }
    bool SetUserStatusList ( const VECTOR< SUserStatus >&  vecUserStatusList )
    {
        m_userStatusList = vecUserStatusList;
        return true;
    }
private:
    VECTOR< SUserStatus > m_userStatusList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImNtfStatus::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_userStatusList.size(); i++)
    {
        nSize += m_userStatusList[i].Size();
    }
    return nSize;
}

class CImReqSubscribeInfo : public CPackData
{
public:
    CImReqSubscribeInfo()
    {
    }

    ~CImReqSubscribeInfo() { }
    CImReqSubscribeInfo(const VECTOR< string >&  vecTargetList)
    {
        m_targetList = vecTargetList;
    }
    CImReqSubscribeInfo&  operator=( const CImReqSubscribeInfo&  cImReqSubscribeInfo )
    {
        m_targetList = cImReqSubscribeInfo.m_targetList;
        return *this;
    }

    const VECTOR< string >&  GetTargetList () const { return m_targetList; }
    bool SetTargetList ( const VECTOR< string >&  vecTargetList )
    {
        m_targetList = vecTargetList;
        return true;
    }
private:
    VECTOR< string > m_targetList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqSubscribeInfo::Size() const
{
    uint32_t nSize = 7;
    nSize += m_targetList.size() * 4;
    for(uint32_t i = 0; i < m_targetList.size(); i++)
    {
        nSize += m_targetList[i].length();
    }
    return nSize;
}

class CImRspSubscribeInfo : public CPackData
{
public:
    CImRspSubscribeInfo()
    {
    }

    ~CImRspSubscribeInfo() { }
    CImRspSubscribeInfo(const uint32_t&  dwRetcode, const VECTOR< SUserStatus >&  vecStatusList)
    {
        m_retcode = dwRetcode;
        m_statusList = vecStatusList;
    }
    CImRspSubscribeInfo&  operator=( const CImRspSubscribeInfo&  cImRspSubscribeInfo )
    {
        m_retcode = cImRspSubscribeInfo.m_retcode;
        m_statusList = cImRspSubscribeInfo.m_statusList;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SUserStatus >&  GetStatusList () const { return m_statusList; }
    bool SetStatusList ( const VECTOR< SUserStatus >&  vecStatusList )
    {
        m_statusList = vecStatusList;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SUserStatus > m_statusList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspSubscribeInfo::Size() const
{
    uint32_t nSize = 12;
    for(uint32_t i = 0; i < m_statusList.size(); i++)
    {
        nSize += m_statusList[i].Size();
    }
    return nSize;
}

class CImReqAddcontactNew : public CPackData
{
public:
    CImReqAddcontactNew() : m_supportFlag(0)
    {
    }

    ~CImReqAddcontactNew() { }
    CImReqAddcontactNew(const SContactInfo&  sContact, const uint8_t&  chType, const string&  strMessage, const uint32_t&  dwSupportFlag= 0)
    {
        m_contact = sContact;
        m_type = chType;
        m_message = strMessage;
        m_supportFlag = dwSupportFlag;
    }
    CImReqAddcontactNew&  operator=( const CImReqAddcontactNew&  cImReqAddcontactNew )
    {
        m_contact = cImReqAddcontactNew.m_contact;
        m_type = cImReqAddcontactNew.m_type;
        m_message = cImReqAddcontactNew.m_message;
        m_supportFlag = cImReqAddcontactNew.m_supportFlag;
        return *this;
    }

    const SContactInfo&  GetContact () const { return m_contact; }
    bool SetContact ( const SContactInfo&  sContact )
    {
        m_contact = sContact;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
    const uint32_t&  GetSupportFlag () const { return m_supportFlag; }
    bool SetSupportFlag ( const uint32_t&  dwSupportFlag )
    {
        m_supportFlag = dwSupportFlag;
        return true;
    }
private:
    SContactInfo m_contact;
    uint8_t m_type;
    string m_message;
    uint32_t m_supportFlag;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqAddcontactNew::Size() const
{
    uint32_t nSize = 14;
    nSize += m_contact.Size();
    nSize += m_message.length();
    return nSize;
}

class CImRspAddcontactNew : public CPackData
{
public:
    CImRspAddcontactNew() : m_question(""),
            m_answer("")
    {
    }

    ~CImRspAddcontactNew() { }
    CImRspAddcontactNew(const uint32_t&  dwRetcode, const uint8_t&  chType, const SContactInfo&  sContact, const uint32_t&  dwTimestamp, const string&  strCompanyname, const string&  strQuestion= "", const string&  strAnswer= "")
    {
        m_retcode = dwRetcode;
        m_type = chType;
        m_contact = sContact;
        m_timestamp = dwTimestamp;
        m_companyname = strCompanyname;
        m_question = strQuestion;
        m_answer = strAnswer;
    }
    CImRspAddcontactNew&  operator=( const CImRspAddcontactNew&  cImRspAddcontactNew )
    {
        m_retcode = cImRspAddcontactNew.m_retcode;
        m_type = cImRspAddcontactNew.m_type;
        m_contact = cImRspAddcontactNew.m_contact;
        m_timestamp = cImRspAddcontactNew.m_timestamp;
        m_companyname = cImRspAddcontactNew.m_companyname;
        m_question = cImRspAddcontactNew.m_question;
        m_answer = cImRspAddcontactNew.m_answer;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint8_t&  GetType () const { return m_type; }
    bool SetType ( const uint8_t&  chType )
    {
        m_type = chType;
        return true;
    }
    const SContactInfo&  GetContact () const { return m_contact; }
    bool SetContact ( const SContactInfo&  sContact )
    {
        m_contact = sContact;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
    const string&  GetCompanyname () const { return m_companyname; }
    bool SetCompanyname ( const string&  strCompanyname )
    {
        m_companyname = strCompanyname;
        return true;
    }
    const string&  GetQuestion () const { return m_question; }
    bool SetQuestion ( const string&  strQuestion )
    {
        m_question = strQuestion;
        return true;
    }
    const string&  GetAnswer () const { return m_answer; }
    bool SetAnswer ( const string&  strAnswer )
    {
        m_answer = strAnswer;
        return true;
    }
private:
    uint32_t m_retcode;
    uint8_t m_type;
    SContactInfo m_contact;
    uint32_t m_timestamp;
    string m_companyname;
    string m_question;
    string m_answer;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspAddcontactNew::Size() const
{
    uint32_t nSize = 29;
    nSize += m_contact.Size();
    nSize += m_companyname.length();
    nSize += m_question.length();
    nSize += m_answer.length();
    return nSize;
}

class CImReqAddcntackNew : public CPackData
{
public:
    CImReqAddcntackNew()
    {
    }

    ~CImReqAddcntackNew() { }
    CImReqAddcntackNew(const uint8_t&  chOpcode, const string&  strContactId, const int64_t&  llGroupId, const string&  strNickName, const string&  strMessage)
    {
        m_opcode = chOpcode;
        m_contactId = strContactId;
        m_groupId = llGroupId;
        m_nickName = strNickName;
        m_message = strMessage;
    }
    CImReqAddcntackNew&  operator=( const CImReqAddcntackNew&  cImReqAddcntackNew )
    {
        m_opcode = cImReqAddcntackNew.m_opcode;
        m_contactId = cImReqAddcntackNew.m_contactId;
        m_groupId = cImReqAddcntackNew.m_groupId;
        m_nickName = cImReqAddcntackNew.m_nickName;
        m_message = cImReqAddcntackNew.m_message;
        return *this;
    }

    const uint8_t&  GetOpcode () const { return m_opcode; }
    bool SetOpcode ( const uint8_t&  chOpcode )
    {
        m_opcode = chOpcode;
        return true;
    }
    const string&  GetContactId () const { return m_contactId; }
    bool SetContactId ( const string&  strContactId )
    {
        if(strContactId.size() > 64) return false;
        m_contactId = strContactId;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const string&  GetNickName () const { return m_nickName; }
    bool SetNickName ( const string&  strNickName )
    {
        m_nickName = strNickName;
        return true;
    }
    const string&  GetMessage () const { return m_message; }
    bool SetMessage ( const string&  strMessage )
    {
        m_message = strMessage;
        return true;
    }
private:
    uint8_t m_opcode;
    string m_contactId;
    int64_t m_groupId;
    string m_nickName;
    string m_message;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqAddcntackNew::Size() const
{
    uint32_t nSize = 27;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    nSize += m_message.length();
    return nSize;
}

class CImRspAddcntackNew : public CPackData
{
public:
    CImRspAddcntackNew()
    {
    }

    ~CImRspAddcntackNew() { }
    CImRspAddcntackNew(const uint32_t&  dwRetcode, const uint8_t&  chOpcode, const int64_t&  llGroupId, const uint32_t&  dwTimestamp, const string&  strContactId)
    {
        m_retcode = dwRetcode;
        m_opcode = chOpcode;
        m_groupId = llGroupId;
        m_timestamp = dwTimestamp;
        m_contactId = strContactId;
    }
    CImRspAddcntackNew&  operator=( const CImRspAddcntackNew&  cImRspAddcntackNew )
    {
        m_retcode = cImRspAddcntackNew.m_retcode;
        m_opcode = cImRspAddcntackNew.m_opcode;
        m_groupId = cImRspAddcntackNew.m_groupId;
        m_timestamp = cImRspAddcntackNew.m_timestamp;
        m_contactId = cImRspAddcntackNew.m_contactId;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const uint8_t&  GetOpcode () const { return m_opcode; }
    bool SetOpcode ( const uint8_t&  chOpcode )
    {
        m_opcode = chOpcode;
        return true;
    }
    const int64_t&  GetGroupId () const { return m_groupId; }
    bool SetGroupId ( const int64_t&  llGroupId )
    {
        m_groupId = llGroupId;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
    const string&  GetContactId () const { return m_contactId; }
    bool SetContactId ( const string&  strContactId )
    {
        if(strContactId.size() > 64) return false;
        m_contactId = strContactId;
        return true;
    }
private:
    uint32_t m_retcode;
    uint8_t m_opcode;
    int64_t m_groupId;
    uint32_t m_timestamp;
    string m_contactId;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspAddcntackNew::Size() const
{
    uint32_t nSize = 27;
    nSize += m_contactId.length();
    return nSize;
}

class CImReqUserudbprofile : public CPackData
{
public:
    CImReqUserudbprofile()
    {
    }

    ~CImReqUserudbprofile() { }
    CImReqUserudbprofile(const string&  strUid)
    {
        m_uid = strUid;
    }
    CImReqUserudbprofile&  operator=( const CImReqUserudbprofile&  cImReqUserudbprofile )
    {
        m_uid = cImReqUserudbprofile.m_uid;
        return *this;
    }

    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
private:
    string m_uid;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqUserudbprofile::Size() const
{
    uint32_t nSize = 6;
    nSize += m_uid.length();
    return nSize;
}

class CImRspUserudbprofile : public CPackData
{
public:
    CImRspUserudbprofile()
    {
    }

    ~CImRspUserudbprofile() { }
    CImRspUserudbprofile(const uint32_t&  dwRetcode, const string&  strUid, const map< string,string >&  mapProfilelist)
    {
        m_retcode = dwRetcode;
        m_uid = strUid;
        m_profilelist = mapProfilelist;
    }
    CImRspUserudbprofile&  operator=( const CImRspUserudbprofile&  cImRspUserudbprofile )
    {
        m_retcode = cImRspUserudbprofile.m_retcode;
        m_uid = cImRspUserudbprofile.m_uid;
        m_profilelist = cImRspUserudbprofile.m_profilelist;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const string&  GetUid () const { return m_uid; }
    bool SetUid ( const string&  strUid )
    {
        m_uid = strUid;
        return true;
    }
    const map< string,string >&  GetProfilelist () const { return m_profilelist; }
    bool SetProfilelist ( const map< string,string >&  mapProfilelist )
    {
        m_profilelist = mapProfilelist;
        return true;
    }
private:
    uint32_t m_retcode;
    string m_uid;
    map< string,string > m_profilelist;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspUserudbprofile::Size() const
{
    uint32_t nSize = 15;
    nSize += m_uid.length();
    nSize += m_profilelist.size() * 8;
    {
        map< string,string >::const_iterator itr;
        for(itr = m_profilelist.begin(); itr != m_profilelist.end(); ++itr)
        {
            nSize += itr->first.length();
            nSize += itr->second.length();
        }
    }
    return nSize;
}

class CImReqGetTbwwContact : public CPackData
{
public:
    CImReqGetTbwwContact()
    {
    }

    ~CImReqGetTbwwContact() { }
    CImReqGetTbwwContact(const int32_t&  lTimestamp, const uint32_t&  dwCount)
    {
        m_timestamp = lTimestamp;
        m_count = dwCount;
    }
    CImReqGetTbwwContact&  operator=( const CImReqGetTbwwContact&  cImReqGetTbwwContact )
    {
        m_timestamp = cImReqGetTbwwContact.m_timestamp;
        m_count = cImReqGetTbwwContact.m_count;
        return *this;
    }

    const int32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const int32_t&  lTimestamp )
    {
        m_timestamp = lTimestamp;
        return true;
    }
    const uint32_t&  GetCount () const { return m_count; }
    bool SetCount ( const uint32_t&  dwCount )
    {
        m_count = dwCount;
        return true;
    }
private:
    int32_t m_timestamp;
    uint32_t m_count;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetTbwwContact::Size() const
{
    return 11;
}
class CImRspGetTbwwContact : public CPackData
{
public:
    CImRspGetTbwwContact()
    {
    }

    ~CImRspGetTbwwContact() { }
    CImRspGetTbwwContact(const uint32_t&  dwRetcode, const VECTOR< SContactInfo >&  vecContactList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
        m_timestamp = dwTimestamp;
    }
    CImRspGetTbwwContact&  operator=( const CImRspGetTbwwContact&  cImRspGetTbwwContact )
    {
        m_retcode = cImRspGetTbwwContact.m_retcode;
        m_contactList = cImRspGetTbwwContact.m_contactList;
        m_timestamp = cImRspGetTbwwContact.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SContactInfo >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SContactInfo >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SContactInfo > m_contactList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetTbwwContact::Size() const
{
    uint32_t nSize = 17;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImReqSearchLatentContact : public CPackData
{
public:
    CImReqSearchLatentContact() : m_longitude(0),
            m_latitude(0)
    {
    }

    ~CImReqSearchLatentContact() { }
    CImReqSearchLatentContact(const uint32_t&  dwAction, const double&  dLongitude= 0, const double&  dLatitude= 0)
    {
        m_action = dwAction;
        m_longitude = dLongitude;
        m_latitude = dLatitude;
    }
    CImReqSearchLatentContact&  operator=( const CImReqSearchLatentContact&  cImReqSearchLatentContact )
    {
        m_action = cImReqSearchLatentContact.m_action;
        m_longitude = cImReqSearchLatentContact.m_longitude;
        m_latitude = cImReqSearchLatentContact.m_latitude;
        return *this;
    }

    const uint32_t&  GetAction () const { return m_action; }
    bool SetAction ( const uint32_t&  dwAction )
    {
        m_action = dwAction;
        return true;
    }
    const double&  GetLongitude () const { return m_longitude; }
    bool SetLongitude ( const double&  dLongitude )
    {
        m_longitude = dLongitude;
        return true;
    }
    const double&  GetLatitude () const { return m_latitude; }
    bool SetLatitude ( const double&  dLatitude )
    {
        m_latitude = dLatitude;
        return true;
    }
private:
    uint32_t m_action;
    double m_longitude;
    double m_latitude;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqSearchLatentContact::Size() const
{
    return 24;
}
struct SLatentContact
{
public:
    SLatentContact()
    {
    }

    ~SLatentContact() { }
    SLatentContact(const string&  strContactId, const string&  strNickName, const string&  strMd5Phone, const string&  strReason, const int32_t&  lDistance, const int32_t&  lGender, const string&  strAvatarurl, const string&  strSignature)
    {
        m_contactId = strContactId;
        m_nickName = strNickName;
        m_md5Phone = strMd5Phone;
        m_reason = strReason;
        m_distance = lDistance;
        m_gender = lGender;
        m_avatarurl = strAvatarurl;
        m_signature = strSignature;
    }
    SLatentContact&  operator=( const SLatentContact&  sLatentContact )
    {
        m_contactId = sLatentContact.m_contactId;
        m_nickName = sLatentContact.m_nickName;
        m_md5Phone = sLatentContact.m_md5Phone;
        m_reason = sLatentContact.m_reason;
        m_distance = sLatentContact.m_distance;
        m_gender = sLatentContact.m_gender;
        m_avatarurl = sLatentContact.m_avatarurl;
        m_signature = sLatentContact.m_signature;
        return *this;
    }

    string m_contactId;
    string m_nickName;
    string m_md5Phone;
    string m_reason;
    int32_t m_distance;
    int32_t m_gender;
    string m_avatarurl;
    string m_signature;

public:
    uint32_t Size() const;
};

inline uint32_t SLatentContact::Size() const
{
    uint32_t nSize = 41;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    nSize += m_md5Phone.length();
    nSize += m_reason.length();
    nSize += m_avatarurl.length();
    nSize += m_signature.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SLatentContact&  sLatentContact );
CPackData& operator>> ( CPackData& cPackData, SLatentContact&  sLatentContact );

struct SFriendRecommendItem
{
public:
    SFriendRecommendItem()
    {
    }

    ~SFriendRecommendItem() { }
    SFriendRecommendItem(const string&  strContactId, const string&  strNickName, const string&  strPhoneMd5, const uint32_t&  dwRelationType, const string&  strReason, const string&  strRecommendIndex, const string&  strAvatar)
    {
        m_contactId = strContactId;
        m_nickName = strNickName;
        m_phoneMd5 = strPhoneMd5;
        m_relationType = dwRelationType;
        m_reason = strReason;
        m_recommendIndex = strRecommendIndex;
        m_avatar = strAvatar;
    }
    SFriendRecommendItem&  operator=( const SFriendRecommendItem&  sFriendRecommendItem )
    {
        m_contactId = sFriendRecommendItem.m_contactId;
        m_nickName = sFriendRecommendItem.m_nickName;
        m_phoneMd5 = sFriendRecommendItem.m_phoneMd5;
        m_relationType = sFriendRecommendItem.m_relationType;
        m_reason = sFriendRecommendItem.m_reason;
        m_recommendIndex = sFriendRecommendItem.m_recommendIndex;
        m_avatar = sFriendRecommendItem.m_avatar;
        return *this;
    }

    string m_contactId;
    string m_nickName;
    string m_phoneMd5;
    uint32_t m_relationType;
    string m_reason;
    string m_recommendIndex;
    string m_avatar;

public:
    uint32_t Size() const;
};

inline uint32_t SFriendRecommendItem::Size() const
{
    uint32_t nSize = 36;
    nSize += m_contactId.length();
    nSize += m_nickName.length();
    nSize += m_phoneMd5.length();
    nSize += m_reason.length();
    nSize += m_recommendIndex.length();
    nSize += m_avatar.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SFriendRecommendItem&  sFriendRecommendItem );
CPackData& operator>> ( CPackData& cPackData, SFriendRecommendItem&  sFriendRecommendItem );

struct SFriendRecommendList
{
public:
    SFriendRecommendList()
    {
    }

    ~SFriendRecommendList() { }
    SFriendRecommendList(const VECTOR< SFriendRecommendItem >&  vecItems)
    {
        m_items = vecItems;
    }
    SFriendRecommendList&  operator=( const SFriendRecommendList&  sFriendRecommendList )
    {
        m_items = sFriendRecommendList.m_items;
        return *this;
    }

    VECTOR< SFriendRecommendItem > m_items;

public:
    uint32_t Size() const;
};

inline uint32_t SFriendRecommendList::Size() const
{
    uint32_t nSize = 7;
    for(uint32_t i = 0; i < m_items.size(); i++)
    {
        nSize += m_items[i].Size();
    }
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SFriendRecommendList&  sFriendRecommendList );
CPackData& operator>> ( CPackData& cPackData, SFriendRecommendList&  sFriendRecommendList );

class CImRspSearchLatentContact : public CPackData
{
public:
    CImRspSearchLatentContact()
    {
    }

    ~CImRspSearchLatentContact() { }
    CImRspSearchLatentContact(const uint32_t&  dwRetcode, const VECTOR< SLatentContact >&  vecContactList)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
    }
    CImRspSearchLatentContact&  operator=( const CImRspSearchLatentContact&  cImRspSearchLatentContact )
    {
        m_retcode = cImRspSearchLatentContact.m_retcode;
        m_contactList = cImRspSearchLatentContact.m_contactList;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SLatentContact >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< SLatentContact >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SLatentContact > m_contactList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspSearchLatentContact::Size() const
{
    uint32_t nSize = 12;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].Size();
    }
    return nSize;
}

class CImReqCheckAuthcode : public CPackData
{
public:
    CImReqCheckAuthcode() : m_mode(0)
    {
    }

    ~CImReqCheckAuthcode() { }
    CImReqCheckAuthcode(const string&  strCheckImgUrl, const string&  strAuthCode, const uint8_t&  chMode= 0)
    {
        m_checkImgUrl = strCheckImgUrl;
        m_authCode = strAuthCode;
        m_mode = chMode;
    }
    CImReqCheckAuthcode&  operator=( const CImReqCheckAuthcode&  cImReqCheckAuthcode )
    {
        m_checkImgUrl = cImReqCheckAuthcode.m_checkImgUrl;
        m_authCode = cImReqCheckAuthcode.m_authCode;
        m_mode = cImReqCheckAuthcode.m_mode;
        return *this;
    }

    const string&  GetCheckImgUrl () const { return m_checkImgUrl; }
    bool SetCheckImgUrl ( const string&  strCheckImgUrl )
    {
        m_checkImgUrl = strCheckImgUrl;
        return true;
    }
    const string&  GetAuthCode () const { return m_authCode; }
    bool SetAuthCode ( const string&  strAuthCode )
    {
        m_authCode = strAuthCode;
        return true;
    }
    const uint8_t&  GetMode () const { return m_mode; }
    bool SetMode ( const uint8_t&  chMode )
    {
        m_mode = chMode;
        return true;
    }
private:
    string m_checkImgUrl;
    string m_authCode;
    uint8_t m_mode;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqCheckAuthcode::Size() const
{
    uint32_t nSize = 13;
    nSize += m_checkImgUrl.length();
    nSize += m_authCode.length();
    return nSize;
}

class CImRspCheckAuthcode : public CPackData
{
public:
    CImRspCheckAuthcode()
    {
    }

    ~CImRspCheckAuthcode() { }
    CImRspCheckAuthcode(const uint8_t&  chRetcode, const string&  strCheckImgUrl, const string&  strAuthCode)
    {
        m_retcode = chRetcode;
        m_checkImgUrl = strCheckImgUrl;
        m_authCode = strAuthCode;
    }
    CImRspCheckAuthcode&  operator=( const CImRspCheckAuthcode&  cImRspCheckAuthcode )
    {
        m_retcode = cImRspCheckAuthcode.m_retcode;
        m_checkImgUrl = cImRspCheckAuthcode.m_checkImgUrl;
        m_authCode = cImRspCheckAuthcode.m_authCode;
        return *this;
    }

    const uint8_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint8_t&  chRetcode )
    {
        m_retcode = chRetcode;
        return true;
    }
    const string&  GetCheckImgUrl () const { return m_checkImgUrl; }
    bool SetCheckImgUrl ( const string&  strCheckImgUrl )
    {
        m_checkImgUrl = strCheckImgUrl;
        return true;
    }
    const string&  GetAuthCode () const { return m_authCode; }
    bool SetAuthCode ( const string&  strAuthCode )
    {
        m_authCode = strAuthCode;
        return true;
    }
private:
    uint8_t m_retcode;
    string m_checkImgUrl;
    string m_authCode;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspCheckAuthcode::Size() const
{
    uint32_t nSize = 13;
    nSize += m_checkImgUrl.length();
    nSize += m_authCode.length();
    return nSize;
}

struct SNotifyPlugin
{
public:
    SNotifyPlugin()
    {
    }

    ~SNotifyPlugin() { }
    SNotifyPlugin(const uint32_t&  dwPluginid, const string&  strItemid, const string&  strUid, const uint32_t&  dwNotifyTime, const uint32_t&  dwExpireTime, const uint32_t&  dwNotifyType, const string&  strTitle, const string&  strImageurl, const string&  strMsgbody, const string&  strDetailurl)
    {
        m_pluginid = dwPluginid;
        m_itemid = strItemid;
        m_uid = strUid;
        m_notifyTime = dwNotifyTime;
        m_expireTime = dwExpireTime;
        m_notifyType = dwNotifyType;
        m_title = strTitle;
        m_imageurl = strImageurl;
        m_msgbody = strMsgbody;
        m_detailurl = strDetailurl;
    }
    SNotifyPlugin&  operator=( const SNotifyPlugin&  sNotifyPlugin )
    {
        m_pluginid = sNotifyPlugin.m_pluginid;
        m_itemid = sNotifyPlugin.m_itemid;
        m_uid = sNotifyPlugin.m_uid;
        m_notifyTime = sNotifyPlugin.m_notifyTime;
        m_expireTime = sNotifyPlugin.m_expireTime;
        m_notifyType = sNotifyPlugin.m_notifyType;
        m_title = sNotifyPlugin.m_title;
        m_imageurl = sNotifyPlugin.m_imageurl;
        m_msgbody = sNotifyPlugin.m_msgbody;
        m_detailurl = sNotifyPlugin.m_detailurl;
        return *this;
    }

    uint32_t m_pluginid;
    string m_itemid;
    string m_uid;
    uint32_t m_notifyTime;
    uint32_t m_expireTime;
    uint32_t m_notifyType;
    string m_title;
    string m_imageurl;
    string m_msgbody;
    string m_detailurl;

public:
    uint32_t Size() const;
};

inline uint32_t SNotifyPlugin::Size() const
{
    uint32_t nSize = 51;
    nSize += m_itemid.length();
    nSize += m_uid.length();
    nSize += m_title.length();
    nSize += m_imageurl.length();
    nSize += m_msgbody.length();
    nSize += m_detailurl.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SNotifyPlugin&  sNotifyPlugin );
CPackData& operator>> ( CPackData& cPackData, SNotifyPlugin&  sNotifyPlugin );

class CImNtfNeedAuthcode : public CPackData
{
public:
    CImNtfNeedAuthcode()
    {
    }

    ~CImNtfNeedAuthcode() { }
    CImNtfNeedAuthcode(const string&  strCheckImgUrl, const string&  strOrigPacket)
    {
        m_checkImgUrl = strCheckImgUrl;
        m_origPacket = strOrigPacket;
    }
    CImNtfNeedAuthcode&  operator=( const CImNtfNeedAuthcode&  cImNtfNeedAuthcode )
    {
        m_checkImgUrl = cImNtfNeedAuthcode.m_checkImgUrl;
        m_origPacket = cImNtfNeedAuthcode.m_origPacket;
        return *this;
    }

    const string&  GetCheckImgUrl () const { return m_checkImgUrl; }
    bool SetCheckImgUrl ( const string&  strCheckImgUrl )
    {
        m_checkImgUrl = strCheckImgUrl;
        return true;
    }
    const string&  GetOrigPacket () const { return m_origPacket; }
    bool SetOrigPacket ( const string&  strOrigPacket )
    {
        m_origPacket = strOrigPacket;
        return true;
    }
private:
    string m_checkImgUrl;
    string m_origPacket;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImNtfNeedAuthcode::Size() const
{
    uint32_t nSize = 11;
    nSize += m_checkImgUrl.length();
    nSize += m_origPacket.length();
    return nSize;
}

class CImReqGetWwGroup : public CPackData
{
public:
    CImReqGetWwGroup()
    {
    }

    ~CImReqGetWwGroup() { }
    CImReqGetWwGroup(const uint32_t&  dwTimestamp)
    {
        m_timestamp = dwTimestamp;
    }
    CImReqGetWwGroup&  operator=( const CImReqGetWwGroup&  cImReqGetWwGroup )
    {
        m_timestamp = cImReqGetWwGroup.m_timestamp;
        return *this;
    }

    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetWwGroup::Size() const
{
    return 6;
}
struct SUserGroup
{
public:
    SUserGroup()
    {
    }

    ~SUserGroup() { }
    SUserGroup(const int64_t&  llGroupId, const int64_t&  llParentId, const string&  strGroupName)
    {
        m_groupId = llGroupId;
        m_parentId = llParentId;
        m_groupName = strGroupName;
    }
    SUserGroup&  operator=( const SUserGroup&  sUserGroup )
    {
        m_groupId = sUserGroup.m_groupId;
        m_parentId = sUserGroup.m_parentId;
        m_groupName = sUserGroup.m_groupName;
        return *this;
    }

    int64_t m_groupId;
    int64_t m_parentId;
    string m_groupName;

public:
    uint32_t Size() const;
};

inline uint32_t SUserGroup::Size() const
{
    uint32_t nSize = 24;
    nSize += m_groupName.length();
    return nSize;
}

CPackData& operator<< ( CPackData& cPackData, const SUserGroup&  sUserGroup );
CPackData& operator>> ( CPackData& cPackData, SUserGroup&  sUserGroup );

class CImRspGetWwGroup : public CPackData
{
public:
    CImRspGetWwGroup()
    {
    }

    ~CImRspGetWwGroup() { }
    CImRspGetWwGroup(const uint32_t&  dwRetcode, const VECTOR< SUserGroup >&  vecGroupList, const uint32_t&  dwTimestamp)
    {
        m_retcode = dwRetcode;
        m_groupList = vecGroupList;
        m_timestamp = dwTimestamp;
    }
    CImRspGetWwGroup&  operator=( const CImRspGetWwGroup&  cImRspGetWwGroup )
    {
        m_retcode = cImRspGetWwGroup.m_retcode;
        m_groupList = cImRspGetWwGroup.m_groupList;
        m_timestamp = cImRspGetWwGroup.m_timestamp;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< SUserGroup >&  GetGroupList () const { return m_groupList; }
    bool SetGroupList ( const VECTOR< SUserGroup >&  vecGroupList )
    {
        m_groupList = vecGroupList;
        return true;
    }
    const uint32_t&  GetTimestamp () const { return m_timestamp; }
    bool SetTimestamp ( const uint32_t&  dwTimestamp )
    {
        m_timestamp = dwTimestamp;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< SUserGroup > m_groupList;
    uint32_t m_timestamp;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetWwGroup::Size() const
{
    uint32_t nSize = 17;
    for(uint32_t i = 0; i < m_groupList.size(); i++)
    {
        nSize += m_groupList[i].Size();
    }
    return nSize;
}

class CImReqChgstatus : public CPackData
{
public:
    CImReqChgstatus()
    {
    }

    ~CImReqChgstatus() { }
    CImReqChgstatus(const uint8_t&  chBasicStatus, const uint8_t&  chPredefStatus)
    {
        m_basicStatus = chBasicStatus;
        m_predefStatus = chPredefStatus;
    }
    CImReqChgstatus&  operator=( const CImReqChgstatus&  cImReqChgstatus )
    {
        m_basicStatus = cImReqChgstatus.m_basicStatus;
        m_predefStatus = cImReqChgstatus.m_predefStatus;
        return *this;
    }

    const uint8_t&  GetBasicStatus () const { return m_basicStatus; }
    bool SetBasicStatus ( const uint8_t&  chBasicStatus )
    {
        m_basicStatus = chBasicStatus;
        return true;
    }
    const uint8_t&  GetPredefStatus () const { return m_predefStatus; }
    bool SetPredefStatus ( const uint8_t&  chPredefStatus )
    {
        m_predefStatus = chPredefStatus;
        return true;
    }
private:
    uint8_t m_basicStatus;
    uint8_t m_predefStatus;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqChgstatus::Size() const
{
    return 5;
}
class CImReqGetContactsFlag : public CPackData
{
public:
    CImReqGetContactsFlag()
    {
    }

    ~CImReqGetContactsFlag() { }
    CImReqGetContactsFlag(const VECTOR< string >&  vecContactList, const uint32_t&  dwType)
    {
        m_contactList = vecContactList;
        m_type = dwType;
    }
    CImReqGetContactsFlag&  operator=( const CImReqGetContactsFlag&  cImReqGetContactsFlag )
    {
        m_contactList = cImReqGetContactsFlag.m_contactList;
        m_type = cImReqGetContactsFlag.m_type;
        return *this;
    }

    const VECTOR< string >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< string >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
    const uint32_t&  GetType () const { return m_type; }
    bool SetType ( const uint32_t&  dwType )
    {
        m_type = dwType;
        return true;
    }
private:
    VECTOR< string > m_contactList;
    uint32_t m_type;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImReqGetContactsFlag::Size() const
{
    uint32_t nSize = 12;
    nSize += m_contactList.size() * 4;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].length();
    }
    return nSize;
}

class CImRspGetContactsFlag : public CPackData
{
public:
    CImRspGetContactsFlag()
    {
    }

    ~CImRspGetContactsFlag() { }
    CImRspGetContactsFlag(const uint32_t&  dwRetcode, const VECTOR< string >&  vecContactList)
    {
        m_retcode = dwRetcode;
        m_contactList = vecContactList;
    }
    CImRspGetContactsFlag&  operator=( const CImRspGetContactsFlag&  cImRspGetContactsFlag )
    {
        m_retcode = cImRspGetContactsFlag.m_retcode;
        m_contactList = cImRspGetContactsFlag.m_contactList;
        return *this;
    }

    const uint32_t&  GetRetcode () const { return m_retcode; }
    bool SetRetcode ( const uint32_t&  dwRetcode )
    {
        m_retcode = dwRetcode;
        return true;
    }
    const VECTOR< string >&  GetContactList () const { return m_contactList; }
    bool SetContactList ( const VECTOR< string >&  vecContactList )
    {
        m_contactList = vecContactList;
        return true;
    }
private:
    uint32_t m_retcode;
    VECTOR< string > m_contactList;

public:
    void PackData(string& strData);
    PACKRETCODE UnpackData(const string& strData);
    uint32_t Size() const;
};

inline uint32_t CImRspGetContactsFlag::Size() const
{
    uint32_t nSize = 12;
    nSize += m_contactList.size() * 4;
    for(uint32_t i = 0; i < m_contactList.size(); i++)
    {
        nSize += m_contactList[i].length();
    }
    return nSize;
}

#endif
