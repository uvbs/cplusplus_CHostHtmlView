#ifndef _STATUS_CODE_H__
#define _STATUS_CODE_H__

enum StatusCode {
	LOG_TRACE                 = 0,

	OPEN_SUCCESS              = 101,
	OPEN_FAILE                = 102,

	LOG_SUCCESS               = 200,
	TASK_WORKING              = 201,
	TASK_SUCCESS              = 202,

	LOG_FAILE                 = 401,	
	TASK_FAILE                = 402,	
	WAIT_VCODE                = 4010,
	LOG_FAILE_VCODEERR        = 40101,
	WAIT_OCR                  = 5010,
	LOG_FAILE_FOCRERR         = 50101,
	LOG_FAILE_AUTOLOGOUT      = 50102,
	LOG_FAILE_PFOCRERR        = 50103,

	WAIT_PHONENUM             = 4011,
	LOG_FAILE_PHONENUMERR     = 40111,

	LOG_FAILE_USERNAME_PWD_ERR= 4012,
	LOG_FAILE_PASSWORDERR     = 4013, 
	LOG_FAILE_MAXLOGINFAIL    = 4014,
	LOG_FAILE_WAIT_ACTIVE     = 4015,
	LOG_FAILE_OCR             = 4016,
	LOG_FAILE_INPUT_OCR       = 40161,
	WAIT_TOKEN_CODE			  = 4017,
	LOG_FAILE_TOKENNUMERR     = 40171,
	LOG_FAILE_MAXTOKENNUMERR  = 40172,
	LOG_FAILE_ERRORINPUT      = 4201,
	LOG_FAILE_SESSIONINVA     = 4202,
	LOG_FAILE_RELOGIN         = 4203,
	LOG_FAILE_PASSSWORDLENERR = 4204,
	LOG_FAILE_ORG_SERVICE_ERR = 4205,
	LOG_FAILE_USERNAME_ERR    = 4206,
	LOG_FAILE_NEEDSETSECURITY = 4207,
	LOG_FAILE_REMOTE_LOGIN    = 4208,
	LOG_FAILE_LGTYPEUNMATCH   = 4209,
	LOG_FAILE_SMSTOOOFTEN     = 4210,
	LOG_FAILE_PWCARDEXCEPTION = 4211,
	LOG_FAILE_SMSCODETIMEOVER = 4212,
	LOG_FAILE_COMMUNICATIONERR= 4213,
	LOG_FAILE_PASSWORD_SIMPLE = 4214,
	LOG_FAILE_NOTBINDPHONENUM = 4215,
	LOG_FAILE_NOTSETLOGINPW   = 4216,
	LOG_FAILE_NOTBINDCARDNUM  = 4217,
	LOG_FAILE_IPFREQCHANGE    = 4218,
	LOG_FAILE_PIN_ERROR       = 4219,
	LOG_FAILE_NOTREGEBANK     = 4220,
	LOG_FAILE_CANNOTFINISHREQ = 4221,
	LOG_FAILE_SERVER_STOP     = 4222,
	LOG_FAILE_TRADE_UNDEF     = 4223,
	LOG_FAILE_CCB_USERNAMEONLY= 4224,
	LOG_FAILE_CCB_FIRSTLOGIN  = 4225,
	LOG_FAILE_HOOK_FAIL       = 4226,
	LOG_FAILE_PHONEOCR        = 4244,
	LOG_FAILE_INVAPAGEURL     = 4991,
	LOG_FAILE_INVAPHONSTATE   = 4992,
	LOG_FAILE_INVASTATE       = 4993,
	LOG_FAILE_UNDEFINEDBANKCON= 4994,
	LOG_FAILE_NOTFINDLOGINTYPE= 4995,
	LOG_FAILE_NOTFINDSUBTYPE  = 4996,
	LOG_FAILE_NOTFINDTYPE     = 4997,
	LOG_FAILE_UNDEFINEDTYPE   = 4998,
	LOG_FAILE_UNDEF           = 4999,

	WAIT_OUTTIME              = 504,

    PROCESS_EXIT              = 601,
    PROCESS_KEEP_ALIVE        = 602,    

    LOG_FAILE_CATCHFAIL       = 800,
    LOG_FAILE_TIMEOUT         = 801,
    LOG_FAILE_PAGEERR         = 802,
    LOG_FAILE_VERIFINOERR     = 803,  
    LOG_FAILE_BRANCHERR       = 804,  
    LOG_FAILE_NEEDPHONEVERIFY = 805,
};

#endif