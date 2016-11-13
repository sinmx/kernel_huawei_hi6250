/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : TafApsSndDhcp.h
  版 本 号   : 初稿
  作    者   : y00314741
  生成日期   : 2015年05月08日
  最近修改   :
  功能描述   : TafApsSndDhcp.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年05月22日
    作    者   : y00314741
    修改内容   : 创建文件

******************************************************************************/

#ifndef __TAFAPSSNDDHCP_H__
#define __TAFAPSSNDDHCP_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include  "vos.h"
#include  "taf_aps_dhcp_pif.h"



#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)

VOS_VOID TAF_APS_SndDhcpDnsIpv4Req(
    VOS_UINT8                           ucPdpId
);

VOS_VOID TAF_APS_SndDhcpDnsIpv6Req(
    VOS_UINT8                           ucPdpId
);

VOS_VOID TAF_APS_SndDhcpDeactInd(
    VOS_UINT8                           ucPdpId
);

#endif

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif

