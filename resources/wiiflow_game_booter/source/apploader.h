#ifndef _APPLOADER_H_
#define _APPLOADER_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Prototypes */
u32 Apploader_Run(u8 vidMode, GXRModeObj *vmode, bool vipatch, bool countryString, u8 patchVidModes, int aspectRatio, u32 returnTo, 
					bool patchregion, u8 private_server, const char * server_addr, u8 videoWidth, bool patchFix480p, u8 deflicker, bool SD_card, u8 bootType);

enum
{
	PRIVSERV_OFF,
	PRIVSERV_NOSSL,
	PRIVSERV_WIIMMFI,
	PRIVSERV_MAX_CHOICE
	
};

enum
{
	DEFLICKER_NORMAL,
	DEFLICKER_OFF,
	DEFLICKER_OFF_EXTENDED,
	DEFLICKER_ON_LOW,
	DEFLICKER_ON_MEDIUM,
	DEFLICKER_ON_HIGH
};

enum
{
	WIDTH_AUTO,
	WIDTH_FRAMEBUFFER,
	WIDTH_MAX
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
