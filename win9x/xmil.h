
typedef struct {
	int		winx;
	int		winy;

	UINT8	WINSNAP;
	UINT8	background;
	UINT8	DISPCLK;
	UINT8	NOWAIT;
	UINT8	DRAW_SKIP;

	UINT8	keyboard;
	UINT8	JOYSTICK;
	UINT8	Z80SAVE;

#if defined(SUPPORT_RESUME)
	UINT8	resume;
#endif
#if defined(SUPPORT_STATSAVE)
	UINT8	statsave;
#endif

	UINT8	clockx;
	UINT8	clockfnt;
	UINT32	clockcolor1;
	UINT32	clockcolor2;
} XMILOSCFG;


#define		FULLSCREEN_WIDTH	640
#define		FULLSCREEN_HEIGHT	480
#define		FULLSCREEN_POSY		((FULLSCREEN_HEIGHT - 400) / 2)


extern	XMILOSCFG	xmiloscfg;
extern	HWND		hWndMain;
extern	OEMCHAR		szProgName[];
extern	OEMCHAR		modulefile[MAX_PATH];
extern	OEMCHAR		fddfolder[MAX_PATH];
extern	OEMCHAR		bmpfilefolder[MAX_PATH];

enum {
	IDM_SCREENCENTER	= 20000,
	IDM_SNAPENABLE		= 20001,
	IDM_BACKGROUND		= 20002,
	IDM_BGSOUND			= 20003,

	IDM_FLAGSAVE		= 20100,
	IDM_FLAGLOAD		= 20150
};

