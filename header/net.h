#pragma once


//网络管理器
class CNetMgr
{
public:
    CNetMgr();
    virtual ~CNetMgr();

public:
    bool        Init        ();         //初始化网络管理器

};

CNetMgr &NetMgr();



