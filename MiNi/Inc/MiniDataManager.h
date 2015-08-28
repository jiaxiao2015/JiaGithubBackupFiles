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
	//初始，未用

	MINI_PROGRESS_REQ,
	//发送请求

	MINI_PROGRESS_RECONNECT,
	//重新连接网络，

	MINI_PROGRESS_CHECKMOBILE,
	//移动推送页
	
	MINI_PROGRESS_RECIEVE_DATA,
	//正在接收数据


	//文件下载消息
	
	MINI_PROGRESS_DOWNLOADING,
	//下载中

	MINI_PROGRESS_DOWNLOAD_FINISH,
	//下载完成

	MINI_PROGRESS_DOWNLOAD_ERROR,
	//下载出错

	MINI_PROGRESS_RECONNECT_ERROR,
	//网络重连失败

	MINI_PROGRESS_NET_DATA_ERROR,
	//网络数据错误

	MINI_PROGRESS_FILE_OPEN_ERROR,
	//文件打开错误

	MINI_PROGRESS_NO_SPACE,
	//空间不足


	//----------------------------------
	MINI_PROGRESS_END
}
MINI_PROGRESS_STATUS;


#endif

#endif