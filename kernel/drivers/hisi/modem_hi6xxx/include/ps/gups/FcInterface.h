/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : FcInterface.h
  �� �� ��   : ����
  ��    ��   : g45205
  ��������   : 2011��12��2��
  ����޸�   :
  ��������   : FcInterface.h ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��12��2��
    ��    ��   : g45205
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __FCINTERFACE_H__
#define __FCINTERFACE_H__


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include  "vos.h"
#include  "PsTypeDef.h"
#include  "TtfNvInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/* ���ز������룬��Ӧλ���ã���ʾĳ�ֲ��� */
#define FC_POLICY_MASK_MEM              ( ((VOS_UINT32)1) << FC_POLICY_ID_MEM )
#define FC_POLICY_MASK_CPU_A            ( ((VOS_UINT32)1) << FC_POLICY_ID_CPU_A )
#define FC_POLICY_MASK_CDS              ( ((VOS_UINT32)1) << FC_POLICY_ID_CDS )
#define FC_POLICY_MASK_CST              ( ((VOS_UINT32)1) << FC_POLICY_ID_CST )
#define FC_POLICY_MASK_GPRS             ( ((VOS_UINT32)1) << FC_POLICY_ID_GPRS )
#define FC_POLICY_MASK_TMP              ( ((VOS_UINT32)1) << FC_POLICY_ID_TMP )
#define FC_POLICY_MASK_CPU_C            ( ((VOS_UINT32)1) << FC_POLICY_ID_CPU_C)


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*====================================*/ /* ���ز���ID */
enum FC_POLICY_ID_ENUM
{
    FC_POLICY_ID_MEM                    = 0,
    FC_POLICY_ID_CPU_A,
    FC_POLICY_ID_CDS,
    FC_POLICY_ID_CST,
    FC_POLICY_ID_GPRS,
    FC_POLICY_ID_TMP,
    FC_POLICY_ID_CPU_C,
    FC_POLICY_ID_BUTT
};
typedef VOS_UINT8 FC_POLICY_ID_ENUM_UINT8;


/*====================================*/ /* �������ȼ����� */
/* �������ȼ����壬��ֵԽ�����ȼ�Խ�ߣ�Խ������ */
enum FC_PRI_ENUM
{
    FC_PRI_NULL                             = 0,                                /* �����ڲ�����ʹ�ã��ⲿ��ʹ�� */
    FC_PRI_1,
    FC_PRI_2,
    FC_PRI_3,
    FC_PRI_4,
    FC_PRI_5,
    FC_PRI_6,
    FC_PRI_7,
    FC_PRI_8,
    FC_PRI_9,
    FC_PRI_BUTT
};
typedef VOS_UINT8  FC_PRI_ENUM_UINT8;


/*====================================*/ /* ���ص㶨�� */
enum FC_ID_ENUM
{
    FC_ID_BRIDGE_FORWARD_DISACRD    = 0,/* ���ţ�E5ʹ��*/
    FC_ID_USB_ETH,                      /* USB������E5ʹ��*/
    FC_ID_WIFI_ETH,                     /* WIFI������E5ʹ��*/
    FC_ID_NIC_1,                        /* NDIS����1��������ͬ */
    FC_ID_NIC_2,
    FC_ID_NIC_3,
    FC_ID_NIC_4,
    FC_ID_NIC_5,
    FC_ID_NIC_6,
    FC_ID_NIC_7,
    FC_ID_NIC_8,
    FC_ID_NIC_9,
    FC_ID_NIC_10,
    FC_ID_NIC_11,
    FC_ID_MODEM,                        /* Modem */
    FC_ID_DIPC_1,                       /* DIPCʹ��ͨ������Ӧ�豸ΪUDI_ACM_HSIC_ACM1_ID */
    FC_ID_DIPC_2,                       /* DIPCʹ��ͨ������Ӧ�豸ΪUDI_ACM_HSIC_ACM3_ID */
    FC_ID_DIPC_3,                       /* DIPCʹ��ͨ������Ӧ�豸ΪUDI_ACM_HSIC_ACM5_ID */
    FC_ID_UL_RATE_1_FOR_CPU,            /* C��CPU����ʹ�õ��������ʿ��ƣ�����ͬ */
    FC_ID_UL_RATE_2_FOR_CPU,
    FC_ID_UL_RATE_3_FOR_CPU,
    FC_ID_UL_RATE_4_FOR_CPU,
    FC_ID_UL_RATE_5_FOR_CPU,
    FC_ID_UL_RATE_6_FOR_CPU,
    FC_ID_UL_RATE_7_FOR_CPU,
    FC_ID_UL_RATE_8_FOR_CPU,
    FC_ID_UL_RATE_9_FOR_CPU,
    FC_ID_UL_RATE_10_FOR_CPU,
    FC_ID_UL_RATE_11_FOR_CPU,
    FC_ID_UL_RATE_1_FOR_TMP,            /* C���±�����ʹ�õ��������ʿ��ƣ�����ͬ */
    FC_ID_UL_RATE_2_FOR_TMP,
    FC_ID_UL_RATE_3_FOR_TMP,
    FC_ID_UL_RATE_4_FOR_TMP,
    FC_ID_UL_RATE_5_FOR_TMP,
    FC_ID_UL_RATE_6_FOR_TMP,
    FC_ID_UL_RATE_7_FOR_TMP,
    FC_ID_UL_RATE_8_FOR_TMP,
    FC_ID_UL_RATE_9_FOR_TMP,
    FC_ID_UL_RATE_10_FOR_TMP,
    FC_ID_UL_RATE_11_FOR_TMP,
    FC_ID_BUTT
};
typedef VOS_UINT8  FC_ID_ENUM_UINT8;


/*====================================*/ /* �ڴ�����ʹ�õ����ȼ� */
#define FC_PRI_FOR_MEM_LEV_1                    (FC_PRI_1)
#define FC_PRI_FOR_MEM_LEV_2                    (FC_PRI_2)
#define FC_PRI_FOR_MEM_LEV_3                    (FC_PRI_3)
#define FC_PRI_FOR_MEM_LEV_4                    (FC_PRI_4)

/* �������ص����ȼ� */
#define FC_PRI_FOR_BRIDGE_FORWARD_DISCARD       (FC_PRI_FOR_MEM_LEV_1)

/* LTE PDN/GU QoSʹ�õ����ȼ� */
#define FC_PRI_FOR_PDN_LOWEST                   (FC_PRI_FOR_MEM_LEV_2)
#define FC_PRI_FOR_PDN_NONGBR                   (FC_PRI_FOR_MEM_LEV_3)
#define FC_PRI_FOR_PDN_GBR                      (FC_PRI_FOR_MEM_LEV_4)


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/
/* ���غͽ�����غ��� */
typedef VOS_UINT32 (*FC_SET_FUNC)(VOS_UINT32 ulParam1, VOS_UINT32 ulParam2);
typedef VOS_UINT32 (*FC_CLR_FUNC)(VOS_UINT32 ulParam1, VOS_UINT32 ulParam2);
typedef VOS_UINT32 (*FC_RST_FUNC)(VOS_UINT32 ulParam1, VOS_UINT32 ulParam2);


typedef struct
{
    MODEM_ID_ENUM_UINT16                enModemId;  /* _H2ASN_Replace VOS_UINT16  enModemId; */
    FC_POLICY_ID_ENUM_UINT8             enPolicyId; /* �����ص�Ӱ�쵽�����ز��� */
    FC_ID_ENUM_UINT8                    enFcId;
    FC_PRI_ENUM_UINT8                   enFcPri;    /* �����ص��ڸ����ز���������ȼ� */
    VOS_UINT8                           aucRsv[3];
    VOS_UINT32                          ulParam1;   /* ���������ص�ʹ�ã��������غͽ�����غ���ʱ����Ϊ������� */
    VOS_UINT32                          ulParam2;   /* ���������ص�ʹ�ã��������غͽ�����غ���ʱ����Ϊ������� */
    FC_SET_FUNC                         pSetFunc;   /* ���غ��� */  /* _H2ASN_Replace VOS_UINT32  pSetFunc; */
    FC_CLR_FUNC                         pClrFunc;   /* �����غ��� */ /* _H2ASN_Replace VOS_UINT32  pClrFunc; */
    FC_RST_FUNC                         pRstFunc;   /* �����ĸ�λ������ָ��ӿ� */ /* _H2ASN_Replace VOS_UINT32  pRstFunc; */
} FC_REG_POINT_STRU;



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
extern VOS_UINT32  FC_RegPoint
(
    FC_REG_POINT_STRU                  *pstFcRegPoint
);

extern VOS_UINT32  FC_DeRegPoint
(
    FC_ID_ENUM_UINT8                   enFcId,
    MODEM_ID_ENUM_UINT16                enModemId
);

extern VOS_UINT32  FC_ChangePoint
(
    FC_ID_ENUM_UINT8                   enFcId,
    FC_POLICY_ID_ENUM_UINT8             enPolicyId,
    FC_PRI_ENUM_UINT8                  enPri,
    MODEM_ID_ENUM_UINT16                enModemId
);

extern VOS_VOID FC_ChannelMapCreate (
    FC_ID_ENUM_UINT8                   enFcId,
    VOS_UINT8                           ucRabId,
    MODEM_ID_ENUM_UINT16                enModemId
);

extern VOS_VOID FC_ChannelMapDelete (
    VOS_UINT8                           ucRabId,
    MODEM_ID_ENUM_UINT16                enModemId
);


typedef VOS_UINT32 (*FC_ACORE_DRV_ASSEMBLE_PARA_FUNC)(FC_DRV_ASSEM_PARA_STRU *pstFcDrvAssemPara);

extern VOS_UINT32 FC_ACORE_RegDrvAssemFunc
(
    FC_ACORE_DRV_ASSEMBLE_PARA_FUNC pFcDrvSetAssemParaFuncUe,
    FC_ACORE_DRV_ASSEMBLE_PARA_FUNC pFcDrvSetAssemParaFuncPc
);



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

#endif /* end of FcInterface.h */
