/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAwayListItemCell.h"

@class SBAwayListUnlockActionContext, SBBulletinLockBar;

@interface SBAwayBulletinCell : SBAwayListItemCell {
	SBBulletinLockBar *_lockBar;	// 264 = 0x108
	SBAwayListUnlockActionContext *_actionContext;	// 268 = 0x10c
	BOOL _disableUnlockSound;	// 272 = 0x110
}
@property(readonly, assign, nonatomic) SBAwayListUnlockActionContext *actionContext;	// G=0x18aedd; @synthesize=_actionContext
+ (float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines rowWidth:(float)width;	// 0x18cf05
+ (float)rowHeightForSubtitle:(id)subtitle imageHeight:(float)height;	// 0x18cf6d
- (void)_createContentView;	// 0x18c909
- (void)dealloc;	// 0x18feb5
- (void)setMaxMessageLines:(unsigned)lines;	// 0x18c94d
- (void)setSubtitle:(id)subtitle;	// 0x18c971
- (void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;	// 0x18c995
- (void)setAttachmentImage:(id)image;	// 0x18c9d9
- (void)setAttachmentText:(id)text;	// 0x18c9fd
- (void)layoutSubviews;	// 0x19027d
- (void)setUnlockActionContext:(id)context;	// 0x190009
- (void)setDisableUnlockSound:(BOOL)sound;	// 0x18aecd
- (void)resetLockBar;	// 0x18ca21
- (void)lockBarUnlocked:(id)unlocked;	// 0x18ca79
- (void)lockBarStartedTracking:(id)tracking;	// 0x18cb31
- (void)lockBarStoppedTracking:(id)tracking;	// 0x18cccd
- (void)lockBarSlidBackToOrigin:(id)origin;	// 0x18cd4d
- (void)_lockBarSlidBackToOrigin:(id)origin withDuration:(double)duration;	// 0x18cd7d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x18ff2d
// declared property getter: - (id)actionContext;	// 0x18aedd
@end

