#pragma once


//���������
class CNetMgr
{
public:
    CNetMgr();
    virtual ~CNetMgr();

public:
    bool        Init        ();         //��ʼ�����������

};

CNetMgr &NetMgr();



