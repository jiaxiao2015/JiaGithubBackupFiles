#if 1//def __SKY_TEST_SWITCH

#ifndef _MINIDATAMANAGER_H_
#define _MINIDATAMANAGER_H_

#include "GlobalDefs.h"

typedef struct
{
	BOOL     	iIsHttpHead;
	BOOL     	iIsReConnect;
	BOOL     	iIsUsing;
	U16       	iDir[128];
	U16       	iFileName[128];
	U16	      	iExtName[32];     
	U16       	iUrl[256];

	U32       	iTotalSize;			// Bytes
	U32       	iCurSize;				//Bytes
	
	U8        	iReConTimes;

	U16 		iBlockSize;
	U16		iRecvSizePerReq;
	
	//Sky 2009-05-18
	int		iStartPos;
	int		iEndPos;
	
	FS_HANDLE iFileHandle;
}TYPE_DOWNLOAD_MANAGE;

//By SKy
typedef enum
{
	MINI_PROGRESS_START=0,
	//----------------------------------

	MINI_PROGRESS_INIT,
	//��ʼ��δ��

	MINI_PROGRESS_REQ,
	//��������

	MINI_PROGRESS_RECONNECT,
	//�����������磬

	MINI_PROGRESS_CHECKMOBILE,
	//�ƶ�����ҳ
	
	MINI_PROGRESS_RECIEVE_DATA,
	//���ڽ�������


	//�ļ�������Ϣ
	
	MINI_PROGRESS_DOWNLOADING,
	//������

	MINI_PROGRESS_DOWNLOAD_FINISH,
	//�������

	MINI_PROGRESS_DOWNLOAD_ERROR,
	//���س���

	MINI_PROGRESS_RECONNECT_ERROR,
	//��������ʧ��

	MINI_PROGRESS_NET_DATA_ERROR,
	//�������ݴ���

	MINI_PROGRESS_FILE_OPEN_ERROR,
	//�ļ��򿪴���

	MINI_PROGRESS_NO_SPACE,
	//�ռ䲻��


	//----------------------------------
	MINI_PROGRESS_END
}
MINI_PROGRESS_STATUS;


#endif

#endif