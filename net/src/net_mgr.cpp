#include "net.h"


CNetMgr &NetMgr()
{
    //��ʵ��windows�µģ������ٿ��ǹ���
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
