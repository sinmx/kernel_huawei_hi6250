/******************************************************************************

                  版权所有 (C), 2014, 华为技术有限公司
 *****************************************************************************
  文 件 名   : BST_DRV_Acom.h
  版 本 号   : 初稿
  作    者   : d00173029
  生成日期   : 2014年4月16日
  最近修改   :
  功能描述   : 定义AP通信口驱动接口
  函数列表   :

  修改历史   :
  1.日    期   : 2014年07月3日
    作    者   : d00173029
    修改内容   : 创建文件

******************************************************************************/
#ifndef __BST_DRV_ACOMM_H__
#define __BST_DRV_ACOMM_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#if (BST_OS_VER == BST_HISI_VOS)
#pragma pack(4)
#elif(BST_OS_VER == BST_WIN32)
#pragma pack(push, 4)
#endif

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "BST_Platform.h"
#include "BST_DRV_Common.h"
#include "BST_PAL_Acom.h"

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define BST_DRV_ACOM_Send               BST_Pal_DrvAcomSend
#define BST_DRV_ACOM_Recv               BST_Pal_DrvAcomRecv
#define BST_DRV_AcomGetDvcHandle()      ( &g_BstDrvAcomHandle )
/*****************************************************************************
  3 Massage Declare
*****************************************************************************/

/*****************************************************************************
  4 枚举定义
*****************************************************************************/

/*****************************************************************************
  5 类/结构定义
*****************************************************************************/

/*****************************************************************************
  6 UNION定义
*****************************************************************************/

/*****************************************************************************
  7 全局变量声明
*****************************************************************************/
extern BST_DRV_STRU g_BstDrvAcomHandle;
/*****************************************************************************
  8 函数声明
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


#if (BST_OS_VER == BST_HISI_VOS)
#pragma pack()
#elif(BST_OS_VER == BST_WIN32)
#pragma pack(pop)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif


#endif
