/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : CnasXregFsmSwitchOn.h
  �� �� ��   : ����
  ��    ��   : g00256031
  ��������   : 2015��1��5��
  ����޸�   :
  ��������   : CnasXregFsmSwitchOn.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2015��1��5��
    ��    ��   : g00256031
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __CNAS_XREG_FSM_SWITCH_ON_H__
#define __CNAS_XREG_FSM_SWITCH_ON_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include  "vos.h"
#include  "UsimPsInterface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)

VOS_UINT32  CNAS_XREG_RcvXsdStartReq_SwitchOn_Init(
    VOS_UINT32                          ulEventType,
    struct MsgCB                       *pstMsg
);

VOS_UINT32  CNAS_XREG_RcvCardGetFileCnf_SwitchOn_WaitCardFileCnf(
    VOS_UINT32                          ulEventType,
    struct MsgCB                       *pstMsg
);

VOS_UINT32  CNAS_XREG_RcvTiCardGetFileCnfExpired_SwitchOn_WaitCardFileCnf(
    VOS_UINT32                          ulEventType,
    struct MsgCB                       *pstMsg
);

VOS_VOID    CNAS_XREG_SndCardReadFileReq(USIMM_CUIM_FILEID_ENUM_UINT16 enFileId);

VOS_VOID    CNAS_XREG_ClearWaitCardFilesCnfFlg_SwitchOn_WaitCardFilesCnf(
    VOS_UINT16                          usEfId
);

VOS_VOID CNAS_XREG_ReadNvimInfo_SwitchOn(VOS_VOID);

extern VOS_UINT8 TAF_SDC_GetSimType(VOS_VOID);
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

#endif /* end of CnasXsdFsmSwitchOn.h */
