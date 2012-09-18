#ifndef VIDEO_VIDEOA5_H
#define VIDEO_VIDEOA5_H

#include "video.h"
#include "../shape.h"

extern bool VideoA5_Init(void);
extern void VideoA5_Uninit(void);
extern void VideoA5_ToggleFullscreen(void);
extern void VideoA5_CaptureScreenshot(void);
extern void VideoA5_Tick(void);
extern void VideoA5_SetPalette(const uint8 *palette, int from, int length);
extern void VideoA5_SetClippingArea(int x, int y, int w, int h);
extern void VideoA5_SetCursor(int cursor);
extern void VideoA5_ShowCursor(void);
extern void VideoA5_HideCursor(void);

extern void VideoA5_DrawLine(int x1, int y1, int x2, int y2, uint8 c);
extern void VideoA5_DrawRectangle(int x1, int y1, int x2, int y2, uint8 c);
extern void VideoA5_DrawFilledRectangle(int x1, int y1, int x2, int y2, uint8 c);
extern void VideoA5_DrawFilledRectRGBA(int x1, int y1, int x2, int y2, unsigned char r, unsigned char g, unsigned char b, int alpha);
extern void VideoA5_ShadeScreen(int alpha);

extern void VideoA5_InitSprites(void);
extern void VideoA5_DrawCPS(const char *filename);
extern void VideoA5_DrawCPSRegion(const char *filename, int sx, int sy, int dx, int dy, int w, int h);
extern void VideoA5_DrawCPSSpecial(enum CPSID cpsID, enum HouseType houseID, int x, int y);
extern void VideoA5_DrawIcon(uint16 iconID, enum HouseType houseID, int x, int y);
extern void VideoA5_DrawShape(enum ShapeID shapeID, enum HouseType houseID, int x, int y, int flags);
extern void VideoA5_DrawShapeScale(enum ShapeID shapeID, int x, int y, int w, int h, int flags);
extern void VideoA5_DrawShapeGrey(enum ShapeID shapeID, int x, int y, int flags);
extern void VideoA5_DrawShapeGreyScale(enum ShapeID shapeID, int x, int y, int w, int h, int flags);
extern void VideoA5_DrawShapeTint(enum ShapeID shapeID, int x, int y, unsigned char c, int flags);
extern void VideoA5_DrawChar(unsigned char c, const uint8 *pal, int x, int y);
extern bool VideoA5_DrawWSA(void *wsa, int frame, int sx, int sy, int dx, int dy, int w, int h);
extern void VideoA5_DrawWSAStatic(int frame, int x, int y);

extern void VideoA5_DrawFadeIn(const struct FadeInAux *aux, int x, int y);
extern bool VideoA5_TickFadeIn(struct FadeInAux *aux);
extern struct FadeInAux *VideoA5_InitFadeInCPS(const char *filename, int x, int y, int w, int h, bool fade_in);
extern struct FadeInAux *VideoA5_InitFadeInShape(enum ShapeID shapeID, enum HouseType houseID);

#endif
