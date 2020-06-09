#include "net.h"


CNetMgr &NetMgr()
{
    //先实现windows下的，后续再考虑工厂
    static CNetMgr mgr;
    return mgr;
}

CNetMgr::CNetMgr()
{

}

CNetMgr::~CNetMgr()
{

}

bool CNetMgr::Init()
{
    return true;
}
