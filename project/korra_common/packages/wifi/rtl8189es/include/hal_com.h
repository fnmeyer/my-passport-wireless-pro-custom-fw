/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __HAL_COMMON_H__
#define __HAL_COMMON_H__

#include "HalVerDef.h"
#include "hal_pg.h"
#include "hal_phy.h"
#include "hal_phy_reg.h"
#include "hal_com_reg.h"
#include "hal_com_phycfg.h"

/*------------------------------ Tx Desc definition Macro ------------------------*/ 
//#pragma mark -- Tx Desc related definition. --
//----------------------------------------------------------------------------
//-----------------------------------------------------------
//	Rate
//-----------------------------------------------------------
// CCK Rates, TxHT = 0
#define DESC_RATE1M					0x00
#define DESC_RATE2M					0x01
#define DESC_RATE5_5M				0x02
#define DESC_RATE11M				0x03

// OFDM Rates, TxHT = 0
#define DESC_RATE6M					0x04
#define DESC_RATE9M					0x05
#define DESC_RATE12M				0x06
#define DESC_RATE18M				0x07
#define DESC_RATE24M				0x08
#define DESC_RATE36M				0x09
#define DESC_RATE48M				0x0a
#define DESC_RATE54M				0x0b

// MCS Rates, TxHT = 1
#define DESC_RATEMCS0				0x0c
#define DESC_RATEMCS1				0x0d
#define DESC_RATEMCS2				0x0e
#define DESC_RATEMCS3				0x0f
#define DESC_RATEMCS4				0x10
#define DESC_RATEMCS5				0x11
#define DESC_RATEMCS6				0x12
#define DESC_RATEMCS7				0x13
#define DESC_RATEMCS8				0x14
#define DESC_RATEMCS9				0x15
#define DESC_RATEMCS10				0x16
#define DESC_RATEMCS11				0x17
#define DESC_RATEMCS12				0x18
#define DESC_RATEMCS13				0x19
#define DESC_RATEMCS14				0x1a
#define DESC_RATEMCS15				0x1b
#define DESC_RATEMCS16				0x1C
#define DESC_RATEMCS17				0x1D
#define DESC_RATEMCS18				0x1E
#define DESC_RATEMCS19				0x1F
#define DESC_RATEMCS20				0x20
#define DESC_RATEMCS21				0x21
#define DESC_RATEMCS22				0x22
#define DESC_RATEMCS23				0x23
#define DESC_RATEMCS24				0x24
#define DESC_RATEMCS25				0x25
#define DESC_RATEMCS26				0x26
#define DESC_RATEMCS27				0x27
#define DESC_RATEMCS28				0x28
#define DESC_RATEMCS29				0x29
#define DESC_RATEMCS30				0x2A
#define DESC_RATEMCS31				0x2B
#define DESC_RATEVHTSS1MCS0		0x2C
#define DESC_RATEVHTSS1MCS1		0x2D
#define DESC_RATEVHTSS1MCS2		0x2E
#define DESC_RATEVHTSS1MCS3		0x2F
#define DESC_RATEVHTSS1MCS4		0x30
#define DESC_RATEVHTSS1MCS5		0x31
#define DESC_RATEVHTSS1MCS6		0x32
#define DESC_RATEVHTSS1MCS7		0x33
#define DESC_RATEVHTSS1MCS8		0x34
#define DESC_RATEVHTSS1MCS9		0x35
#define DESC_RATEVHTSS2MCS0		0x36
#define DESC_RATEVHTSS2MCS1		0x37
#define DESC_RATEVHTSS2MCS2		0x38
#define DESC_RATEVHTSS2MCS3		0x39
#define DESC_RATEVHTSS2MCS4		0x3A
#define DESC_RATEVHTSS2MCS5		0x3B
#define DESC_RATEVHTSS2MCS6		0x3C
#define DESC_RATEVHTSS2MCS7		0x3D
#define DESC_RATEVHTSS2MCS8		0x3E
#define DESC_RATEVHTSS2MCS9		0x3F
#define DESC_RATEVHTSS3MCS0		0x40
#define DESC_RATEVHTSS3MCS1		0x41
#define DESC_RATEVHTSS3MCS2		0x42
#define DESC_RATEVHTSS3MCS3		0x43
#define DESC_RATEVHTSS3MCS4		0x44
#define DESC_RATEVHTSS3MCS5		0x45
#define DESC_RATEVHTSS3MCS6		0x46
#define DESC_RATEVHTSS3MCS7		0x47
#define DESC_RATEVHTSS3MCS8		0x48
#define DESC_RATEVHTSS3MCS9		0x49
#define DESC_RATEVHTSS4MCS0		0x4A
#define DESC_RATEVHTSS4MCS1		0x4B
#define DESC_RATEVHTSS4MCS2		0x4C
#define DESC_RATEVHTSS4MCS3		0x4D
#define DESC_RATEVHTSS4MCS4		0x4E
#define DESC_RATEVHTSS4MCS5		0x4F
#define DESC_RATEVHTSS4MCS6		0x50
#define DESC_RATEVHTSS4MCS7		0x51
#define DESC_RATEVHTSS4MCS8		0x52
#define DESC_RATEVHTSS4MCS9		0x53

#define HDATA_RATE(rate)\
(rate==DESC_RATE1M)?"CCK_1M":\
(rate==DESC_RATE2M)?"CCK_2M":\
(rate==DESC_RATE5_5M)?"CCK5_5M":\
(rate==DESC_RATE11M)?"CCK_11M":\
(rate==DESC_RATE6M)?"OFDM_6M":\
(rate==DESC_RATE9M)?"OFDM_9M":\
(rate==DESC_RATE12M)?"OFDM_12M":\
(rate==DESC_RATE18M)?"OFDM_18M":\
(rate==DESC_RATE24M)?"OFDM_24M":\
(rate==DESC_RATE36M)?"OFDM_36M":\
(rate==DESC_RATE48M)?"OFDM_48M":\
(rate==DESC_RATE54M)?"OFDM_54M":\
(rate==DESC_RATEMCS0)?"MCS0":\
(rate==DESC_RATEMCS1)?"MCS1":\
(rate==DESC_RATEMCS2)?"MCS2":\
(rate==DESC_RATEMCS3)?"MCS3":\
(rate==DESC_RATEMCS4)?"MCS4":\
(rate==DESC_RATEMCS5)?"MCS5":\
(rate==DESC_RATEMCS6)?"MCS6":\
(rate==DESC_RATEMCS7)?"MCS7":\
(rate==DESC_RATEMCS8)?"MCS8":\
(rate==DESC_RATEMCS9)?"MCS9":\
(rate==DESC_RATEMCS10)?"MCS10":\
(rate==DESC_RATEMCS11)?"MCS11":\
(rate==DESC_RATEMCS12)?"MCS12":\
(rate==DESC_RATEMCS13)?"MCS13":\
(rate==DESC_RATEMCS14)?"MCS14":\
(rate==DESC_RATEMCS15)?"MCS15":\
(rate==DESC_RATEVHTSS1MCS0)?"VHTSS1MCS0":\
(rate==DESC_RATEVHTSS1MCS1)?"VHTSS1MCS1":\
(rate==DESC_RATEVHTSS1MCS2)?"VHTSS1MCS2":\
(rate==DESC_RATEVHTSS1MCS3)?"VHTSS1MCS3":\
(rate==DESC_RATEVHTSS1MCS4)?"VHTSS1MCS4":\
(rate==DESC_RATEVHTSS1MCS5)?"VHTSS1MCS5":\
(rate==DESC_RATEVHTSS1MCS6)?"VHTSS1MCS6":\
(rate==DESC_RATEVHTSS1MCS7)?"VHTSS1MCS7":\
(rate==DESC_RATEVHTSS1MCS8)?"VHTSS1MCS8":\
(rate==DESC_RATEVHTSS1MCS9)?"VHTSS1MCS9":\
(rate==DESC_RATEVHTSS2MCS0)?"VHTSS2MCS0":\
(rate==DESC_RATEVHTSS2MCS1)?"VHTSS2MCS1":\
(rate==DESC_RATEVHTSS2MCS2)?"VHTSS2MCS2":\
(rate==DESC_RATEVHTSS2MCS3)?"VHTSS2MCS3":\
(rate==DESC_RATEVHTSS2MCS4)?"VHTSS2MCS4":\
(rate==DESC_RATEVHTSS2MCS5)?"VHTSS2MCS5":\
(rate==DESC_RATEVHTSS2MCS6)?"VHTSS2MCS6":\
(rate==DESC_RATEVHTSS2MCS7)?"VHTSS2MCS7":\
(rate==DESC_RATEVHTSS2MCS8)?"VHTSS2MCS8":\
(rate==DESC_RATEVHTSS2MCS9)?"VHTSS2MCS9":"UNKNOW"


enum{
	UP_LINK,
	DOWN_LINK,	
};
typedef enum _RT_MEDIA_STATUS {
	RT_MEDIA_DISCONNECT = 0,
	RT_MEDIA_CONNECT       = 1
} RT_MEDIA_STATUS;

#define MAX_DLFW_PAGE_SIZE			4096	// @ page : 4k bytes
typedef enum _FIRMWARE_SOURCE {
	FW_SOURCE_IMG_FILE = 0,
	FW_SOURCE_HEADER_FILE = 1,		//from header file
} FIRMWARE_SOURCE, *PFIRMWARE_SOURCE;

//
// Queue Select Value in TxDesc
//
#define QSLT_BK							0x2//0x01
#define QSLT_BE							0x0
#define QSLT_VI							0x5//0x4
#define QSLT_VO							0x7//0x6
#define QSLT_BEACON						0x10
#define QSLT_HIGH						0x11
#define QSLT_MGNT						0x12
#define QSLT_CMD						0x13

// BK, BE, VI, VO, HCCA, MANAGEMENT, COMMAND, HIGH, BEACON.
//#define MAX_TX_QUEUE		9

#define TX_SELE_HQ			BIT(0)		// High Queue
#define TX_SELE_LQ			BIT(1)		// Low Queue
#define TX_SELE_NQ			BIT(2)		// Normal Queue
#define TX_SELE_EQ			BIT(3)		// Extern Queue

#define PageNum_128(_Len)		(u32)(((_Len)>>7) + ((_Len)&0x7F ? 1:0))
#define PageNum_256(_Len)		(u32)(((_Len)>>8) + ((_Len)&0xFF ? 1:0))
#define PageNum_512(_Len)		(u32)(((_Len)>>9) + ((_Len)&0x1FF ? 1:0))
#define PageNum(_Len, _Size)		(u32)(((_Len)/(_Size)) + ((_Len)&((_Size) - 1) ? 1:0))


u8 rtw_hal_data_init(_adapter *padapter);
void rtw_hal_data_deinit(_adapter *padapter);

void dump_chip_info(HAL_VERSION	ChipVersion);

u8	//return the final channel plan decision
hal_com_config_channel_plan(
	IN	PADAPTER	padapter,
	IN	u8			hw_channel_plan,	//channel plan from HW (efuse/eeprom)
	IN	u8			sw_channel_plan,	//channel plan from SW (registry/module param)
	IN	u8			def_channel_plan,	//channel plan used when the former two is invalid
	IN	BOOLEAN		AutoLoadFail
	);

BOOLEAN
HAL_IsLegalChannel(
	IN	PADAPTER	Adapter,
	IN	u32			Channel
	);

u8	MRateToHwRate(u8 rate);

u8	HwRateToMRate(u8 rate);

void	HalSetBrateCfg(
	IN PADAPTER		Adapter,
	IN u8			*mBratesOS,
	OUT u16			*pBrateCfg);

BOOLEAN
Hal_MappingOutPipe(
	IN	PADAPTER	pAdapter,
	IN	u8		NumOutPipe
	);

void hal_init_macaddr(_adapter *adapter);

void rtw_init_hal_com_default_value(PADAPTER Adapter);

void c2h_evt_clear(_adapter *adapter);
s32 c2h_evt_read(_adapter *adapter, u8 *buf);
s32 c2h_evt_read_88xx(_adapter *adapter, u8 *buf);

u8  rtw_hal_networktype_to_raid(_adapter *adapter, struct sta_info *psta);
u8 rtw_get_mgntframe_raid(_adapter *adapter,unsigned char network_type);
void rtw_hal_update_sta_rate_mask(PADAPTER padapter, struct sta_info *psta);

void hw_var_port_switch(_adapter *adapter);

void SetHwReg(PADAPTER padapter, u8 variable, u8 *val);
void GetHwReg(PADAPTER padapter, u8 variable, u8 *val);
void rtw_hal_check_rxfifo_full(_adapter *adapter);

u8 SetHalDefVar(_adapter *adapter, HAL_DEF_VARIABLE variable, void *value);
u8 GetHalDefVar(_adapter *adapter, HAL_DEF_VARIABLE variable, void *value);

BOOLEAN 
eqNByte(
	u8*	str1,
	u8*	str2,
	u32	num
	);

BOOLEAN 
IsHexDigit(
	IN	char	chTmp
	);

u32
MapCharToHexDigit(
	IN	char	chTmp
);

BOOLEAN 
GetHexValueFromString(
	IN		char*			szStr,
	IN OUT	u32*			pu4bVal,
	IN OUT	u32*			pu4bMove
	);

BOOLEAN 
GetFractionValueFromString(
	IN		char*		szStr,
	IN OUT	u8*			pInteger,
	IN OUT	u8*			pFraction,
	IN OUT	u32*		pu4bMove
	);

BOOLEAN
IsCommentString(
	IN		char*		szStr
	);

BOOLEAN 
ParseQualifiedString(
    IN	char* In, 
    IN OUT  u32* Start, 
    OUT	char* Out, 
    IN	char  LeftQualifier, 
    IN	char  RightQualifier
    );

BOOLEAN
GetU1ByteIntegerFromStringInDecimal(
	IN		char* Str,
	IN OUT	u8* pInt
	);

BOOLEAN
isAllSpaceOrTab(
	u8*	data,
	u8	size
	);

void linked_info_dump(_adapter *padapter,u8 benable);
#ifdef DBG_RX_SIGNAL_DISPLAY_RAW_DATA
void rtw_get_raw_rssi_info(void *sel, _adapter *padapter);
void rtw_store_phy_info(_adapter *padapter, union recv_frame *prframe);
void rtw_dump_raw_rssi_info(_adapter *padapter);
#endif

#define		HWSET_MAX_SIZE			512
#ifdef CONFIG_EFUSE_CONFIG_FILE
#define		EFUSE_FILE_COLUMN_NUM		16
u32 Hal_readPGDataFromConfigFile(PADAPTER padapter, struct file *fp);
void Hal_ReadMACAddrFromFile(PADAPTER padapter, struct file *fp);
void Hal_GetPhyEfuseMACAddr(PADAPTER padapter, u8* mac_addr);
int check_phy_efuse_tx_power_info_valid(PADAPTER padapter);
int check_phy_efuse_macaddr_info_valid(PADAPTER padapter);
#endif //CONFIG_EFUSE_CONFIG_FILE

#ifdef CONFIG_RF_GAIN_OFFSET
void rtw_bb_rf_gain_offset(_adapter *padapter);
#endif //CONFIG_RF_GAIN_OFFSET

void dm_DynamicUsbTxAgg(_adapter *padapter, u8 from_timer);
u8 rtw_hal_busagg_qsel_check(_adapter *padapter,u8 pre_qsel,u8 next_qsel);
void GetHalODMVar(	
	PADAPTER				Adapter,
	HAL_ODM_VARIABLE		eVariable,
	PVOID					pValue1,
	PVOID					pValue2);
void SetHalODMVar(
	PADAPTER				Adapter,
	HAL_ODM_VARIABLE		eVariable,
	PVOID					pValue1,
	BOOLEAN					bSet);

#ifdef CONFIG_BACKGROUND_NOISE_MONITOR
struct noise_info
{
	u8 		bPauseDIG;
	u8 		IGIValue;
	u32 	max_time;//ms	
	u8		chan;
};
#endif

void rtw_hal_set_fw_rsvd_page(_adapter* adapter, bool finished);

#ifdef CONFIG_GPIO_API
u8 rtw_hal_get_gpio(_adapter* adapter, u8 gpio_num);
int rtw_hal_set_gpio_output_value(_adapter* adapter, u8 gpio_num, BOOLEAN isHigh);
int rtw_hal_config_gpio(_adapter* adapter, u8 gpio_num, BOOLEAN isOutput);
#endif

#ifdef CONFIG_LOAD_PHY_PARA_FROM_FILE
extern char *rtw_phy_file_path;
extern char file_path[PATH_LENGTH_MAX];
#define GetLineFromBuffer(buffer)   strsep(&buffer, "\n")
#endif

typedef enum _HAL_PHYDM_OPS {
	HAL_PHYDM_DIS_ALL_FUNC,
	HAL_PHYDM_FUNC_SET,
	HAL_PHYDM_FUNC_CLR,
	HAL_PHYDM_ABILITY_BK,
	HAL_PHYDM_ABILITY_RESTORE,
	HAL_PHYDM_ABILITY_SET,
	HAL_PHYDM_ABILITY_GET,
} HAL_PHYDM_OPS;


#define DYNAMIC_FUNC_DISABLE		(0x0)
u32 rtw_phydm_ability_ops(_adapter *adapter, HAL_PHYDM_OPS ops, u32 ability);

#define rtw_phydm_func_disable_all(adapter)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_DIS_ALL_FUNC, 0)

#define rtw_phydm_func_for_offchannel(adapter) \
	do { \
		rtw_phydm_ability_ops(adapter, HAL_PHYDM_DIS_ALL_FUNC, 0); \
		if (rtw_odm_adaptivity_needed(adapter)) \
			rtw_phydm_ability_ops(adapter, HAL_PHYDM_FUNC_SET, ODM_BB_ADAPTIVITY); \
	} while (0)

#define rtw_phydm_func_set(adapter, ability)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_FUNC_SET, ability)

#define rtw_phydm_func_clr(adapter, ability)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_FUNC_CLR, ability)

#define rtw_phydm_ability_backup(adapter)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_ABILITY_BK, 0)

#define rtw_phydm_ability_restore(adapter)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_ABILITY_RESTORE, 0)

#define rtw_phydm_ability_set(adapter, ability)	\
	rtw_phydm_ability_ops(adapter, HAL_PHYDM_ABILITY_SET, ability)

static inline u32 rtw_phydm_ability_get(_adapter *adapter)
{
	return rtw_phydm_ability_ops(adapter, HAL_PHYDM_ABILITY_GET, 0);
}

#endif //__HAL_COMMON_H__

