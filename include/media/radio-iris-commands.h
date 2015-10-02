#ifndef __RADIO_IRIS_COMMANDS_H
#define __RADIO_IRIS_COMMANDS_H

//<2014/2/7-A000000033599-williamhu,[F[All][Main][App][] FP17909 FM Radio solution]  _begin
#ifdef __KERNEL__
#include <linux/skbuff.h>
#include <linux/interrupt.h>
#include <linux/mutex.h>
#include <linux/atomic.h>
#endif

enum v4l2_cid_private_iris_t {
	V4L2_CID_PRIVATE_IRIS_SRCHMODE = (0x08000000 + 1),
	V4L2_CID_PRIVATE_IRIS_SCANDWELL,
	V4L2_CID_PRIVATE_IRIS_SRCHON,
	V4L2_CID_PRIVATE_IRIS_STATE,
	V4L2_CID_PRIVATE_IRIS_TRANSMIT_MODE,
	V4L2_CID_PRIVATE_IRIS_RDSGROUP_MASK,
	V4L2_CID_PRIVATE_IRIS_REGION,
	V4L2_CID_PRIVATE_IRIS_SIGNAL_TH,
	V4L2_CID_PRIVATE_IRIS_SRCH_PTY,
	V4L2_CID_PRIVATE_IRIS_SRCH_PI,
	V4L2_CID_PRIVATE_IRIS_SRCH_CNT,
	V4L2_CID_PRIVATE_IRIS_EMPHASIS,
	V4L2_CID_PRIVATE_IRIS_RDS_STD,
	V4L2_CID_PRIVATE_IRIS_SPACING,
	V4L2_CID_PRIVATE_IRIS_RDSON,
	V4L2_CID_PRIVATE_IRIS_RDSGROUP_PROC,
	V4L2_CID_PRIVATE_IRIS_LP_MODE,
	V4L2_CID_PRIVATE_IRIS_ANTENNA,
	V4L2_CID_PRIVATE_IRIS_RDSD_BUF,
	V4L2_CID_PRIVATE_IRIS_PSALL,  /*0x8000014*/

	/*v4l2 Tx controls*/
	V4L2_CID_PRIVATE_IRIS_TX_SETPSREPEATCOUNT,
	V4L2_CID_PRIVATE_IRIS_STOP_RDS_TX_PS_NAME,
	V4L2_CID_PRIVATE_IRIS_STOP_RDS_TX_RT,
	V4L2_CID_PRIVATE_IRIS_IOVERC,
	V4L2_CID_PRIVATE_IRIS_INTDET,
	V4L2_CID_PRIVATE_IRIS_MPX_DCC,
	V4L2_CID_PRIVATE_IRIS_AF_JUMP,
	V4L2_CID_PRIVATE_IRIS_RSSI_DELTA,
	V4L2_CID_PRIVATE_IRIS_HLSI, /*0x800001d*/

	/*Diagnostic commands*/
	V4L2_CID_PRIVATE_IRIS_SOFT_MUTE,
	V4L2_CID_PRIVATE_IRIS_RIVA_ACCS_ADDR,
	V4L2_CID_PRIVATE_IRIS_RIVA_ACCS_LEN,
	V4L2_CID_PRIVATE_IRIS_RIVA_PEEK,
	V4L2_CID_PRIVATE_IRIS_RIVA_POKE,
	V4L2_CID_PRIVATE_IRIS_SSBI_ACCS_ADDR,
	V4L2_CID_PRIVATE_IRIS_SSBI_PEEK,
	V4L2_CID_PRIVATE_IRIS_SSBI_POKE,
	V4L2_CID_PRIVATE_IRIS_TX_TONE,
	V4L2_CID_PRIVATE_IRIS_RDS_GRP_COUNTERS,
	V4L2_CID_PRIVATE_IRIS_SET_NOTCH_FILTER, /* 0x8000028 */
	V4L2_CID_PRIVATE_IRIS_SET_AUDIO_PATH, /* TAVARUA specific command */
	V4L2_CID_PRIVATE_IRIS_DO_CALIBRATION,
	V4L2_CID_PRIVATE_IRIS_SRCH_ALGORITHM, /* TAVARUA specific command */
	V4L2_CID_PRIVATE_IRIS_GET_SINR,
	V4L2_CID_PRIVATE_INTF_LOW_THRESHOLD,
	V4L2_CID_PRIVATE_INTF_HIGH_THRESHOLD,
	V4L2_CID_PRIVATE_SINR_THRESHOLD,
	V4L2_CID_PRIVATE_SINR_SAMPLES,
	V4L2_CID_PRIVATE_SPUR_FREQ,
	V4L2_CID_PRIVATE_SPUR_FREQ_RMSSI,
	V4L2_CID_PRIVATE_SPUR_SELECTION,
	V4L2_CID_PRIVATE_UPDATE_SPUR_TABLE,
	V4L2_CID_PRIVATE_VALID_CHANNEL,
	V4L2_CID_PRIVATE_AF_RMSSI_TH,
	V4L2_CID_PRIVATE_AF_RMSSI_SAMPLES,
	V4L2_CID_PRIVATE_GOOD_CH_RMSSI_TH,
	V4L2_CID_PRIVATE_SRCHALGOTYPE,
	V4L2_CID_PRIVATE_CF0TH12,
	V4L2_CID_PRIVATE_SINRFIRSTSTAGE,
	V4L2_CID_PRIVATE_RMSSIFIRSTSTAGE,
	V4L2_CID_PRIVATE_RXREPEATCOUNT,

	/*using private CIDs under userclass*/
	V4L2_CID_PRIVATE_IRIS_READ_DEFAULT = 0x00980928,
	V4L2_CID_PRIVATE_IRIS_WRITE_DEFAULT,
	V4L2_CID_PRIVATE_IRIS_SET_CALIBRATION,
};

enum iris_evt_t {
	IRIS_EVT_RADIO_READY,
	IRIS_EVT_TUNE_SUCC,
	IRIS_EVT_SEEK_COMPLETE,
	IRIS_EVT_SCAN_NEXT,
	IRIS_EVT_NEW_RAW_RDS,
	IRIS_EVT_NEW_RT_RDS,
	IRIS_EVT_NEW_PS_RDS,
	IRIS_EVT_ERROR,
	IRIS_EVT_BELOW_TH,
	IRIS_EVT_ABOVE_TH,
	IRIS_EVT_STEREO,
	IRIS_EVT_MONO,
	IRIS_EVT_RDS_AVAIL,
	IRIS_EVT_RDS_NOT_AVAIL,
	IRIS_EVT_NEW_SRCH_LIST,
	IRIS_EVT_NEW_AF_LIST,
	IRIS_EVT_TXRDSDAT,
	IRIS_EVT_TXRDSDONE,
	IRIS_EVT_RADIO_DISABLED,
	IRIS_EVT_NEW_ODA,
	IRIS_EVT_NEW_RT_PLUS,
	IRIS_EVT_NEW_ERT,
};
#endif /* __RADIO_IRIS_COMMANDS_H */
